import requests
import os
import sys
from bs4 import BeautifulSoup

# Add current directory to path
sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), "..")))

ROOT_PATH = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
TEMP_PATH = ROOT_PATH+r"\problem_scraper\template.md"

def get_problem(id:str):
    res = {
        "title":None,
        "description":None,
        "input description":None,
        "output description":None,
        "examples":[]
    }
    r = requests.get(f"https://zerojudge.tw/ShowProblem?problemid={id}")
    soup = BeautifulSoup(r.text, "html.parser")
    res["title"] = soup.find("div", title="open").get_text().replace("\n", "").replace("\t", "")
    res["description"] = soup.find("div", id="problem_content").get_text()
    res["input description"] = soup.find("div", id="problem_theinput").get_text()
    res["output description"] = soup.find("div", id="problem_theoutput").get_text()
    return res


def get_template(path:str)->str:
    with open(path, "r", encoding="utf-8") as f:
        res = f.read()
    return res

def generate(path:str, temp:str, data:dict):
    # generate with template
    temp = temp.replace("{title}", data["title"])
    temp = temp.replace("{description}", data["description"])
    temp = temp.replace("{input description}", data["input description"])
    temp = temp.replace("{output description}", data["output description"])

    # write file
    with open(path, "w", encoding="utf-8") as f:
        f.write(temp)

def scan()->list:
    with os.scandir(ROOT_PATH) as problems:
        problems = [(problem.name, problem.name.split(".")[0])  for problem in problems if problem.is_dir()if "." in problem.name and problem.name[0].isalpha() and problem.name[1:4].isdigit()]
    return problems

if __name__ == "__main__":
    problems = scan()
    for problem in problems:
        try:
            temp = get_template(TEMP_PATH)
            data = get_problem(problem[1])
            generate("\\".join([ROOT_PATH, problem[0], "problem.md"]), temp, data)
        except:
            print(f"problem: {problem} fail to generate")
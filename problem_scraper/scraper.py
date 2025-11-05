import requests
import os
import sys
from bs4 import BeautifulSoup

# Add current directory to path
sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), "..")))

ID = "a001"
TEMP_PATH = "problem_scraper\\template.md"

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

def generate(path:str, name:str, temp:str, data:dict):
    # generate with template
    temp = temp.replace("{title}", data["title"])
    temp = temp.replace("{description}", data["description"])
    temp = temp.replace("{input description}", data["input description"])
    temp = temp.replace("{output description}", data["output description"])

    # write file
    with open(name, "w", encoding="utf-8") as f:
        f.write(temp)

def scan()->list:
    pass

if __name__ == "__main__":
    temp = get_template(TEMP_PATH)
    data = get_problem(ID)
    generate("", "test.md", temp, data)
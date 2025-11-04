#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string s;
    stringstream ss;
    
    getline(cin, s);
    ss<<s;
    int n;
    int start_val = -1;
    int start_index = -1;
    int pre_val = -1;
    int end_index = -1;
    int cnt = 1;
    bool flag = false;
    while(ss>>n){
        
        if(pre_val != -1){
            //case pre < n
            if(n>pre_val){
                start_val = n;
                start_index = cnt;
            }
            
            //case pre > n
            else if(n<pre_val){
                //there is an output
                if(start_val!=-1 && start_index!=-1){
                    //output case 1 peak
                    if(start_index == cnt-1){
                        cout<<start_index<<" "<<start_val<<"\n";
                        flag = true;
                    }
                    //ouput case n peak
                    else{
                        cout<<start_index<<" "<<cnt-1<<" "<<start_val<<"\n";
                        flag = true;
                    }

                    //reset 
                    start_val = -1;
                    start_index = -1;

                }
                
            }
            //case pre == n do nothing
            
        }
        
        //update
        pre_val = n;
        cnt++;
    }
    if(!flag)
        cout<<"0 0";
    return 0;
}
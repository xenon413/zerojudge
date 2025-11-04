#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        if(k==1){
            int temp;
            cin>>temp;
            s.push(temp);
        }
        if(k==2){
            if(s.empty())
                cout<<-1<<"\n";
            else
                cout<<s.top()<<"\n";
        }
        if(k==3){
            if(!s.empty())
                s.pop();
        }
    }
}
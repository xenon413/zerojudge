#include<iostream>
#include<set>
#include<vector>

using namespace std;


int main(){
    int m, n, k;
    cin>>m>>n>>k;
    vector<string> arr;
    set<char> s;
    int h=m-1, w=0;
    for(int i=0;i<m;i++){
        string temp;
        cin>>temp;
        arr.push_back(temp);
    }

    //steps
    for(int j=0;j<k;j++){
        int step;
        cin>>step;

        //case 0
        if(step==0 && h>0)
            h-=1;

        //case 1
        else if(step==1 && w<n-1)
            w+=1;

        //case 2
        else if(step==2 && w<n-1 && h<m-1){
            h+=1;
            w+=1;
        }

        //case 3
        else if(step==3 && h<m-1)
            h+=1;

        //case 4
        else if(step==4 && w>0)
            w-=1;

        //case 5
        else if(step==5 && w>0 && h>0){
            h-=1;
            w-=1;
        }
        cout<<arr[h][w];

        //record 
        s.insert(arr[h][w]);
    }
    cout<<"\n"<<s.size();
}
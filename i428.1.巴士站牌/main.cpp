#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int pre_x, pre_y, min_d=10000, max_d=0, d;
    cin>>pre_x>>pre_y;

    for(int i=1;i<n;i++){
        int x, y;
        cin>>x>>y;
        d = abs(x-pre_x)+abs(y-pre_y);
        if(d>max_d)
            max_d = d;
        if(d<min_d)
            min_d = d;
        
        pre_x = x;
        pre_y = y;
    }
    cout<<max_d<<" "<<min_d;
}
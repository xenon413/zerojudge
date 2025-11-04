#include<iostream>
#include<vector>
using namespace std;

int main(){
    int h, w, n;
    vector<vector<int>> arr;
    cin>>h>>w>>n;
    //init
    for(int i=0;i<h;i++){
        vector<int> temp;
        for(int j=0;j<w;j++){
            temp.push_back(0);
        }
        arr.push_back(temp);
    }

    for(int i=0;i<n;i++){
        int r, c, t, x;
        cin>>r>>c>>t>>x;
        for(int total=0;total<=t;total++){
            int r_shift = total, c_shift = total-r_shift;
            while(true){
                //case (0, 0)
                if(r_shift==0 && c_shift==0){
                    arr[r][c] += x;
                    break;
                }
                
                //case (j, 0)
                if(c_shift==0){
                    if(r-r_shift>=0)
                        arr[r-r_shift][c]+=x;

                    if(r+r_shift<h)
                        arr[r+r_shift][c]+=x;
                }

                //case (0, j)
                else if(r_shift==0){
                    if(c+c_shift<w)
                        arr[r][c+c_shift]+=x;

                    if(c-c_shift>=0)
                        arr[r][c-c_shift]+=x;
                    break;
                }

                //(x, y)
                else{
                    if(r+r_shift<h){
                        if(c+c_shift<w)
                            arr[r+r_shift][c+c_shift]+=x;
                        if(c-c_shift>=0)
                            arr[r+r_shift][c-c_shift]+=x;
                    }
                    if(r-r_shift>=0){
                        if(c+c_shift<w)
                            arr[r-r_shift][c+c_shift]+=x;
                        if(c-c_shift>=0)
                            arr[r-r_shift][c-c_shift]+=x;
                    }
                    
                    
                    
                    
                }

                //shift r shift and c shift
                r_shift--;
                c_shift++;
            }
            

        }
    }
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
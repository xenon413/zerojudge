#include<iostream>
#include<vector>
using namespace std;

int main(){
    //input
    vector<int>arr;
    int n, k, res=0;
    
    cin>>n>>k;
    int total = 0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        //record
        total += a;
        arr.push_back(a);
    }
    //cout<<1;
    //left dp
    int sum=0, cnt = 0;
    vector<int>zero;
    vector<vector<int>>oddcnt, evencnt;

    //init outer vector
    for(int i=0;i<n;i++){
        vector<int>temp1, temp2;
        oddcnt.push_back(temp1);
        evencnt.push_back(temp2);
    }
    
    for(int i=0;i<n;i++){
        sum+=arr[i];
        //break point
        if(sum>k)
            break;

        //record cnt
        if(arr[i]%2==0)
            cnt++;
        else
            cnt--;
        
        //case even
        if(cnt>0)
            evencnt[cnt].push_back(sum);
        //case odd
        else if(cnt<0)
            oddcnt[cnt*-1].push_back(sum);
        //case 0
        else{
            res = max(res, sum);
            zero.push_back(sum);
        }
    }

    //iter right
    sum = 0;
    cnt = 0;
    for(int i=n-1;i>=0;i--){
        sum+=arr[i];

        //break point
        if(sum>k)
            break;

        //record cnt
        if(arr[i]%2==0)
            cnt++;
        else
            cnt--;
        
        //match left and right
        //case even
        if(cnt>0){
            while(oddcnt[cnt].size()>0){
                //case >k
                if(sum + *(oddcnt[cnt].rbegin())>k||sum+ *(oddcnt[cnt].rbegin())>total)
                    oddcnt[cnt].pop_back();

                //case <=k
                else{
                    res = max(res, sum + *(oddcnt[cnt].rbegin()));
                    break;
                }
            }
        }
        else if(cnt<0){
            while(evencnt[cnt*-1].size()>0){
                if(sum + *(evencnt[cnt*-1].rbegin())>k || sum+ *(evencnt[cnt*-1].rbegin())>total)
                    evencnt[cnt*-1].pop_back();
                else{
                    res = max(res, sum + *(evencnt[cnt*-1].rbegin()));
                    break;
                }
            }  
        }
        else{
            res = max(res, sum);
            while(zero.size()>0){
                if(sum+*zero.rbegin()>k||sum+*zero.rbegin()>total)
                    zero.pop_back();
                else{
                    res = max(res, sum+*zero.rbegin());
                    break;
                }
            }
        }
    }
    cout<<res;
}
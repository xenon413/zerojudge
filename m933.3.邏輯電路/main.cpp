#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(){
    //input
    int p, q, r, m;
    cin>>p>>q>>r>>m;
    //----------------------
    vector<int>ports;
    //init ports 
    for(int i=0;i<=p+q+r;i++){
        ports.push_back(-1);
    }
    //get port val
    for(int i=1;i<=p;i++){
        int temp;
        cin>>temp;
        ports[i] = temp;
    }

    //----------------------
    vector<int>gates;
    //pad gates
    for(int i=0;i<=p;i++){
        gates.push_back(-1);
    }
    //get gate type
    for(int i=0;i<q;i++){
        int temp;
        cin>>temp;
        gates.push_back(temp);
    }
    //pad gates
    for(int i=0;i<r;i++){
        gates.push_back(0);
    }

    //----------------------
    map<int, vector<int>> relation;
    //get relation ship
    for(int i=0;i<m;i++){
        int temp1, temp2;
        cin>>temp1;
        cin>>temp2;
        relation[temp2].push_back(temp1);
    }

    //find val with relation
    int cnt=0;
    while(relation.size()>0){
        //temp is a copy of ports to store temp values
        vector<int> temp = ports;
        map<int, vector<int>>::iterator itr;
        for(itr = relation.begin();itr!=relation.end();){
            int type = gates[itr->first];
            //cout<<itr->first<<"\n";
            //and
            if(type==1){
                if(ports[itr->second[0]]!=-1 && ports[itr->second[1]]!=-1){
                    if(ports[itr->second[0]]==1 && ports[itr->second[1]]==1)
                        temp[itr->first] = 1;
                    else
                        temp[itr->first] = 0;
                }
                else{
                    itr++;
                    continue;
                }
                    
            }
            //or
            else if(type==2){
                if(ports[itr->second[0]]!=-1 && ports[itr->second[1]]!=-1){
                    if(ports[itr->second[0]]+ports[itr->second[1]]!=0)
                        temp[itr->first] = 1;
                    else
                        temp[itr->first] = 0;
                }
                else{
                    itr++;
                    continue;
                }
            }
            //xor
            else if(type==3){
                if(ports[itr->second[0]]!=-1 && ports[itr->second[1]]!=-1){
                    if(ports[itr->second[0]]+ports[itr->second[1]]==1)
                        temp[itr->first] = 1;
                    else
                        temp[itr->first] = 0;
                }
                else{
                    itr++;
                    continue;
                }
            }
            //not
            else if(type==4){
                if(ports[itr->second[0]]!=-1)
                    temp[itr->first] = (ports[itr->second[0]]+1)%2;
                else{
                    itr++;
                    continue;
                }
            }
            //case output
            else if(type==0){
                if(ports[itr->second[0]]!=-1)
                    temp[itr->first] = temp[itr->second[0]];
                else{
                    itr++;
                    continue;
                }
                //cout<<itr->first<<" "<<itr->second[0]<<"\n";
            }
            else
                cout<<"error";

            //erase and increase
            map<int, vector<int>>::iterator e = itr;
            itr++;
            relation.erase(e);
            //temp to port
        }
        ports = temp;
        //cnt
        cnt++;
    }
    cout<<cnt-1<<"\n";
    for(int i=p+q+1;i<ports.size();i++){
        cout<<ports[i]<<" ";
    }
    
}
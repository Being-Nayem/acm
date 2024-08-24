#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin>>n>>q;
    queue<pair<string, int>> processQ;
    while(n--){
        pair<string, int> temp;
        cin>>temp.first>>temp.second;
        processQ.push(temp);
    }
    int total_time=0;
    while(!processQ.empty()){
        if(processQ.front().second>q){
            total_time+=q;
            processQ.front().second-=q;
            pair<string, int> temp;
            temp.first=processQ.front().first;
            temp.second=processQ.front().second;
            processQ.pop();
            processQ.push(temp);
        }
        else{
            total_time+=processQ.front().second;
            cout<<processQ.front().first<<" "<<total_time<<endl;
            processQ.pop();
        }
    }
    return 0;
}
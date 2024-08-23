#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin>>n>>q;
    vector<vector <int>>v(n);
    while(q--){
        int act;
        cin>>act;
        if(act==0){
            int t, x;
            cin>>t>>x;
            v[t].push_back(x);
        }
        else if(act==1){
            int t;
            cin>>t;
            if(v[t].empty())    cout<<endl;
            else{
                for(int i=0; i<v[t].size(); i++){
                    if(i < v[t].size()-1)    cout<<v[t][i]<<" ";
                    else    cout<<v[t][i];
                }
                cout<<endl;
            }
        }
        else if(act==2){
            int t;
            cin>>t;
            v[t].clear();
        }
    }
}
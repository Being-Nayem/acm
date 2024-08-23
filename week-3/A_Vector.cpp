#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    while(n--){
        int act;
        cin>>act;
        if(act==0){
            int val;
            cin>>val;
            v.push_back(val);
        }
        else if(act==1){
            int pos;
            cin>>pos;
            if(pos<v.size())    cout<<v[pos]<<endl;
        }
        else if(act==2){
            if(!v.empty())      v.pop_back();
        }
    }
    return 0;
}
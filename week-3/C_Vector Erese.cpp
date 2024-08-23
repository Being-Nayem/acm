#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int pos, st, end;
    cin>>pos;
    cin>>st>>end;
    v.erase(v.begin()+pos-1);
    v.erase(v.begin()+st-1, v.begin()+end-1);
    cout<<v.size()<<endl;
    for(auto i:v)   cout<<i<<" ";
    cout<<endl;
}
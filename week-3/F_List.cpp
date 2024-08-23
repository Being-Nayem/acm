#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;
    list <int> l;
    auto cursor = l.end();
    while(q--){
        int act;
        cin>>act;
        if(act==0){
            int x;
            cin>>x;
            cursor = l.insert(cursor, x);
        }
        else if(act==1){
            int d;
            cin>>d;
            if(d>0) while(d-- && cursor!=l.end())   cursor++;
            else    while(d++ && cursor!=l.begin()) cursor--;
        }
        else if(act==2){
            if(cursor != l.end())   cursor = l.erase(cursor);
        }
    }
    for(auto i:l)   cout<<i<<endl;

}
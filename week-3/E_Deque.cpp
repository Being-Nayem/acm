#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;
    deque<int> dq;
    while(q--){
        int act;
        cin>>act;
        if(act==0){
            int d, x;
            cin>>d>>x;
            if(d==0)        dq.push_front(x);
            else if(d==1)   dq.push_back(x);
        }
        else if(act==1){
            int p;
            cin>>p;
            cout<<dq.at(p)<<endl;
        }
        else if(act==2){
            int d;
            cin>>d;
            if(d==0)        dq.pop_front();
            else if(d==1)   dq.pop_back();
        }
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    while(true){
        cin>>m>>n;
        if(m==0 && n==0) break;
        set <int> jack;
        while(m--){
            int val;
            cin>>val;
            jack.insert(val);
        }
        int maxSell=0;
        while(n--){
            int val;
            cin>>val;
            if(jack.find(val)!=jack.end()) maxSell++;
        }
        cout<<maxSell<<endl;
    }
}
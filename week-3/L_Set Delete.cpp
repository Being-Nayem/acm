#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    set<int> s;
    while(n--){
        int act;
        cin>>act;
        if(act==0){
            int temp;
            cin>>temp;
            s.insert(temp);
            cout<<s.size()<<endl;
        }
        else if(act==1){
            int temp;
            cin>>temp;
            if(s.find(temp)!=s.end())    cout<<1<<endl;
            else                        cout<<0<<endl;
        }
        else if(act==2){
            int temp;
            cin>>temp;
            s.erase(temp);
        }
    }
}
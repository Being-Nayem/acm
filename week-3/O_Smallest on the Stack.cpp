#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);  
    int n;
    cin>>n;
    stack <int> st;
    stack <int> minSt;
    while(n--){
        string act;
        cin>>act;
        if(act=="PUSH"){
            int val;
            cin>>val;
            st.push(val);
            if(minSt.empty() || val<=minSt.top())   minSt.push(val);
        }
        else if(act=="POP"){
            if(!st.empty()){
                if(st.top()==minSt.top())   minSt.pop();
                st.pop();
            }
            else cout<<"EMPTY\n";
        } 
        else if(act=="MIN"){
            if(!minSt.empty())   cout<<minSt.top()<<"\n";
            else cout<<"EMPTY\n";
        }
    }
    return 0;
}
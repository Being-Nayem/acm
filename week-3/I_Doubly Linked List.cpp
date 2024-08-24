#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    list<int> l;
    while(n--){
        string s;
        cin>>s;
        if(s=="insert"){
            int x;
            cin>>x;
            l.push_front(x);
        }
        else if(s=="delete"){
            int val;
            cin>>val;
            auto it=find(l.begin(), l.end(), val);
            if(it!=l.end())         l.erase(it);
        }
        else if(s=="deleteFirst")   l.pop_front();
        else if(s=="deleteLast")    l.pop_back();
    }
    auto lastElement = --l.end();
    for(auto it=l.begin(); it!=l.end(); it++){
        if(it != lastElement)   cout<<*it<<" ";
        else                    cout<<*it;
    }
    cout<<endl;
    return 0;
}
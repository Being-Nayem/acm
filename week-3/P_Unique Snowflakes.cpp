#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxUnique=0;
        set <int> snowflakes;
        deque <int> windoow;
        while(n--){
            int val;
            cin>>val;
            if(snowflakes.find(val)!=snowflakes.end()){
                while(snowflakes.find(val)!=snowflakes.end()){
                    snowflakes.erase(windoow.front());
                    windoow.pop_front();
                }
            }
            snowflakes.insert(val);
            windoow.push_back(val);
            maxUnique=max(maxUnique,(int)snowflakes.size());
        }
       
        cout<<maxUnique<<endl;
        
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    stack<long long> st;
    stringstream ss(s);
    string token;
    
    while(ss>>token){
        if(isdigit(token[0]))   st.push(stoll(token));
        else{
            long long operand2=st.top();
            st.pop();
            long long operand1=st.top();
            st.pop();
            
            if(token == "+")        st.push(operand1+operand2);
            else if(token == "-")   st.push(operand1-operand2);
            else if(token == "*")   st.push(operand1 * operand2);
        }
    }

    cout<<st.top()<<endl;
    return 0;
}

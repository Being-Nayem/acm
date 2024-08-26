#include <bits/stdc++.h>
using namespace std;

vector<int> makeLPS(string pat){
    int len=0, i=1, m=pat.size();
    vector<int> lps(m, 0);
    while(i<m){
        if(pat[i]==pat[len]){
            len++;
            lps[i]=len;
            i++;
        }
        else{
            if(len!=0)  len=lps[len-1];
            else        lps[i]=0, i++;
        }
    }
    return lps;
}
void KMP(string text, string pat){
    int n=text.size(), m=pat.size();
    vector<int> lps=makeLPS(pat);
    int i=0, j=0;
    while(i<n){
        if(text[i]==pat[j]) i++, j++;
        if(j==m)    cout<<i-j<<endl, j=lps[j-1];
        else if(i<n && text[i]!=pat[j]){
            if(j!=0)    j=lps[j-1];
            else        i++;
        }
    }
}

int main() {
    string text, pat;
    cin>>text>>pat;
    if(!(text.size()<pat.size()))   KMP(text, pat);
    return 0;
}

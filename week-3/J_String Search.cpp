#include <bits/stdc++.h>
using namespace std;

// Function to build the longest prefix suffix (LPS) array
vector<int> buildLPS(const string &pattern) {
    int m = pattern.size();
    vector<int> lps(m, 0);
    int length = 0;
    int i = 1;
    while (i < m) {
        if (pattern[i] == pattern[length]) {
            length++;
            lps[i] = length;
            i++;
        } 
        else {
            if (length != 0) {
                length = lps[length - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

// Function to find all occurrences of the pattern in the text using KMP
void KMP(const string &text, const string &pattern) {
    int n = text.size();
    int m = pattern.size();
    vector<int> lps = buildLPS(pattern);
    int i = 0; // index for text
    int j = 0; // index for pattern
    while (i < n) {
        if (text[i] == pattern[j]) {
            i++;
            j++;
        }

        if (j == m) {
            // Pattern found at index (i - j)
            cout << i - j << endl;
            j = lps[j - 1];
        } else if (i < n && text[i] != pattern[j]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
}

int main() {
    string T, P;
    cin >> T >> P;
    
    // If the pattern length is greater than the text length, no matches are possible
    if (P.size() > T.size()) {
        return 0;
    }
    
    KMP(T, P);

    return 0;
}

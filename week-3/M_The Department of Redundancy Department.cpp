#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> frequencyMap;
    vector<int> orderList;

    int number;
    while(cin>>number){
        if(frequencyMap.find(number) == frequencyMap.end()){
            orderList.push_back(number);
        }
        frequencyMap[number]++;
    }
    for(auto num : orderList){
        cout<<num<<" "<<frequencyMap[num]<<endl;
    }
    return 0;
}

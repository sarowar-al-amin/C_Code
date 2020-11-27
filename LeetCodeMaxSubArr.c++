// Implementing using Kedene's Alogorithm
#include<bits/stdc++.h>
#include<vector>

using namespace std;


int main(){

    int answer = INT_MIN;
    vector<int> Array;

    int number,temp;
    cin >> number;

    for(int i = 0; i < number; i++){
        cin >> temp;
        Array.push_back(temp);
    }

    int a = 0;

    for(int i = 0; i < Array.size(); i++){
        a += Array[i];
        answer = max(answer , a);
        a = max(a, 0);
    }

    cout << answer << endl; 


    return 0;
}
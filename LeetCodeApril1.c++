#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){
    int number, temp;
    vector<int> List;

    cin >> number;
    
    for(int i = 0; i < number; i++){
        cin >> temp;
        List.push_back(temp);
    }

    // Operation 
    temp = List[0];

    for(int i = 1; i < number; i++){
        temp ^= List[i];
    }

    cout << temp << endl;
    
    return 0;
}
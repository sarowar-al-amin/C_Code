#include<bits/stdc++.h>
#include<vector>

using namespace std;



bool happyOrNot(int number){
    bool flag;
    vector<int> count;
    
    if(number == 1){
        flag = true;
    }else if( number < 10){
        flag = false;
    }else{
        int temp;
        while(number > 9){
            temp = number % 10;
            count.push_back(temp);
            number = number / 10;
        }
        int latest = number*number;

        int len = count.size();

        for(int i = 0; i < len; i++){
            latest = latest + count[i]*count[i];
        }

        flag = happyOrNot(latest);

    }

    return flag;
}

int main(){

    int number;
    cin >> number;
    

    vector<int> len;
    // cout << len.size() <<endl;

    bool result = happyOrNot(number);

    // cout << result <<endl;

    if (result){
        cout << "true" << endl;
    }else{
        cout << "Not a happy number" << endl;
    }
  
    return 0;
}
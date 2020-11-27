#include<bits/stdc++.h>


using namespace std;

int checking(int x1, int v1, int x2, int v2){
    int flag ;
    if(x1 < x2 && v1 < v2){
        flag = 0;
    }else{
        if( v1 != v2 &&((x2-x1)%(v1-v2) == 0)){
            flag = 1;
        }else{
            flag = 0;
        }
    }

    return flag;
}

int main(){
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;

    int possibility = checking(x1, v1, x2, v2);

    if(possibility == 0){
        cout << "No";
    }else{
        cout << "Yes";
    }

    cout << endl;
    return 0;
}
#include<bits/stdc++.h>

using namespace std;

int requiredPageTurn(int n, int p){
    int result;

    int front = p/2;
    int back;
    if(n%2 == 1){
        back = (n-p)/2;
    }else
    {
        back= (n-p+1)/2;
    }

    if(back>front){
        result = front;
    }else{
        result = back;
    }
    
    return result;
}

int main(){

    int n, p;
    cout<<"Enter the book length: "<<endl;
    cin >> n;
    cout<<"Required page: "<<endl;
    cin >> p;

    int answer = requiredPageTurn(n,p);

    cout <<"Need to turn : "<<answer<<" pages"<<endl;

    return 0;
}
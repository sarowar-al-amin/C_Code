#include<bits\stdc++.h>
#include<vector>

using namespace std;

int main(){

    int number_of_hurdle, height, max;
    vector<int> hurdle;

    cout<<"Enter the number of hurdle: "<<endl;
    cin >> number_of_hurdle;
    cout <<"\nEnter the initial height he is capable of jumping: "<<endl;
    cin >> height;

    cout<<"Enter all hurdles heiht :"<<endl;
    for(int i = 0; i < number_of_hurdle; i++){
        int temp;
        cin >> temp;
        hurdle.push_back(temp);
    }
    max = 0;
    for(int i = 0; i < number_of_hurdle; i++){
        if(hurdle[i] > max){
            max = hurdle[i];
        }
    }

    if(height > max){
        cout <<"He needs "<<0 <<" boost pill"<<endl;
    }else
    {
        cout<<"He needs "<<(max - height)<<" boost pill"<<endl;
    }
    cout<<endl;

    return 0;
}
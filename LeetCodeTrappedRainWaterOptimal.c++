#include<bits/stdc++.h>
#include<vector>

using namespace std;

vector<int> waterContainer;
int totalWaterVoume;

void calculatingTrappedWaterVolume(){
    int len = waterContainer.size();

    int initialPoint = 0, endPoint = len - 1;
    int leftMax = 0;
    int rightMax = 0;

    while (initialPoint < endPoint)
    {
        /* code */
        if(waterContainer[initialPoint] <= waterContainer[endPoint]){
            if(waterContainer[initialPoint] >= leftMax){
                leftMax = waterContainer[initialPoint];
            }else{
                totalWaterVoume += (leftMax - waterContainer[initialPoint]);
            }
            initialPoint++;
        }else{
            if(waterContainer[endPoint] >= rightMax){
                rightMax = waterContainer[endPoint];
            }else{
                totalWaterVoume += (rightMax - waterContainer[endPoint]);
            }
            endPoint--;
        }
    }
    

}

int main(){
    int length;
    totalWaterVoume = 0;

    cout <<"Enter the length of container array: "<< endl;
    cin >> length;
    cout <<"Enter the value to the array: "<< endl;
    for(int i = 0; i < length; i++){
        int x;
        cin >> x;
        waterContainer.push_back(x);
    }

    calculatingTrappedWaterVolume();

    if(totalWaterVoume > 0){
        cout <<"Total trapped water volume is : "<< totalWaterVoume << endl;
    }
    return 0;
}
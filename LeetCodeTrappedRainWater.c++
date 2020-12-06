#include<bits/stdc++.h>
#include<vector>

using namespace std;

vector<int> waterContainer;
int totalWaterVolume;

void calculateTotalVolume(){
    int len = waterContainer.size();
    
    for(int i = 0; i < len - 1; i++){
        int j = 0, k = len - 1;
        int leftMax = 0, rightMax = 0;
        while (j <= i)
        {
            /* code */
            if(waterContainer[j] >= leftMax){
                leftMax = waterContainer[j];
            }
            j++;
        }

        while(k > i){
            if(waterContainer[k]> rightMax){
                rightMax = waterContainer[k];
            }
            k--;
        }

        int volume = min(leftMax, rightMax) - waterContainer[i];

        if(volume > 0){
            totalWaterVolume += volume;
        }
    }

}

int main(){
    int length;
    totalWaterVolume = 0;

    cout <<"Enter the length of water container: "<<endl;
    cin >> length;

    cout <<"Enter each bar lenght: "<<endl;
    for(int i = 0; i < length; i++){
        int x;
        cin >> x;
        waterContainer.push_back(x);
    }

    calculateTotalVolume();

    if(totalWaterVolume > 0){
        cout <<"\nTotal volume of the water is: "<< totalWaterVolume << endl;
    }

    return 0;
}
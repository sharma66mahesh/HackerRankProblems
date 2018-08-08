
#include<iostream>

using namespace std;

int main(){
    float sumj, sum = 0;
    for(int i = 1; i <= 6; i++){
            sumj = 0;
        for(int j = 1; j <= (6-i); j++){
            if(i+j ==6 && i != j){
                sumj++;
            }
        }

        sum += sumj/36;
    }

    cout << sum;
}

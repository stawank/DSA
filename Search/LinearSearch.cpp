#include<iostream>

using namespace std;


int main(){
    int inputArr [] = {2, 4, 6,10,8,12};
    int target = 10;
    bool isTargetFound = false;
    for (int i = 0; i < 6; i++ ){
        if(inputArr[i]== target){
            isTargetFound = true;
            break;
        }
    }
    cout<<"Did we found the target? : "<< isTargetFound<< endl;







    return 0;
} 
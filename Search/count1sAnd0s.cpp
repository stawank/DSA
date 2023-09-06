#include<iostream>

using namespace std;







int main(){
    int arr[10]= {1,1,5,0,6,0,1,8,9,0};
    int count1= 0;
    int count0= 0;

    for (int i = 0; i < 10; i++ ){
        if(arr[i]==1){
            count1++;
        }
        else if(arr[i]==0){
            count0++;
        }
    }

    cout<<"1s found in the array: "<< count1<< endl;
    cout<<"0s found in the array: "<< count0<< endl;





    return 0;
}
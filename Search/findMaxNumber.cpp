#include <iostream>
using namespace std;
#include<limits>




int findMax(int arr[], int size){
    int min = INT32_MIN;
    for (int i = 0; i< size; i++){
        if(arr[i]>min){
            min = arr[i];
        }
    }
    return min;
}


int main(){
    int arr[7]= {1,2,3,4,5,6,-10};
    int size = 7;
    cout<<"Maximum number in the arry is: "<< findMax(arr, size) << endl;



 

    return 0;
}
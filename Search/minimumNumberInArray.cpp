#include <iostream>
using namespace std;
#include<limits>




int findMinimum (int arr[], int size){
    int min = INT32_MAX;
    for (int i = 0; i< size; i++){
        if(arr[i]< min){
            min = arr[i];
        }
    }
    return min;
}


int main(){
    int arr[7]= {1,2,3,4,5,6,-10};
    int size = 7;
    cout<<"minimum number in the arry is: "<< findMinimum(arr, size) << endl;



 

    return 0;
}
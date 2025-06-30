#include<iostream>


using namespace std;

int findLargest(int* arr, int length){
    int largest = arr[0];
    for (int i =0; i< length; i++){
        if(arr[i]> largest){
            largest = arr[i];
        }

    }
    return largest;
}

int main(){
    int arr [7] = { 1,3,2,5,94,4,56};
    cout<< findLargest(arr, 7)<< endl;
    return 0;


    
}
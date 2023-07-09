#include<iostream>
using namespace std;

/*
Given an array of integers arr, return true if the number 
of occurrences of each value in the array is unique or false otherwise.
*/


bool isUniqueOccurance (int arr[], int size) {
    int unique= 0;
    for(int i = 0; i <size; i++ ){
        unique = unique ^arr[i];

    }
    if (unique != 0){
        return true;
    } 
    else
        return false;
}

int main(){

    int arr[6] = { 1,2,3,2,1, 3};
    int size = 6;
    cout<< "\n" <<isUniqueOccurance(arr, size)<< endl;

    return 0;
}
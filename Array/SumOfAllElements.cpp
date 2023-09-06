#include<iostream>

using namespace std;


int main(){
    int arr[5];
    int sum = 0;

    for (int i = 0; i < 5; i++ ){
        cout<< "Type value at index "<< i << " ";
        cin>> arr[i];
        cout<< endl;
        sum = sum + arr[i];
    }
    cout<< "The sum all numbers in arry is: "<< sum<< endl;






    return 0;
}
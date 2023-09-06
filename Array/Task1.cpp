#include<iostream>

using namespace std;


int main(){
    int arr[10];


    for (int i = 0; i < 10; i++ ){
        cout<< "Type value at index "<< i << " ";
        cin>> arr[i];
        cout<< endl;
    }

    cout<< " Arry of doubled numbers  "<< endl;
    for (int i = 0; i < 10; i++ ){
        cout << 2*arr[i] << " " ;
    }






    return 0;
}
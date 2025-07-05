#include<iostream>

using namespace std;



void printArr(int Arr[], int len){

    for(int i = 0 ; i < len; i++){
        cout<<Arr[i] << " ";
    }
    cout<< endl;
}
void swap(int &a, int &b){
    a = a^b;
    b = a^b;
    a = a^b;
}

void insertionsort(int arr[], int len){
    
    for(int i = 0; i< len; i++){
        int j = i;
        while(j > 0 && arr[j-1]>arr[j]){
            swap(arr[j], arr[j-1]);
            j--;
        }

    }



    
}

int main(){
    int arr[6] = { 32, 54,67,5,4,76};
    printArr(arr, 6);
    insertionsort(arr, 6);
    printArr(arr, 6);









    return 0;
}
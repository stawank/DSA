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
void moveZerosToEnd(int arr[], int size){
    int j = size-1;
    int i =0;
    while(i < j){
        if(arr[i]==0){
            swap(arr[i], arr[j]);
            j--;
        }
        else{
            i++;
        }
        


    }
}


int main(){
    int arr [5] = {0,0,0,1,1};
    printArr(arr, 5);
    moveZerosToEnd(arr, 5);
    printArr(arr, 5);



    return 0;
}
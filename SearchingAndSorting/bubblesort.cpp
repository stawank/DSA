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

void bubblesort(int arr[], int len){
    
    for(int i = len-1; i>0; i--){
        
        for (int j = 0; j < i ; j++) {
            if(arr[j+1]<arr[j]){
                swap(arr[j], arr[j+1]);
            }
        }


    }



    
}

int main(){
    int arr[6] = { 32, 54,2,5,4,76};
    printArr(arr, 6);
    bubblesort(arr, 6);
    printArr(arr, 6);









    return 0;
}
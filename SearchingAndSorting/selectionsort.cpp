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

void selectionsort(int arr[], int len){
    
    for(int i = 0; i< len-2; i++){
        int min = i;
        
        for(int j = i; j< len-1; j++){
            if(arr[j]< arr[min]){
                min = j;
            }
        }
        swap(arr[i], arr[min]);


    }



    
}

int main(){
    int arr[6] = { 32, 54,2,3,4,76};
    printArr(arr, 6);
    selectionsort(arr, 6);
    printArr(arr, 6);

    int a = 10;
    int b = 11;

    // cout<<" a: "<< a<<" b: "<< b << endl;

    // swap(a,b);

    // cout<<" a: "<< a<<" b: "<< b << endl;







    return 0;
}
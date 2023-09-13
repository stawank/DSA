#include<iostream>
using namespace std;

void ShiftNegativesOneSide (int arr[], int size){
    int j = 0;
    for (int index =0; index < size; index++){
        
        if(arr[index]<0){
            swap(arr[index],arr[j]);
            j++;
        }
    }

}

void printArr(int arr[], int size){
    for (int i = 0; i< size; i++){
        cout<< arr[i]<< " ";
    }
    cout << endl;
}

int main(){
    int arr[6] = {0, 1, -4, 4, -2, 5};
    int size = 6;
    printArr(arr, size);

    ShiftNegativesOneSide(arr, size);

    printArr(arr, size);




    return 0;
}
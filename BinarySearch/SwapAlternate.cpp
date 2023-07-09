#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

void swapAlternate (int arr[], int size){
    int start = 0;
    for (int i = 0; i < size-1; i = i+2 ) {
         
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;

    }

}

void printArr( int arr[], int size) {
    cout << " [";
    for(int i = 0; i < size; i += 1){
        cout<< " "<< arr[i] ;
    }
    cout << "]";
}

int main(){
    int ipArr[6] = {1, 2, 3, 4, 5, 6};
    printArr(ipArr, 6);
    swapAlternate(ipArr, 6);
    printArr(ipArr, 6);



    return 0;
}
#include <iostream>
using namespace std;






void swapArray(int arr[], int size){
    int left = 0;
    int right = size -1;

    while(left <= right){
        int num3 = arr[left];
        arr[left] = arr[right];
        arr[right] = num3;

        left++;
        right--;
    }

    for (int i = 0; i< size; i++){
        cout<<arr[i]<<" ";
    }

}



int main(){

    


    int arr[5] = {1,2,3,4,5};
    int size = 5;

    swapArray(arr, size);





    return 0;
}
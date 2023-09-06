
#include<iostream>
using namespace std;


void extremePrint(int arr[], int size){
    int left = 0;
    int right = size -1;

    while(left<= right){
        if(left == right){
            cout<< arr[left];
        }
        else{
        cout<< arr[left]<<" "<< arr[right]<<" ";

        }
        left++;
        right--;
    }


}



int main(){
    int arr[5]= {1,2,3,4,5};
    int size = 5;

    //output should be 1,5,2,4,3
    extremePrint(arr, size);



    return 0;
}
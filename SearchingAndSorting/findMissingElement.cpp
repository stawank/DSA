#include<iostream>
using namespace std;

int binarySearch (int arr[], int size){

    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;

    while (start<= end){

        if(arr[mid]==){
            return mid;
        }
        else if (arr[mid]> key) {
            end = mid -1;
            mid = (start+end)/2;
        }

        else if (arr[mid]< key) {
            start = mid +1;
            mid = (start+end)/2;
        }
    }
    return -1;
}





int main(){




    return 0;
}
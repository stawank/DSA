#include<iostream>

using namespace std;

int binarySearch (int arr[], int size, int key){

    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;

    while (start<= end){

        if(arr[mid]==key){
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

    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[7] = {1, 3, 5, 7, 9, 11, 13};

    int index = binarySearch(odd, 7, 11);

    cout <<"Index of key is "<< index<< endl;
    
    return 0;

}
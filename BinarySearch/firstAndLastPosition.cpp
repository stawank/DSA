#include<iostream>
using namespace std;
 
int firstOccurance(int arr[], int size, int key){
    int ans = -1;
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid -1; 
        }

        else if ( arr[mid]> key){
            end = mid-1;        
        }
        else {
            start = mid +1;       
        }
        mid = (start+end)/2;
    }
    return ans;
}

int lastOccurance(int arr[], int size, int key){
    int ans = -1;
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid +1;
        }

        else if ( arr[mid]> key){
            end = mid-1;        
        }
        else {
            start = mid +1;       
        }
        mid = (start+end)/2;
    }
    return ans;
}

int main(){
    int arr[9] = {0 , 1, 2, 3, 3,3,3,3,4};
    int key = 13;

    int index = firstOccurance(arr, 9, key);
    int lastIndex = lastOccurance(arr, 9, key);

    cout<<" First Occurance of 13 is at Index " << index << endl;
    cout<<" Last Occurance of 13 is at Index " << lastIndex << endl;


    return 0;
}
#include<iostream>
using namespace std;

int binSearch(int arr[], int size, int target){

    int start = 0;
    int end = size-1;
    // There is some flaw in this line
    int mid = (start + end)/2;

    while(start<=end){
        // found
        if(arr[mid]==target){
            return mid;
        }

        else if (arr[mid]> target){
            //left me jao
            end = mid - 1;
            mid = (start + end)/2;
            
        }
        else{
            // right m jao
            start = mid + 1;
            mid = (start + end)/2;
            
        }
    }
    return -1;
}
int findFirstOccurance(int arr[], int size, int target){
    int start = 0;
    int end = size -1;
    int mid = (start+end)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]==target){
            ans = mid;
            // left m jao
            end = mid-1;
        }

        else if(target> arr[mid]){
            //right me jao
            start= mid+1;
        }
         else{
            //left m jao
            mid =  end-1;
        }
        mid = (start+end)/2;


    }
    return ans;



}

int findLastOccurance(int arr[], int size, int target){
    int start = 0;
    int end = size -1;
    int mid = (start+end)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]==target){
            ans = mid;
            // right m jao
            start = mid +1 ;
        }

        else if(target> arr[mid]){
            //right me jao
            start= mid+1;
        }
         else{
            //left m jao
            mid =  end-1;
        }
        mid = (start+end)/2;


    }
    return ans;



}


int main(){

    int arr [9] = {10, 20,30,30,30, 30, 30, 40, 50};
    int target = 30;
    int size = 9;

    int index = findLastOccurance(arr,  size, target);
    

    if(index==-1){
        cout<<" Element not found" << endl;
    }

    else{
        cout<<" First element found at "<< index << endl;
    }




    return 0;
}



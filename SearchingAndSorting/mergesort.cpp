#include<iostream>
#include<vector>


using namespace std;



void printArr(std::vector<int> &Arr, int len){

    for(int i = 0 ; i < len; i++){
        std::cout << Arr[i] << " ";
    }
    cout<< endl;
}
void swap(int &a, int &b){
    a = a^b;
    b = a^b;
    a = a^b;
}

void merge(vector<int> &arr, int low, int mid, int high){

    vector<int> temp = {};
    int left = low;
    int right = mid+1;

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }


    }

    while(left<= mid){
        temp.push_back(arr[left]);
        left++;       
    }
    while(right<= high){
        temp.push_back(arr[right]);
        right++;  
    }

    for(int i = low; i < high+1; i++){
        arr[i] = temp[i-low];
    }
}

void mergesort(vector<int> &arr, int low, int high){
    
    if(low >= high){
        return;
    }
    int mid = (low+high)/2 ;
    mergesort (arr, low, mid);
    mergesort(arr, mid+1, high);
    merge(arr, low, mid, high);
    
}

int main(){
    std::vector<int> arr = { 87,564,33,2,2,3,1,1,4,5,53,45};
    printArr(arr, arr.size());
    mergesort(arr, 0, arr.size()-1);
    printArr(arr, arr.size());









    return 0;
}
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

int partition(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j){
        while(arr[i]<= pivot && i<= high-1){
            i++;
        }
        while(arr[j]> pivot && j> low+1){
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;

}

void quicksort(vector<int> &arr, int low, int high){
    
    if(low >= high){
        return;
    }
    int PIndex = partition(arr, low, high);
    quicksort (arr, low, PIndex-1);
    quicksort (arr, PIndex+1, high);
    
    
}

int main(){
    std::vector<int> arr = { 87,564,33,2,2,3,1,1,4,5,53,45};
    printArr(arr, arr.size());
    quicksort(arr, 0, arr.size()-1);
    printArr(arr, arr.size());









    return 0;
}
#include <iostream>
using namespace std;
#include <vector>


void printArr(vector <int> arr){
    int n = arr.size();
    for(int i= 0; i< n; i++){
        cout<< arr[i]<<" ";
    }
    cout<< endl;
}

void rotateArr(vector<int>& nums, int K){
    int n = nums.size();
    vector<int> newArr(n);

    for(int i= 0; i< n; i++){
        int newIndex = (i+K)%n;

        newArr[newIndex] = nums[i];
    }


    nums = newArr;
}



int main(){

    cout<<"Hi" << endl;

    int k =2;
    vector<int> arr = {10, 20, 30,40,50,60};
    printArr(arr);
    rotateArr(arr,k );

    printArr(arr);


    return 0;
}
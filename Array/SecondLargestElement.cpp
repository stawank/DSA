#include<iostream>
#include<vector>


using namespace std;


    int findSecondLargest(vector<int> &arr){
    int length = arr.size();
    int largest = -1;
    int secondLargest = -1;
    for (int i=0; i < length; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];

        }
        else if(arr[i] < largest && arr[i]> secondLargest){
            secondLargest = arr[i];
        }

    }

    return secondLargest;
}
int main(){
    vector<int> arr = { 1,3,2,5,94,4,56};
    cout<< findSecondLargest(arr)<< endl;

    vector<int> arr2 = { 10,10,10,10};
    cout<< findSecondLargest(arr2)<< endl;
    return 0;



}
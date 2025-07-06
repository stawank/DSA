#include<iostream>
#include<vector>

using namespace std;

void printArr(vector<int> &Arr, int len){

    for(int i = 0 ; i < len; i++){
        std::cout << Arr[i] << " ";
    }
    cout<< endl;
}
void moveByOne(vector<int> &Arr, int D){
    vector<int> temp = Arr;
    int len = Arr.size();
    for (int i =0; i < Arr.size(); ++i){
        Arr[(len + i-D)%len] = temp[i];

    }
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    printArr(arr, arr.size());
    moveByOne(arr, 2);
    printArr(arr, arr.size());



    return 0;
}
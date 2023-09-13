#include <iostream>
using namespace std;
#include<vector>

void printArr(vector <int> arr){
    int n = arr.size();
    for(int i= 0; i< n; i++){
        cout<< arr[i]<<" ";
    }
    cout<< endl;
    }

int main(){
    cout<< "This is an example k!"<< endl;
    std::vector<int> arr = {10, 20, 30};
    printArr(arr);
    return 0;
}
#include<iostream>
using namespace std;
/*

You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].

Now, in the given array/list, 'M' numbers are present twice and one number is present only once.

You need to find and return that number which is unique in the array/list.
*/

void printArr( int arr[], int size) {
    cout << " [";
    for(int i = 0; i < size; i += 1){
        cout<< " "<< arr[i] ;
    }
    cout << "]"<< endl;
}

int returnUnique(int ipArr[], int size){
    int unique ;
 
    int count [11] = {0};
    for(int i =0; i < size; i+= 1){
        for (int j = 0; j < size; j+=1){
            if (ipArr[i]==ipArr[j]){
                count[i] += 1;
            }
            
        }
    }

    printArr(ipArr, size);
    printArr(count, size);

    for (int j =0; j < size; j+= 1){
        if(count[j]==1){
            unique =  j;
        }
    }
    return unique;
}


int main(){
    int size = 11;
    int ipArr[11] = { 1,2,1,3,2, 3,4, 7, 4, 10,7};
    
    int number = returnUnique(ipArr, size);
    cout<< "\n" <<"Unique member in array: " << ipArr[number] << endl;





    return 0;
}
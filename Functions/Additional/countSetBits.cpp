#include<iostream>
using namespace std;


int countSetBits(int num){
    int count = 0;
    for(int i = 0; (2<<(i-1)) <= num; i++){
        int mask = 1<<i;
        if(mask&num){
            count++;
        }
    }
    return count;


}



int main(){
    int num =15;
    cout<< countSetBits(num)<< endl;

    return 0;
}
#include<iostream>
using namespace std;



int setKthBit(int N, int K){

    int mask = 1 << K;
    N = N | mask;


    return N;
}

int main(){
    int ans = setKthBit(15, 3);
    cout<< ans;

    return 0;
}
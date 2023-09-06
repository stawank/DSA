#include<iostream>
using namespace std;

bool checkPrime(int N){
    for (int i=2; i<=N/2; i++){
        if (N%i == 0){
            return false;
        }

    }
    return true;
}


void printAllPrimesUptoN( int N){

    for (int i = 1; i <= N; i++){
        bool isPrime = checkPrime(i);
        if(isPrime){
            cout<<i<< endl;
        }
    } 
}


int main(){

    printAllPrimesUptoN(39);


    return 0;
}
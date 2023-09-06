#include<iostream>
using namespace std;



int sumOfAllEvenUptoN(int N){
    int sum = 0;
    for(int i=0; i<=N ; i += 2){
        sum += i;
    }
    return sum;
}

int main(){
    int sum = sumOfAllEvenUptoN(10);
    cout<< sum << endl;


    return 0;
}
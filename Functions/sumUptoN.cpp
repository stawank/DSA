#include<iostream>
using namespace std;



int sumUptoN(int N){
    int sum = 0;
    for(int i=1; i<=N ; i++){
        sum += i;
    }
    return sum;
}

int main(){
    int sum = sumUptoN(5);
    cout<< sum << endl;


    return 0;
}
#include<iostream>

using namespace std;

bool checkPrime (int num){

    for (int i = 2; i< num/2; i++){
        if(num%i==0){
            // number is divisible, hence not prime
            return false;
        }
    }

    return true;    

}
int main(){
    bool isPrime = checkPrime(12);
    if(isPrime){
        cout<< "Num is prime" << endl;
    }

    else{
        cout<< "Num is not prime" << endl;
    }
    



    return 0;
}
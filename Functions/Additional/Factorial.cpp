#include<iostream>

using namespace std;


int calculateFactorial(int num){
    if(num <= 0){
        return 1;
    }
    
    else {
        int factorial = 1;
        for(int i =1; i<=num; i++){
            factorial *= i;
        }
        return factorial;
    }
    


}

int main(){

    cout<< calculateFactorial(9)<< endl;

    return 0;
}
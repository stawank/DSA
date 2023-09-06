#include<iostream>

using namespace std;

int findMax (int a, int b, int c){
    int min;
    int max;

    if(a>b){
        min = b;
        max = a;
    }
    else if (b>a){
        max=b;
        min = a;

    }

    if(c>max){
        max = c;
    }

    return max;


}
int main(){
    int maximum =findMax(-11,2,5);
    cout<< "Maximum number is: "<< maximum<< endl;



    return 0;
}
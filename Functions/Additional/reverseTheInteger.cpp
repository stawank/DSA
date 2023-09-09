#include<iostream>
#include<limits>
using namespace std;



int reverseTheInteger(int num){
    int ans= 0;
    bool isNegative = (num<0);
    if (isNegative){
        num = -num;
    }
    while (num > 0){

        int remainder = num % 10;
        ans = ans*10 + remainder;
        num = num / 10;
        

    }
    return isNegative? -ans: ans;

}

int main(){

    int n = -1234;
    int ans = reverseTheInteger(n);
    cout << ans;



    return 0;
}
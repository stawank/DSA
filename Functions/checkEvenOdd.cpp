#include<iostream>

using namespace std;

bool checkEven(int num){
    if((num & 1) == 0){
        return true;
    }

    else{
        return false;
    }
     

}
int main(){

    int num = 5;
    bool isEven = checkEven(num);

    cout<<isEven<< endl; 



    return 0;
}
#include<iostream>

using namespace std;


float calculateArea(int radius){
    float pi = 3.14;
    return (pi*radius*radius);

}

int main(){

    cout<< calculateArea(25)<< endl;

    return 0;
}
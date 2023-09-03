#include <iostream>
using namespace std;


int main (){


    int num;
    cin>> num;

    int n = 2*num;
    //Upper Pyramid
    for (int row = 0; row < n; row = row +1){
    
        //Stars
        for (int col = 0; col < n-row; col = col +1){
            cout << "* ";
        }
        //Spaces
        for (int col = 0; col < (2*row +1); col = col +1){
            cout<< "  ";
        }
        //Starts
        for (int col = 0; col < n-row; col = col +1){
            cout << "* ";
        }

        cout << endl;

    }

    //Lower Pyramid

    for(int row = 0; row < n; row = row +1){
        for (int col = 0; col < row+1; col = col +1){
            cout << "* ";
        }
        //Spaces
        for (int col = 0; col < 2*(n-row-1)+ 1; col = col +1){
            cout<< "  ";
        }
        //Starts
        for (int col = 0; col < row+1; col = col +1){
            cout << "* ";
        }

        cout << endl;

    }

    return 0;
}
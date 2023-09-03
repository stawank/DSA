#include <iostream>
using namespace std;


int main(){
    int num;
    cin>> num;



    int n = 2*num;



    for (int row = 0; row < n; row = row +1){
        // Spaces
        for (int col = 0; col < (n - row -1); col = col +1 ){
            cout << " ";
        }
        // Stars
        for (int col = 0; col < row + 1 ; col = col +1 ){
            if(col==0 || col == row ){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
            
            
        }
        
        cout << endl;

    }

        for (int row = 0; row < n; row = row +1){
        // Spaces
        for (int col = 0; col < row; col = col +1 ){
            cout << " ";
        }
        // Stars
        for (int col = 0; col < n - row ; col = col +1 ){
            if(col==0 || col == n -row -1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
            
            
        }
        
        cout << endl;

    }


}
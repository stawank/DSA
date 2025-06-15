
#include<iostream>

using namespace std;


/*


=====================================================
                        Notes
=====================================================
When a function calls itself, until a specified condition is met -> Recursion

Recursion Tree: 
Representation of recursion as a diagram.


*/

int counter = 0;

void function(){
    // Break Condition
    if(counter == 21){
        return;
    }
    cout << counter << endl;
    counter++;
    function();

    


}

int main(){
    cout<< "Hello World"<< endl;
    function();




    return 0;
}
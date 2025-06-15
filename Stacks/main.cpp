#include<iostream>


using namespace std;

/*
Data Structure

Stores data in 
LIFO -> Last in first out
C++ STL has Stack implemeneted
=====================================================
                        Notes
=====================================================


include<stack>


- creation 
stack<int> stackOfInts

- Insertion
stackOfInts.push(2)

- Remove
stackOFInts.pop()

- Size
stackOfInts.size()

- isEmpty
stackOfInts.empty()

- Top Element
stackOFInts.top()

- You cannot access stack using indexes
- You can access only top
- You cannot print a stack


*/

template< class T>
class Stack{
    // Using arrays behind the scenes
    int top = -1;
    
    int size;
    
    T* arr;
    public:

    Stack(): size(20){
        top = -1;
        arr = new T[size];

        
        
    }
    ~Stack(){
        delete arr;

        
        
    }

    T getTop(){
        
        if(this->isEmpty() == 0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty!"<< endl;
            return T();
        }

    }

    int getSize(){
        return top+1;

    }


    void push(T data){
        if(top< size){
        top++;
        arr[top]= data;
        }
        else{
            cout<<"Stack full. Overflow!"<< endl;
        }
    }

    void pop(){
        if(this->getSize()!=0){
            top--;

        }
        else{
            cout<<"Stack already empty. Underflow!"<< endl;
        }

    }

    bool isEmpty(){
        if(top== -1){
            return true;
        }
        else{
            return false;
        }
    }

    void addArray(T* arr, int length){
        for(int i=0; i< length; i++){
            this->push(arr[i]);
        }

    }



};

int main(){
    Stack<int> stack;
    cout<< "IS Stack empty: " << stack.isEmpty()<< endl;
    stack.push(1);
    cout<< "The size of stack is: " << stack.getSize()<< endl;
    stack.push(4);
    stack.push(2);
    cout<< "The size of stack is: " << stack.getSize()<< endl;
    stack.pop();
    cout<< "The size of stack is: " << stack.getSize()<< endl;
    cout<< "IS Stack empty: " << stack.isEmpty()<< endl;
    cout<< "The top of stack is: " << stack.getTop()<< endl;
    cout<< "The size of stack is: " << stack.getSize()<< endl;
    int array[3] = {100, 200, 300};
    stack.addArray(array, 3);
    cout<< "The size of stack is: " << stack.getSize()<< endl;
    cout<< "The top of stack is: " << stack.getTop()<< endl;
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();








    return 0;
}
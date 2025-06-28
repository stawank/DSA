#include<iostream>
using namespace std;

class Queue{
    private:
    int* arr = nullptr ;
    int size = 0;
    int front = -1;
    int rear = -1;
    public:
    Queue(){
        int* arr = new int;
        this->size = 10000;
        this->front = 0;
        this->rear = 0;

    }
    ~Queue(){
        delete arr;
    }
    bool isEmpty(){
        if(front == rear){
            return true;
        }
        else{
            return false;
        }
    }

    void push(int data){
        if(rear == size){
            cout << "Queue is full." << endl;
        }
        else{
            arr[front] = data;
            rear++;
        }
    }

    int pop(){
        int ans;
        if(isEmpty()){
            cout<< "Queue is empty"<< endl;
            ans = -1;

        }
        else{
            ans = arr[front];
            front++;
            if(front == rear){
                front = 0;
                rear = 0;
            }
        }
        return ans;
    }

    int frontElement(){
        if(isEmpty()){
            return -1;
        }else{
        return arr[front];
        }
    }

    int rearElement(){
        if(isEmpty()){
            return -1;
        }else{
        return arr[rear-1];
        }
    }


};



int main(){
    Queue* q = new Queue;
    q->push(12);
    // q->pop();
    // q->push(12);
    // q->push(130);
    // // q.pop();
    // cout<<"front element: "<< q->frontElement()<< endl;



    return 0;
}
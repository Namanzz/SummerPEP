#include<iostream>
using namespace std;

class CircularQueue{
    public:
        int* arr;
        int size;
        int front, rear;

        CircularQueue(int n){
            size=n;
            arr=new int[size];
            front=rear=-1;
        }

        bool enqueue(int x){
            if((rear+1) % size == front){
                cout<<"Queue is full\n";
                return false;
            }

            if(front==-1) front=0;
            rear=(rear+1) % size;
            arr[rear]=x;
            return true;
        }

        int dequeue(){

            if(front == -1){
                cout<<"Queue is empty.\n";
                return -1;
            }
            int ans=arr[front];
            if(front==rear){
                front=rear-1;
            }
            else{
                front=(front+1) % size;
            }
            return ans;
        }
};

int main()
{
   
}
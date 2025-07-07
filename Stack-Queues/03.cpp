#include<iostream>
using namespace std;

class Queue{
    private:
        int rear;
        int front;
        int count=0;
        int arr[1000];

    public:
        Queue(){
            front=0;
            rear=-1;
        }

        void enqueue(int x){
            if(rear==999){
                cout<<"Queue Overflow"<<endl;
                return;
            }
            arr[++rear]=x;
            count++;
        }

        void dequeue(){
            if(front>rear){
                cout<<"Queue Empty"<<endl;
                return;
            }
            front++;
            count--;
        }

        int head(){
            return arr[front];
        }

        int back(){
            return arr[rear];
        }

        bool empty(){
            return front>rear;
        }

        int getSize(){
            if(front>rear) return -1;
            return count;
        }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    // cout << q.head() <<endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    // cout << q.head() <<endl;
    // cout << q.back() <<endl;

    cout<< q.getSize()<<endl;
}
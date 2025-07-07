#include<iostream>
using namespace std;

class Stack{
    public:
        int top;
        int* arr;

        Stack(){
            top=-1;
            arr=new int[1000];
        }

        void push(int x){
            if(top == 999) {
                cout<<"Stack Overflow"<<endl;
                return;
            }
            arr[++top]=x;
        }

        void pop(){
            if(top == -1){
                cout<<"Stack Underflow"<<endl;
                return;
            }
            top--;
        }

        int peek(){
            if(top==-1) return -1;
            return arr[top];
        }

        bool isEmpty(){
            return top==-1;
        }

};

int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    while(!st.isEmpty()){
        st.pop();
    }
    // cout<<st.peek()<<endl;

}
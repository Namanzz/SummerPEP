#include<iostream>
#include<stack>
#include<queue>
using namespace std;

queue<int> queueReverse(queue<int> &qu) {
    stack<int> st;

    while(!qu.empty()){
        st.push(qu.front());
        qu.pop();
    }

    while(!st.empty()){
        qu.push(st.top());
        st.pop();
    }
    return qu;
}

queue<int> queueReverse2(queue<int> &qu) {
    if(qu.empty()){
        return qu;
    }

    int temp=qu.front();
    qu.pop();

    qu=queueReverse2(qu);
    
    qu.push(temp);

    return qu;
}

queue<int> rearrangeQueue(queue<int> q) {
        // code here
        queue<int> q1;
        queue<int> q2;
        
        int n=q.size();
        
        for(int i=0;i<n/2;i++){
            q1.push(q.front());
            q.pop();
        }
        for(int i=0;i<n/2;i++){
            q2.push(q.front());
            q.pop();
        }
        
        while(!q1.empty() || !q2.empty()){
            q.push(q1.front());
            q1.pop();
            q.push(q2.front());
            q2.pop();
        }
        return q;
    }

int main()
{
    queue<int> qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    // queue<int> reversed = queueReverse(qu);
    // queue<int> reversed = queueReverse2(qu);
    queue<int> nq=rearrangeQueue(qu);
    while (!nq.empty()) {
        cout << nq.front() << " ";
        nq.pop();
    }
    cout << endl;
}
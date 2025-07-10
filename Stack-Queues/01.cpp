#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> stk;
    
    stk.push(10);
    stk.push(20);
    stk.push(30);

    stk.pop();
    stk.pop();
    stk.pop();

    cout<<(stk.empty()? "True":"False")<<endl;

    cout<< stk.top() <<endl;
}
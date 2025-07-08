#include<iostream>
#include<stack>
#include <cmath>
using namespace std;

int prefixEval(string s){
    stack<int> st;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int oper1=st.top();
            st.pop();
            int oper2=st.top();
            st.pop();

            switch(s[i]){
                case '+':
                st.push(oper1+oper2);
                break;
                case '-':
                st.push(oper1-oper2);
                break;
                case '*':
                st.push(oper1*oper2);
                break;
                case '/':
                st.push(oper1/oper2);
                break;
                case '^':
                st.push(pow(oper1,oper2));
                break;
            }
        }
    }
    return st.top();
}

int postfixEval(string s){
    stack<int> st;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int oper1=st.top();
            st.pop();
            int oper2=st.top();
            st.pop();

            switch(s[i]){
                case '+':
                st.push(oper1+oper2);
                break;
                case '-':
                st.push(oper1-oper2);
                break;
                case '*':
                st.push(oper1*oper2);
                break;
                case '/':
                st.push(oper1/oper2);
                break;
                case '^':
                st.push(pow(oper1,oper2));
                break;
            }
        }
    }
    return st.top();
}

int main()
{
    // cout<<prefixEval("-*73+45")<<endl;
    cout<<postfixEval("73*45+-")<<endl;
}
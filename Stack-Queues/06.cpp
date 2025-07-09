#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextGreaterElement(vector<int> &arr){
    int n=arr.size();
    vector<int> res(n,-1);
    stack<int> s;

    // s.push(arr[n-1]);
    for(int i=n-1;i>=0;i--){
        while(!s.empty() && s.top() <= arr[i]){
            s.pop();
        }

        if(!s.empty()) res[i]=s.top();
        s.push(arr[i]);
    }
    return res;
}

int main()
{
    vector<int> arr={4,5,2,10,8};
    vector<int> res=nextGreaterElement(arr);
    for(int i:res){
        cout<<i<<" ";
    }
    cout<<endl;
}
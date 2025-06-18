#include<iostream>
#include<vector>
// #include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements you want to put in vector!"<<endl;
    cin>>n;

    vector <int> v;

    int a;
    cout<<"Enter the elements!"<<endl;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }

    // cout<<"Reverse of the vector is: "<<endl;
    // reverse(v.begin(),v.end());
    // for(int i:v){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    
    cout<<"Reverse of the vector is: "<<endl;
    for(int i=n-1;i>=0;i--){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
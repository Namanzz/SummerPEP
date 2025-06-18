// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v;
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }

    cout<<endl;

    // v.erase(v.begin()+2);
    // v.erase(v.begin(),v.begin()+2);

    v.insert(v.begin(),10);

    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}
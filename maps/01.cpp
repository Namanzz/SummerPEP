#include<iostream>
#include<map>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,string> m1;

    m1[12215706]="Naman";
    // m1[12215706]="Chandan";
    m1[12216116]="Simran";

    // cout<<m1[12215706]<<endl;

    for(auto& i:m1){
        cout<<i.first<<" : "<<i.second<<endl;
    }
}
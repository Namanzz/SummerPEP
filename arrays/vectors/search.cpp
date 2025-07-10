#include<iostream>
using namespace std;

bool linearSearch(int arr[], int n, int k){
    for(int i = 0; i < n; i++){
        if(arr[i] == k){
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[5]={4,8,3,7,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;

    if(linearSearch(arr,n,k)){
        cout << "Element " << k << " found in the array." << endl;
    } else {
        cout << "Element " << k << " not found in the array." << endl;
    }
}
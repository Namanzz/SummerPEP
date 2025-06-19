#include<iostream>
using namespace std;

int main()
{
    int arr[5];

    cout << "Enter 5 elements for the array: "<<endl;
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }

    // cout << "Array elements are: ";
    // for(int i:arr){
    //     cout << i << " ";
    // }
    // cout<<endl;

    int sum=0;
    for(int i:arr){
        sum+=i;
    }

    cout << "Sum of the array elements is: " << sum << endl;
}
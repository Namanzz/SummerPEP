#include<iostream>
using namespace std;

int pivotIndex(int arr[], int s, int e){
    int pivot=arr[s];
    int count=0;

    for(int i=s+1; i<=e; i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIndex=s+count;
    swap(arr[pivotIndex], arr[s]);

    int i=s, j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot) i++;
        while(arr[j]>pivot) j--;

        swap(arr[i++], arr[j--]);
    }
    return pivotIndex;
}

void quicksort(int arr[], int s, int e){
    if(s<=e) return;

    int p=pivotIndex(arr, s, e);
    quicksort(arr, s, p-1);
    quicksort(arr, p+1, e);
}

int main()
{
    
}
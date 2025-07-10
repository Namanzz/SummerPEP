#include<iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int greaterThanK(int arr[], int n, int k)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > k)
        {
            count++;
        }
    }
    return count;
}

void selectionSort(int arr[], int n) {
    // This algo works by repeatedly finding the minimum element from unsorted part and putting it at the beginning.
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        if(minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

void bubbleSort(int arr[],int n){
    // This algo works by repeatedly swapping adjacent elements if they are in the wrong order.
    for(int i=0;i<n-1;i++){
        bool swapped = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) {
            break;
        }
    }
}

void insertionSort(int arr[], int n) {
    // This algo works by building a sorted array one element at a time.
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i - 1;
        for(;j >= 0 && arr[j] > key;j--) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[5]={5,2,8,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    // if(isSorted(arr, n))
    // {
    //     cout << "Array is sorted" << endl;
    // }
    // else
    // {
    //     cout << "Array is not sorted" << endl;
    // }

    // int k=3;
    // int count = greaterThanK(arr, n, k);
    // cout << "Number of elements greater than " << k << " is: " << count;

    cout << "Original array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    // selectionSort(arr, n);
    // bubbleSort(arr, n);
    insertionSort(arr, n);
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n){
    int key, j;
    for (int i = 1; i <= n-1; i++)
    {
        key = arr[i];
        j = i-1;
    
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int main(){

     int n;
    cout << "Enter the number of elements in array: ";

    cin >> n;
    int arr[n];
    cout << "\nEnter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertionSort(arr,n);

    cout<<"\nPrinting the sorted array by Bubble Sort: \n";
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    return 0;
}

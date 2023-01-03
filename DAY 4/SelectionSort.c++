#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
    int MinIndex, temp;
    
    for (int i = 0; i < n-1; i++)
    {
        MinIndex = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[MinIndex]){
                MinIndex = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[MinIndex];
        arr[MinIndex] = temp;
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

    selectionSort(arr,n);

    cout<<"\nPrinting the sorted array by Bubble Sort: \n";
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    return 0;
}

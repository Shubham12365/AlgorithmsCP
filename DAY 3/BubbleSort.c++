#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{

    int n;
    cout << "Enter the number of elements in array: ";

    cin >> n;
    int arr[n];
    cout << "\nEnter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr,n);

    cout<<"\nPrinting the sorted array by Bubble Sort: \n";
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    return 0;
}

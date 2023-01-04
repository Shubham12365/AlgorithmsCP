#include<bits/stdc++.h>
using namespace std;



void merge(int A[], int mid, int low, int high)
{
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
    
}

void mergeSort(int A[], int low, int high){
    int mid; 
    if(low<high){
        mid = (low + high) /2;
        mergeSort(A, low, mid);
        mergeSort(A, mid+1, high);
        merge(A, mid, low, high);
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

    mergeSort(arr,0,n);

    cout<<"\nPrinting the sorted array by Bubble Sort: \n";
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
  
    return 0;
}

/*Time Complexity

    Best Case= O(nlogn)
    Average Case= O(nlogn)
    Worst Case= O(nlogn)
*/

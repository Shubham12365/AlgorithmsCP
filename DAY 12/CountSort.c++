#include<bits/stdc++.h>
using namespace std;
void display(int *arr, int size) {
   for(int i = 1; i<=size; i++)
      cout << arr[i] << " ";
   cout << endl;
}
int getMax(int arr[], int size) {
   int max = arr[1];
   for(int i = 2; i<=size; i++) {
      if(arr[i] > max)
         max = arr[i];
   }
   return max; //the max element from the arr
}
void countSort(int *arr, int size) {
   int output[size+1];
   int max = getMax(arr, size);
   int count[max+1];     //create count arr (max+1 number of elements)
   for(int i = 0; i<=max; i++)
      count[i] = 0;     //initialize count arr to all zero
   for(int i = 1; i <=size; i++)
      count[arr[i]]++;     //increase number count in count arr.
   for(int i = 1; i<=max; i++)
      count[i] += count[i-1];     //find cumulative frequency
   for(int i = size; i>=1; i--) {
      output[count[arr[i]]] = arr[i];
      count[arr[i]] -= 1; //decrease count for same numbers
   }
   for(int i = 1; i<=size; i++) {
      arr[i] = output[i]; //store output arr to main arr
   }
}
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n+1];       //create an arr with given number of elements
   cout << "Enter elements:" << endl;
   for(int i = 1; i<=n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   countSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}
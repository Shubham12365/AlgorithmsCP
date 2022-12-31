#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n, int k){
    int i=0,j=n-1,mid;
    while(i<=j){
        mid=i+(j-i)/2;
        if(arr[mid]==k)return mid;
        else if(arr[mid]>k)j=mid-1;
        else i=mid+1;
    }
    return -1;
}
int main(){

    int n,k;
    cout<<"Enter the number of elements in array: ";

    cin>>n;
    int arr[n];
    cout<<"\nEnter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nEnter the number want to search in array: \n";
    cin>>k;
    cout<<"Index of the element is: "<<binarySearch(arr,n,k);

    return 0;
}

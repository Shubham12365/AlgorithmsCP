#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[],int n, int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k)return i;
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
    cout<<"Index of the element is: "<<linearSearch(arr,n,k);

    return 0;
}

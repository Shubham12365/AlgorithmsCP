#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of fibonacii sequence you want: ";
    cin>>n;

    cout<<"Fibonacci Sequence is : \n";
    int prev=0,curr=1;
    cout<<prev<<" "<<curr<<" ";
    for(int i=2;i<n;i++){
        int temp=prev+curr;
        cout<<temp<<" ";
        prev=curr;
        curr=temp;
    }

    return 0;
}

/*Time Complexity

    Best Case= O(n)
    Average Case= O(n)
    Worst Case= O(n)
*/

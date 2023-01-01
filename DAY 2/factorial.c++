#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, fact = 1;
    cout << "Enter the number whose factorial you want: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
        fact *= i;
    cout << "Factorial of " << n << " is : " << fact;
    return 0;
}

/*Time Complexity

    Best Case= O(n)
    Average Case= O(n)
    Worst Case= O(n)
*/

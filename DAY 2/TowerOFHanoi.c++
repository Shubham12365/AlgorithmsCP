#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char F, char T,
				char A)
{
	if (n == 0) {
		return;
	}
	towerOfHanoi(n - 1, F, A, T);
	cout << "Move disk " << n << " from rod " << F
		<< " to rod " << T << endl;
	towerOfHanoi(n - 1, A, T, F);
}


int main()
{
	int N = 3;

	
	towerOfHanoi(N, 'A', 'C', 'B');
	return 0;
}

/*Time Complexity

    Best Case= O(2^n)
    Average Case= O(2^n)
    Worst Case= O(2^n)
*/


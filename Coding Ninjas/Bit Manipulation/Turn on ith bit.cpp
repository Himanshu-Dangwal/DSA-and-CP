#include <iostream>
using namespace std;

int turnOnIthBit(int n, int i){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
   n=n | (1<<i);
    return n;
}


/* Logic::
	use or operation to add a number 2^i to the number n:
*/

int main() {
	int n, i;

	cin >> n >> i;
	
	cout<< turnOnIthBit(n, i) <<endl;
		
	return 0;
}

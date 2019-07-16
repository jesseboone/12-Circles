// next_permutation example
#include <iostream>     // std::cout
#include <algorithm>    // std::next_permutation, std::sort

using namespace std;

int main() {
	int a[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int track[33] = { 0 };

	//sort(myints, myints + 12);

	cout << "The solutions with 12 elements:\n";
	do {
		int i = a[0] + a[1] + a[2];
		if( (a[2] + a[3] + a[4] == i) && (a[4] + a[5] + a[6] == i) && (a[6] + a[7] + a[8] == i) && (a[8] + a[9] + a[10] == i) && (a[10] + a[11] + a[0] == i) ){
			cout << a[0] << ' ' << a[1] << ' ' << a[2] << ' ' << a[3] << ' ' << a[4] << ' ' << a[5] << ' '<< a[6] << ' ' << a[7] << ' ' << a[8] << ' ' << a[9] << ' ' << a[10] << ' ' << a[11] << endl;
			cout << "i is: " << i << endl;
			track[i]++;
		}
	} while (next_permutation(a, a + 12));

	// cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';

	cout << "All done!" << endl;
	for (int i = 0; i < 33; i++) {
		if (track[i] != 0) {
			cout << i << ": " << track[i] << endl;
		}
	}
	cin >> a[1];

	return 0;
}
#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	 n -= 10;

	 if ((n > 0 && n < 10) || n == 11) {
	 	cout << 4;
	 	return 0;
	 }

	 if (n != 10) cout << 0;
	 else cout << 15;
}

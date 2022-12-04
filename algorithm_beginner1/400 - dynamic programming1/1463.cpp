#include<iostream>
using namespace std;
int one(int n) {
	if (n == 1) return 0;
	else if (n == 2) return 1;
	else if (n == 3) return 1;
	return min(one(n / 3) + n % 3,one(n / 2) + n % 2) + 1;
}
int main(void) {
	int n;
	cin >> n;
	cout << one(n);
	return 0;
}
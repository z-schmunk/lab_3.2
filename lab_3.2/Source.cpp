#include <iostream>
using namespace std;
/* Find the sum, differece, product, and average given two integers*/

int main() {
	int a;
	int b;
	int sum;
	int dif;
	int pro;
	double avg;
	cout << " Input two numeric variables. " << endl;
	cin >> a >> b;
	sum = a + b;
	dif = a - b;
	pro = a * b;
	avg = (a + b) / 2.0;
	cout << " Variable " << a << " and variable " << b << " have sum of " << sum << ", difference of " << dif << ", product of " << pro << ", and average of " << avg << "." << endl;
}
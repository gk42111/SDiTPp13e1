#include "Test.h"
#include <iostream>
using namespace std;

int main() {
	Test test;
	test.sort();
	for (int i = 0; i < test.a.size(); i++) {
		cout << test.a[i] << endl;
	}
	system("pause");
	return 0;
}
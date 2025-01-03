#include <iostream>
#include <vector>
#include "SimpleVector.h"
using namespace std;

int main() {
	SimpleVector<int> vec;

	for (int i = 0; i < 12; ++i) {
		vec.push_back(i);
	}

	cout << "Size : " << vec.size() << endl;
	cout << "Capacity : " << vec.capacity() << endl;

	vec.pop_back();
	cout << "Size after pop_back : " << vec.size() << endl;

	return 0;
}
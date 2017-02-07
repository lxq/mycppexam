/**
* �����ҵ�C++֪ʶ����ϰ.
* @email: linxq@liv.com
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char* argv[]) {
	std::vector<int> vec = { 1, 2, 3 };

	// test lambda
	std::transform(vec.begin(), vec.end(), vec.begin(),
		[](int v) {
		return v + 1;
	});

	for (int e : vec) {
		std::cout << e << std::endl;
	}

	return 0;
}

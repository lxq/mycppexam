/**
* 用于我的C++知识点练习.
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


	// std::for_each & lambda
	int sum = 0;
	std::for_each(vec.begin(), vec.end(),
		[&sum](int e) {
		sum += e;
	});
	std::cout << "sum: " << sum << std::endl;


	return 0;
}

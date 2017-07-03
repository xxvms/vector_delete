#include <iostream>
#include <vector>

template <typename T>
void DisplayVector(const std::vector<T>& inVec)
{

	for (auto element  = inVec.cbegin(); // auto and cbegin() - C++11
		 element != inVec.cend(); 		 //  cend() - C++11
		++element )
	std::cout << *element << ", ";
	std::cout << std::endl;
}

int main() {

	std::vector<int>integers;

	// insert sample integers into the vector:
	integers.push_back(50);
	integers.push_back(1);
	integers.push_back(987);
	integers.push_back(1001);
	integers.push_back(123);


	std::cout <<"Vector size: " << integers.size() << " capacity: " << integers.capacity() << " elements: ";
	DisplayVector(integers);

	// erase one element at the end
	integers.pop_back();
	integers.pop_back();

	std::cout << "After a call to 2x pop_back()" << std::endl;
	std::cout <<"Vector size: " << integers.size() << " capacity: " << integers.capacity() << " elements: ";
	DisplayVector(integers);

	std::cout << "integers.reserve(20)" << std::endl;
	integers.reserve(20);
	std::cout <<"Vector size: " << integers.size() << " capacity: " << integers.capacity() << " elements: " << std::endl;
	DisplayVector(integers);


	return 0;
}
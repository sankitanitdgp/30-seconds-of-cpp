// Style Guide => https://github.com/Bhupesh-V/30-Seconds-Of-STL/blob/master/CONTRIBUTING.md/#Style Guide
/*
 Author : Soumya Lahiri
 Date : 01/10/2019
 Time : 01:00 AM
 Description : insert() is a function in C++ STL which inserts new elements before the element at the specified position, effectively increasing the container size by the number of elements inserted.
 */
#include <bits/stdc++.h>
int main() 
{ 
	// initialising the vector 
	std::vector<int> vec = { 10, 20, 30, 40 }; 

	// inserts 5 at front 
	auto it = vec.insert(vec.begin(), 5);  

	std::cout << "The vector elements are: "; 
	for (auto it = vec.begin(); it != vec.end(); ++it) 
		std::cout << *it << " "; 
	std::cout << std::endl;

	return 0; 
} 

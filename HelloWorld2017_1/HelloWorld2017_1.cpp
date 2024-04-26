// HelloWorld2017_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <boost/lambda/lambda.hpp>
#include <iterator>
#include <algorithm>

int main()
{
	using namespace boost::lambda;
	typedef std::istream_iterator<int> in;

	std::for_each(
		in(std::cin), in(), std::cout << (_1 * 3) << " ");
	std::cout << "Hello World!\n";
}

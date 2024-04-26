// HelloWorld2017_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <boost/lambda/lambda.hpp>
#include <iterator>
#include <algorithm>
#include <boost/regex.hpp>
#include <string>

int main()
{
	using namespace boost::lambda;
	typedef std::istream_iterator<int> in;

	std::for_each(
		in(std::cin), in(), std::cout << (_1 * 3) << " ");
	std::cout << "Hello World!\n";
	std::string line;
	boost::regex pat("^Subject: (Re: |Aw: )*(.*)");

	while (std::cin)
	{
		std::getline(std::cin, line);
		boost::smatch matches;
		if (boost::regex_match(line, matches, pat))
			std::cout << matches[2] << std::endl;
	}
}

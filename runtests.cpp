#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "sort.h"
#include "Timer.h"
#include "search.h"

void read(std::string filename, std::vector<int>& c)
{
	std::ifstream d(filename);
	while(true)
	{
		int name;
		d >> name;
		if (d.eof ())
			break;
		c.push_back(name);
	}
	d.close();
}


int main()
{
	std::vector<int> numbers;
	std::vector<int> search;

	numbers.reserve(1000000);
	search.reserve(2000);

	read("numbers", numbers);
	read("search", search);
	
	bubblesort(search.data(), search.data() + search.size());
	for (unsigned int i = 0; i < search.size(); i++)
        {
		std::cout << search[i] << std::endl;
        }


	// TODO:
	// read the file "numbers" into the numbers vector
	// read the file "search" into the search vector
	// since you're basically doing the same thing twice,
	// write a function to read a single file into a vector
	// and then call this function twice.

	{
		Timer timer("Time to linear search all values: ");

		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (linearSearch(numbers, search[i]))
				found++;
		}

		std::cout << "Found "<< found << "/"
			<< search.size() << " values." << std::endl;
	}

	{
		Timer timer("Time to linear search all values (pointers): ");

		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (linearSearch(numbers.data(), numbers.data() + numbers.size(),
					search[i]))
				found++;
		}

		std::cout << "Found "<< found << "/"
			<< search.size() << " values." << std::endl;
	}


	// TODO:
	// repeat the above two blocks but use the binary search functions.
	{
                Timer timer("Time to binary search all values: ");

                int found = 0;
                for (size_t i = 0; i < search.size(); i++)
                {
                        if (binarySearch(numbers, search[i]))
                                found++;
                }

                std::cout << "Found "<< found << "/"
                        << search.size() << " values." << std::endl;
        }

        {
                Timer timer("Time to binary recursion search all values (pointers): ");

                int found = 0;
                for (size_t i = 0; i < search.size(); i++)
                {
                        if (binSearchRec(numbers.data(), numbers.data() + numbers.size(),
                                        search[i]))
                                found++;
                }

                std::cout << "Found "<< found << "/"
                        << search.size() << " values." << std::endl;
        }

	{
                Timer timer("Time to binary search all values (pointers): ");

                int found = 0;
                for (size_t i = 0; i < search.size(); i++)
                {
                        if (binarySearch(numbers.data(), numbers.data() + numbers.size(),
                                        search[i]))
                                found++;
                }

                std::cout << "Found "<< found << "/"
                        << search.size() << " values." << std::endl;
        }



	return 0;
}


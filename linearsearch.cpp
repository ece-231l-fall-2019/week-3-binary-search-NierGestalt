#include <vector>
#include <iostream>

bool linearSearch(const std::vector<int>& set, int value)
{

	unsigned int i;
	for (i = 0; i < set.size(); i++)
	{
        if (set[i] == value)
	{
		return true;
	}
	}
	return false;
}

bool linearSearch(const int *begin, const int *end, int value)
{
        for (; begin != end; begin++)
        {
        if (*begin == value)
        {
                return true;
        }
        }

	return false;
}

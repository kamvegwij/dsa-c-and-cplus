/*
	KAMVE:
		Practicing DSA and common real-life uses cases of data structures along
		with their most common algorithms.
*/
#include <iostream>
#include "Headers/Hashtables.h"

int main()
{
	HashTables objHashtables;
	/*
		City city1 = { "Cape Town", 2500, -33.45, 13.75 };
		City city2 = { "Joburg", 1560, 45.59, 26.76 };
		City city3 = { "Gqeberha", 456, 55.58, 16.76 };
		City city4 = { "Komani", 2908, 78.59, 34.32 };
	*/
	std::cout << objHashtables.GetCityInformation() << std::endl;

	return 0;
}
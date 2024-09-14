#include <iostream>
#include <string>
#include <unordered_map>

//COPY AND PASTE THIS CODE INTO THE MAIN SOURCE FILE.
struct City
{
	std::string Name = "";
	uint64_t totalPopulation = 0;
	double Latitude = 0.0, Longitude = 0.0;
};

int main()
{	
	City city1 = { "Cape Town", 2500, -33.45, 13.75 };//dummy values.
	City city2 = { "Joburg", 1560, 45.59, 26.76 };
	City city3 = { "Gqeberha", 456, 55.58, 16.76 };
	City city4 = { "Komani", 2908, 78.59, 34.32 };

	std::unordered_map<std::string, City> citiesMap; //keys have to be hashable.

	citiesMap["Cape Town"] = City{ "Cape Town", 2500, -33.45, 13.75 };
	citiesMap["Joburg"] = City{ "Joburg", 1560, 45.59, 26.76 };
	citiesMap["Gqeberha"] = City{ "Gqeberha", 456, 55.58, 16.76 };
	citiesMap["Komani"] = City{ "Komani", 2908, 78.59, 34.32 };

	//declare and init a reference to a city:
	City& refCapeTown = citiesMap["Cape Town"];

	std::cout << refCapeTown.Name << std::endl;

	return 0;
}
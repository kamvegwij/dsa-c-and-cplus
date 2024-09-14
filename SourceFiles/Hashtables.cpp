#include "Headers/Hashtables.h"

HashTables::HashTables() {
	/*constructor */ 
}
HashTables::~HashTables() {
	/*destructor*/ 
}

void HashTables::SetCityInformation(City& someCity, std::string name, 
	uint64_t population, double latitude, double longitude)
{
	City someCity = { name, population, latitude, longitude };
}

City HashTables::GetCityInformation()
{
	std::unordered_map<std::string, City> citiesMap; //keys have to be hashable.

	citiesMap["Cape Town"] = City{ "Cape Town", 2500, -33.45, 13.75 };
	citiesMap["Joburg"] = City{ "Joburg", 1560, 45.59, 26.76 };
	citiesMap["Gqeberha"] = City{ "Gqeberha", 456, 55.58, 16.76 };
	citiesMap["Komani"] = City{ "Komani", 2908, 78.59, 34.32 };

	return citiesMap;
}
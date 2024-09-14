#include <iostream>
#include <string>
#include <unordered_map>

class HashTables
{
public:

	HashTables();
	~HashTables();

	struct City
	{
		std::string Name = "";
		uint64_t totalPopulation = 0;
		double Latitude = 0.0, Longitude = 0.0;
	};

	void SetCityInformation(City& someCity, std::string name, uint64_t population, double latitude, double longitude);
	
	City GetCityInformation();

	//hashing:
	namespace std {

		template<>
		struct hash<City> {
			size_t operator()(const City& key) {
				//lets has the city name:
				return hash<std::string>()(key.Name);
			}
		};
	}
private:

};
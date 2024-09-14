/*
	KAMVE:
		Practicing DSA and common real-life uses cases of data structures along
		with their most common algorithms.
*/
#include <iostream>
#include "Headers/Hashtables.h"

struct Company
{
	int regID = 0;
	std::string companyName = "default";
	std::string performanceStatus = ""; //average, low, high.
	uint64_t totalStaff = 0;
	double turnover = 0.0; //in $
};

int main()
{
	Company company1 = { 0, "Ranger Ltd." ,"average", 100, 50000.00 };//dummy values.
	Company company2 = { 1, "Peach Ltd.", "low", 1000, 401000.60 };
	Company company3 = { 2, "HomeWork LLC", "high", 100, 1500000.00 };
	Company company4 = { 3, "OurCompany Ltd.", "average", 245, 12500.00 };
	Company company5 = { 4, "Movers", "average", 10000, 2000479.00 };

	//create a hastable to store the companies:
	std::unordered_map<int, Company> registeredCompanies;

	registeredCompanies[0] = (company1);
	registeredCompanies[1] = (company2);
	registeredCompanies[2] = (company3);
	registeredCompanies[3] = (company4);
	registeredCompanies[4] = (company5);

	//iterate through map
	for (auto& [regID, Company] : registeredCompanies) {

	}

	return 0;
}
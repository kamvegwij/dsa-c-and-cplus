#include <iostream>
#include <string>
#include <unordered_map>

//COPY AND PASTE THIS CODE INTO THE MAIN SOURCE FILE.
struct Company
{
	std::string companyName = "default";
	std::string performanceStatus = ""; //average, low, high.
	uint64_t totalStaff = 0;
	double turnover = 0.0; //in $
};

int main()
{
	//create a hastable to store the companies:
	std::map<std::string, Company> registeredCompanies;

	registeredCompanies["Ranger Ltd."] = Company{ "Ranger Ltd." ,"average", 100, 50000.00 };
	registeredCompanies["Peach Ltd."] = Company{ "Peach Ltd.", "low", 1000, 401000.60 };
	registeredCompanies["HomeWork LLC"] = Company{ "HomeWork LLC", "high", 100, 1500000.00 };
	registeredCompanies["OurCompany Ltd."] = Company{ "OurCompany Ltd.", "average", 245, 12500.00 };
	registeredCompanies["Movers"] = Company{ "Movers", "average", 10000, 2000479.00 };

	const auto& test = registeredCompanies;

	//iterate through map
	for (auto& [key, Company] : registeredCompanies) {
		std::cout << Company.companyName << std::endl;
	}

	return 0;
}
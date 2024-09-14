#include <iostream>
#include <string>
#include <unordered_map>

//COPY AND PASTE THIS CODE INTO THE MAIN SOURCE FILE.
struct Company
{
	std::string regID = "";
	std::string companyName = "default";
	std::string performanceStatus = ""; //average, low, high.
	uint64_t totalStaff = 0;
	double turnover = 0.0; //in $
};

int main()
{	
	Company company1 = {"123et89LTD", "Ranger Ltd." ,"average", 100, 50000.00};//dummy values.
	Company company2 = {"003nu54LTD", "Peach Ltd.", "low", 1000, 401000.60 };
	Company company3 = {"h_w986eu7LLC", "HomeWork LLC", "high", 100, 1500000.00 };
	Company company4 = {"15b800a", "OurCompany Ltd.", "average", 245, 12500.00 };
	Company company5 = {"mover500LTD", "Movers", "average", 10000, 2000479.00 };

	//create a hastable to store the companies:
	std::unordered_map<std::string, Company> registeredCompanies;




	return 0;
}
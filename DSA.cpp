#include <iostream>
#include <unordered_map>
#include <map>

class testing_maps
{
private:
	std::map<int, int> dummy_map;//ordered map.

public:
	testing_maps(int const& r) {}
	void RandomiseAssign(std::map<int, int>& new_map, int n_size);

	std::map<int, int>::iterator map_iterator;

	void do_insert(std::map<int,int> &temp_map, const int &key, int value)
	{
		//if not changing a key then we can declare the reference to it as a constant.
		//get by value makes an extra copy, impacting performance.
		auto return_val = temp_map.insert({ key, value }); //returns->std::pair<std::map<int,int>::iterator, bool>
	}
};

void testing_maps::RandomiseAssign(std::map<int, int> &new_map, int n_size)
{
	int random_integer = 0;
	srand(500);
	for (int x = 0; x < n_size; x++)
	{
		random_integer = rand();
		do_insert(new_map, x+1, random_integer);
	}
}

int main()
{
	std::map<int, int> new_map;

	testing_maps obj(5);
	obj.RandomiseAssign(new_map, 10);

	std::cout << "Length of map: " << new_map.size() << std::endl;
	//new_map.erase(8);
	std::cout << "Length of map: " << new_map.size() << std::endl;

	//iterators in C++
	//std::map<int, int>::iterator i = new_map.begin();
	for (auto i = new_map.begin(); i != new_map.end(); i++)
		std::cout << "Key: " << i->first << " Value: " << i->second << std::endl;

	auto some_iterator = new_map.find(1);
	if (some_iterator != new_map.end())
		std::cout << some_iterator->second << std::endl;
}
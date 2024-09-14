# DOCUMENTATION :rocket:
### Unordered and Ordered Maps:
---
> Inserting into a map:
```
void do_insert(std::map<int,int> &temp_map, const int &key, int value)
{
	//if not changing a key then we can declare the reference to it as a constant.
	//get by value makes an extra copy, impacting performance.
	auto return_val = temp_map.insert({ key, value });std::pair<std::map<int,int>::iterator, bool>
}
```

- When we implement in the main function:
```
int main()
{
	std::map<int,int> some_map;
	class_instance obj(10);//dummy
 	obj.do_insert(some_map, 1, 1010);
	return 0;
}
```

> Iteration
```
for (auto i = some_map.begin(); i != some_map.end(); i++)
		std::cout << "Key: " << i->first << " Value: " << i->second << std::endl;
```

> Deleting and Searching
- Search
```
auto some_iterator = some_map.find(1);
	if (some_iterator != some_map.end())
		std::cout << some_iterator->second << std::endl;
```

- Delete
```
some_map.erase(some_iterator->first);
```

> In C++ a hashtable can be implemented using std::unordered_map
```
struct SomeStruct{
	int uID = 0;
	std::string Name = "";
};
#include <unordered_map>
int main(){
	std::unordered_map<int, std::string> myTable;
	myTable[0] = {0, "Kamve"};
	myTable[1] = (1, "Developer"};
}
```

> Iteration: C++ 17 and above
```
for (auto& [ky, SomeStruct] : myTable)
{
	std::cout << ky << std::endl << SomeStruct.Name;
}
```
> NOTE: When using a hashtable, keys have to be hashable.[^1]
```
namespace std {
	template<>
	struct hash<SomeStruct> {
		size_t operator()(const SomeStruct& key) {
			return hash<std::string>()(key.Name);
		}
	};
}
```
[^1]: This can be then used for using non-supported types as a key.

# DOCUMENTATION :rocket:
### HASHTABLES:
---
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

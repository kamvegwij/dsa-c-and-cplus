# DOCUMENTATION :rocket:
### HASHTABLES:
---
> In C++ a hashtable can be implemented using std::unordered_map
```
#include <unordered_map>
int main(){
	std::unordered_map<int, std::string> myTable;
	myTable[0] = "Kamve";
	myTable[1] = "Developer";
}
```
> NOTE: When using a hashtable, keys have to be hashable.[^1]
```
struct SomeStruct{
	std::string Name = "";
};
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

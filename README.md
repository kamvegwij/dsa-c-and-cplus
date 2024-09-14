# DOCUMENTATION
# Hashing
- When using a hashtable, keys have to be hashable.
```  
	namespace std {

		template<>
		struct hash<City> {
			size_t operator()(const City& key) {
				//lets has the city name:
				return hash<std::string>()(key.Name);
			}
		};
	}
```

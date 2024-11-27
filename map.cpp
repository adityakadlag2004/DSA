#include<iostream>
#include<vector>
//map library is
#include<map>

using namespace std;
int main() {
    //MAP
    std::map<string, int> map;
    map["one"] = 1;
    map["two"] = 2;
    map["three"] = 3;
    for (auto it = map.begin(); it != map.end(); ++it) {
        cout << it->first << " " << it->second << endl;
        }

    //emplace and insert

    //emplace vs insert 
    //emplace is used to insert a new element into the map
    //insert is used to insert a new element into the map
    //emplace is more efficient than insert because it avoids the overhead of creating a temporary object
    //insert is used when we want to insert a new element into the map and also update the
    //existing element if it already exists in the map
    map.emplace("four", 4);
    std::map<string, int> map2;
    map2.emplace("one", 1);
    map2.emplace("two", 2);
    map2.emplace("three", 3);
    map2.insert({"four", 1});
    for (auto it = map2.begin(); it != map2.end(); ++it) {
        cout << it->first << " " << it->second << endl;
        }
    //insert
    
    
    return 0;
}
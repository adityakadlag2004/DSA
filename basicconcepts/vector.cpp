#include <iostream>
#include <vector>
using namespace std;

int main()
{
    std::vector<int> v;
    std::vector<int> v3;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    
    cout << "Size of vector: " << v.size() << endl;
    cout << "Capacity of vector: " << v.capacity() << endl;
    v.push_back(6);
    cout << "Size of vector after push_back: " << v.size() << endl;

    // emplace function
    v.emplace_back(7);
    cout << "Size of vector after emplace_back: " << v.size() << endl;
    cout << "Capacity of vector after emplace_back: " << v.capacity() << endl;
    std::vector<std::pair<int, int> > v2;
    // Use emplace_back to add pairs
    v2.emplace_back(1, 2); // Adds the pair (1, 2)
    v2.emplace_back(3, 4); // Adds the pair (3, 4)
    cout << "Size of vector v2: " << v2.size() << endl;
    cout << "Capacity of vector v2: " << v2.capacity() << endl;
    for (size_t i = 0; i < v.size(); ++i)
    {
        std::cout << v[i] << " ";
    }
    cout << endl;
    for (size_t i = 0; i < v.size(); ++i)
    {
        std::cout << v[i] << " ";
    }
     
        // delete element in vector erase need delete no location
        //  v = 1 2 3 4 5 6 7
        v.erase(v.begin() + 1);
    cout << "Size of vector after erase: " << v.size() << endl;
    for (size_t i = 0; i < v.size(); ++i)
    {
        std::cout << v[i] << " ";
    }
    cout << endl;
    // delete multiple elements
    v.erase(v.begin() + 1, v.begin() + 2);
    cout << "Size of vector after erase: " << v.size() << endl;
    for (size_t i = 0; i < v.size(); ++i)
    {
        std::cout << v[i] << " ";
    }

    v.insert(v.begin() + 1, 5);
    // insert multiple elements (Same no insert 2 6)
    v.insert(v.begin() + 1, 2, 6);
    cout << "Size of vector after insert: " << v.size() << endl;
    for (size_t i = 0; i < v.size(); ++i)
    {
        std::cout << v[i] << " ";
    }

    // Insert multiple different elements
    std::vector<int> copy(2, 100);
    v.insert(v.begin() + 1, copy.begin(), copy.end());
    v3.insert(v.begin() + 1, copy.begin(), copy.end());
    cout << "Size of vector after insert: " << v.size() << endl;
    for (size_t i = 0; i < v.size(); ++i)
    {
        std::cout << v[i] << " ";
    }
    //delete last  element
    v.pop_back();
    //swap vector
    v.swap(v3);
    //clear
    v.clear();
    // is empty
    cout << "is empty: " << v.empty() << endl;

    //front operations
    cout << "front: " << v3.front() << endl;
    cout << "back: " << v3.back() << endl;
    //Push at front
    //v3.std::push_front(1);
    //pop at front
    //v3.std::pop_front();
    //insert at front
    v3.insert(v3.begin(), 1);
    //erase at front
    v3.erase(v3.begin());
    //emplace front
    //v3.emplace(v3.begin(), 1);

    return 0;
} 
#include<iostream>
#include <utility>
#include<vector>

using namespace std;


void explainVector(){
    std::vector<int> v;
    std::vector<std::pair<int, int> > v2;
    v.push_back(1);
    v.emplace_back(2);
    v2.emplace_back(2,4); //pushes 2,4 as (2,4)pair

    //std::vector<int> v1(5,1,23,35,5); //initializes with 4 elements and value 100
    std::vector<int> v1 = {1, 4, 2, 3, 5};
    std::vector<int> v4(5); //initializes with 5 elements and value 0
    //std::vector<int> v3(5,10,20,30,40); //initializes
    
    for(std::vector<int>::iterator it = v1.begin(); it!=v1.end(); it++){
        cout<<"Iterator : "<<*it<<endl;
    }

      for(int x : v1) {
        cout << x << " ";
    }

    for(auto it=v1.rbegin();it!=v1.rend();it++){
        cout<<"Auto Reverse Iterator : "<<*it<<endl;
    }
}

int main(){

 // your code goes here
  std::pair <int, int> pair1;
  pair1.first = 2;
  pair1.second = 10;
  std::pair <int, int> pair2 = make_pair(4, 12);
  std::pair <int, string> pair3(3, "three");
  std::pair <int, int> pair4(5, 18);
  cout << "First pair is " << pair1.first << " " << pair1.second << '\n';
  cout << "Second pair is " << pair2.first << " " << pair2.second << '\n';
  cout << "Third pair is " << pair3.first << " " << pair3.second << '\n';
  cout << "Fourth pair is " << pair4.first << " " << pair4.second << '\n';
  cout << "Operators on pair, 1 represent true, 0 represent false\n";

  cout << "After performing pair1 <= pair2, result is " << (pair1 <= pair2) << '\n';
  cout << "After performing pair1 >= pair2, result is " << (pair1 >= pair2) << '\n';
  cout << "After performing pair1 == pair2, result is " << (pair1 == pair2) << '\n';
  cout << "After performing pair1 != pair2, result is " << (pair1 != pair2) << '\n';
  pair1 = pair4;
  cout << "After performing pair1 = pair4, contents of pair1: " << pair1.first << " " << pair1.second << '\n';
  cout << "Use of swap function with pair\n";
  cout << "Before swapping:\n";
  cout << "Contents of pair1 = " << pair1.first << " " << pair1.second << "\n";
  cout << "Contents of pair2 = " << pair2.first << " " << pair2.second << "\n";
  pair1.swap(pair2);
  cout << "After swapping:\n";
  cout << "Contents of pair1 = " << pair1.first << " " << pair1.second << "\n";
  cout << "Contents of pair2 = " << pair2.first << " " << pair2.second << "\n";
  
  std::pair<int, std::pair<int, int> > p = 
  std::make_pair(1, std::make_pair(4, 6));
  cout << "First element of p is " << p.first << '\n';
  cout << "Second element of p is " 
              << p.second.first << " " 
              << p.second.second << endl;
  
  std::pair<int,int> arr[]={std::make_pair(23,54),std::make_pair(65,34),
  std::make_pair(265,34),std::make_pair(2332,345),std::make_pair(8745,934)};
  int size = sizeof(arr) / sizeof(arr[0]);
  for(int i=0;i<size;i++){
    cout << "Element at index " << i << " is " << arr[i].first <<endl;
    cout << " " << arr[i].second << endl;
  }  
  
  explainVector();
  
  return 0;

    
}
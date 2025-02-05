#include <iostream>

using namespace std;

int removeDuplicates(int nums[]) {
    int n = sizeof(nums) / sizeof(nums[0]);
    if (n <= 2) {
        return n;
    }

    int j = 2;
    for (int i = 2; i < n; i++) {
        if (nums[i] != nums[j - 2]) {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}

int main() {
    int nums[] = {1, 0, 1, 1, 1, 1, 2, 3, 3}; 
    
    //int nums[] = {1, 1, 2, 3, 3, 1, 2, 3, 3}; 
    //                             j           i
    

     // Calculate array size

    int k = removeDuplicates(nums);                           
    cout << "k == " << k << endl; 

    return 0; // Return 0 for successful execution
}

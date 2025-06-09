#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
      int red = 0, white = 0, blue = nums.size() - 1;
    while (white <= blue) {
        if (nums[white] == 0) {
            swap(nums[red], nums[white]);
            red++;
            white++;
        } else if (nums[white] == 1) {
            white++;
        } else {
            swap(nums[white], nums[blue]);
            blue--;
        }
    }
}

void printVector(const vector<int>& nums) {
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums1 = {2, 0, 2, 1, 1, 0};
    cout << "Input: ";
    printVector(nums1);
    sortColors(nums1);
    cout << "Output: ";
    printVector(nums1); // Expected: 0 0 1 1 2 2

    
    vector<int> nums2 = {2, 0, 1};
    cout << "\nInput: ";
    printVector(nums2);
    sortColors(nums2);
    cout << "Output: ";
    printVector(nums2); 
    printVector(nums2); // Expected: 0 1 2

    return 0;
}

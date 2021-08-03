#include <vector>
#include <iostream>
using namespace std;

// O(1) space
class Solution1 {
    public: 
        int removeDupilcates(vector<int> &nums) {
            int curr = 0;
            if (nums.empty()) {
                return 0;
            }
            for (int i = 1; i < nums.size(); ++i) {
                if (nums[curr] != nums[i]) {
                    ++curr;
                    nums[curr] = nums[i];
                }
            }
            return curr + 1;
        }
};
#include <vector>
#include <iostream>

using namespace std;

// O(1) space
// [ 0 1 2 3 4 ] k = 2 -> [ 3 4 0 1 2]
// temp = 2
// nums[2] = nums[0]
// nums[0] = 2 wrong
class Solution {
    public:
        void rotate(vector<int> &nums, int k) {
           reverse(nums, 0, k - 1);
           reverse(nums, k, nums.size() - 1);
           reverse(nums, 0, nums.size() - 1);
        }
        void reverse(vector<int> &nums, int start, int end) {
            while (start < end) {
                int temp = nums[start];
                nums[start] = nums[end];
                nums[end] = temp;
                ++start;
                --end;
            }
        }
};


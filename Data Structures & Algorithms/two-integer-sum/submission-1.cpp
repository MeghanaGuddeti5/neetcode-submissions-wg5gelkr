class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int left = 0; left < nums.size(); left++) {
            for (int right = left + 1; right < nums.size(); right++) {
                int sum = nums[left] + nums[right];
                if (sum == target) {
                    return {left, right};
                }
            }
        }

        return {};
    }};


/*
Problem: Two Sum
Link: https://leetcode.com/problems/two-sum/
Difficulty: Easy
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> mp; // number -> index

        for (int i = 0; i < nums.size(); i++) {
            
            int needed = target - nums[i];

            // Check if needed number already seen
            if (mp.find(needed) != mp.end()) {
                return {mp[needed], i};
            }

            // Store current number with its index
            mp[nums[i]] = i;
        }

        return {}; // just in case (problem guarantees one solution)
    }
};

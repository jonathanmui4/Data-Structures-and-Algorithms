#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // O(n)
        unordered_map<int, int> hashtable;

        // Store current array value in hash table
        for (int i = 0; i < nums.size(); ++i) { 
            hashtable[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
             if (hashtable.find(complement) != hashtable.end() && hashtable[complement] != i) {
                return {hashtable[complement], i};
            }
        }

        return {};
    }
};
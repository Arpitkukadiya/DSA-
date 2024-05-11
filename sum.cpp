/*question 
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int, int> numToIndex;
        vector<int> result;

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (numToIndex.find(complement) != numToIndex.end()) {
                result.push_back(numToIndex[complement]);
                result.push_back(i);
                break; 
            }
            numToIndex[nums[i]] = i;
        }

        return result;
    }


int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> indices = sol.twoSum(nums, target);
    // Print the indices
    for (int idx : indices) {
        cout << idx << " ";
    }
    cout << endl;
    return 0;
}
    
};
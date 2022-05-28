// 287. Find the Duplicate Number
/*
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number.
You must solve the problem without modifying the array nums and uses only constant extra space.

Example 1:
Input: nums = [1,3,4,2,2]
Output: 2

Example 2:
Input: nums = [3,1,3,4,2]
Output: 3

Constraints:
1 <= n <= 105
*/
// CPP Solution
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int cnt = 1;
		for(int i = 0; i < arr.size()-1; i++) {
			for(int j = i+1; j < arr.size(); j++) {
				if(arr[i] == arr[j]) return arr[i];
			}
		}
		return -1;
    }
};
// Python Solution

class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        nums.sort()
        for i in range(len(nums)-1):
            if(nums[i] == nums[i+1]):
                b = nums[i]
        return b
// 40. Combination Sum II
/*
Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

Each number in candidates may only be used once in the combination.

Note: The solution set must not contain duplicate combinations.

 

Example 1:

Input: candidates = [10,1,2,7,6,1,5], target = 8
Output: 
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]
Example 2:

Input: candidates = [2,5,2,1,2], target = 5
Output: 
[
[1,2,2],
[5]
]
 

Constraints:

1 <= candidates.length <= 100
1 <= candidates[i] <= 50
1 <= target <= 30
*/
class Solution {
public:
    void finds(int i,int t,vector<int> &a,vector<vector<int> > &ans,vector<int>&ds){
        if(t ==0){
            ans.push_back(ds);
            return;
        }
        for(int j =i;j<a.size();j++){
            if(j>i && a[j] == a[j-1]) continue;
            if(a[j] > t) break;
            ds.push_back(a[j]);
            finds(j+1,t-a[j],a,ans,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        sort(c.begin(),c.end());
        vector<vector<int> > ans;
        vector<int> ds;
        finds(0,t,c,ans,ds);
        return ans;
    }
};
// 145. Binary Tree Postorder Traversal
/*
Given the root of a binary tree, return the postorder traversal of its nodes' values.

Example 1:
Input: root = [1,null,2,3]
Output: [3,2,1]

Example 2:
Input: root = []
Output: []

Example 3:
Input: root = [1]
Output: [1]

Constraints:
The number of the nodes in the tree is in the range [0, 100].
-100 <= Node.val <= 100
*/

class Solution {
public:
    void post(TreeNode* root,vector<int> &ans){
        if(root == NULL) return;
        post(root->left,ans);
        post(root->right,ans);
        ans.push_back(root->val);
        
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        post(root,ans);
        return ans;
    }
};
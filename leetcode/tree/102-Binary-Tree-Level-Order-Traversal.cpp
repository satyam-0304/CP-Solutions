/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void func(vector<vector<int>>& ans, TreeNode* root){
        if(root == nullptr) {
            
            return ;
        }
        queue<TreeNode*> qt;
        qt.push(root);

        while(!qt.empty()){
            int n = qt.size();
            vector<int> curr;
            for(int i = 0;i < n; i++){

                TreeNode* node = qt.front();
                qt.pop();

                curr.push_back(node->val);
                if(node->left != nullptr) qt.push(node->left);
                if(node->right != nullptr) qt.push(node->right);  
            }
            ans.push_back(curr);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        func(ans, root);

        return ans;
    }
};
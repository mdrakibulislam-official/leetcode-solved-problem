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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> tree;

        if(root == NULL) return tree;
        
        queue<TreeNode*> q;

        q.push(root);

        while (!q.empty()){
            int size = q.size();
            vector<int> level;

            for(int i = 0; i<size; i++){
                TreeNode* current_node = q.front();
                q.pop();
                level.push_back(current_node->val);

                if (current_node->left){
                    q.push(current_node->left);
                }

                if (current_node->right){
                    q.push(current_node->right);
                }
            }
            tree.push_back(level);
            
        }
        return tree;
    }
};

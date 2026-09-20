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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) return true;
        if(!p || !q) return false;

        queue<TreeNode*> q1;
        queue<TreeNode*> q2;

        q1.push(p);
        q2.push(q);

        while(!q1.empty() && !q2.empty()) {
            TreeNode* node1 = q1.front();
            TreeNode* node2 = q2.front();

            q1.pop();
            q2.pop();

            if(node1->val != node2->val) return false;

            if(node1->left) q1.push(node1->left);
            if(node2->left) q2.push(node2->left);
            if((node1->left ==nullptr && node2->left) || (node2->left ==nullptr && node1->left)) return false;
            

            if(node1->right) q1.push(node1->right);
            if(node2->right) q2.push(node2->right);
            if((node1->right && node2->right == nullptr)|| (node2->right && node1->right == nullptr)) return false;
        }

        return q1.empty() && q2.empty();
    }
};
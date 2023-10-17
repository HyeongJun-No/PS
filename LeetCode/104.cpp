#include <bits/stdc++.h>
using namespace std;

// Maximum Depth of Binary Tree

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        return go(root, 1);
    }
    
    int go(TreeNode *node, int depth) {
        if(!node) return 0;
        int ans = depth;
        ans = max(ans, go(node->left, depth + 1));
        ans = max(ans, go(node->right, depth + 1));
        return ans;
    }
    
};
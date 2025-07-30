class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Base case: both are null
        if (!p && !q) return true;
        
        // One is null or values are different
        if (!p || !q || p->val != q->val) return false;
        
        // Recursively compare left and right subtrees
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};

#include <stdlib.h> 

struct TreeNode 
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int maxDepth(struct TreeNode* root) 
{
    if (root == NULL) 
    {
        return 0;
    }
    int leftDepth = maxDepth(root->left);
    int rightDepth = maxDepth(root->right);

    if (leftDepth > rightDepth) 
    {
        return 1 + leftDepth;
    } 
    else 
    {
        return 1 + rightDepth;
    }
}

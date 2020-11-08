// Symmetric Tree
#include <iostream>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

class Solution {
 public:
  bool isSymmetric(TreeNode *root) {
    if (!root) return true;
    return isMirror(root->left, root->right);
  }

  bool isMirror(TreeNode *left, TreeNode *right) {
    if (!left && !right) return true;
    return left && right && left->val == right->val &&
           isMirror(left->left, right->right) &&
           isMirror(left->right, right->left);
  }
};

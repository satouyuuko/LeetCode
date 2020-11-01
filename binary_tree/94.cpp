// Binary Tree Inorder Traversal
#include <iostream>
#include <stack>
#include <vector>

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
  vector<int> inorderTraversal(TreeNode *root) {
    if (root == nullptr) return {};
    stack<TreeNode *> s;
    vector<int> v;
    TreeNode *current = root;

    while (current || !s.empty()) {
      while (current) {
        s.push(current);
        current = current->left;
      }
      current = s.top();
      s.pop();
      v.push_back(current->val);
      current = current->right;
    }

    return v;
  }
};

int main() { return 0; }
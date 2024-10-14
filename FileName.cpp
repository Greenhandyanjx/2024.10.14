#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<numeric>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left, *right;
    TreeNode() { left = NULL, right = NULL, val = 0; }
    TreeNode(int v) { val = v; left = NULL; right = NULL; }
    
};
class Solution {
public:
    bool canMeasureWater(int x, int y, int target) {
        if (x + y < target)return false;
        if (x == 0 || x+y == target)return true;
        return !(target % gcd(x, y));
    }
};
class Solution {
public:
    void flatten(TreeNode* root) {
        if (root == NULL)return;
        flatten(root->left);
        flatten(root->right);
        TreeNode* cur = root;
        if (root->left != NULL) {
            cur = root->left;
            while (cur->right != NULL)cur = cur->right;
            cur->right = root->right;
            root->right = root->left;
            root->left = NULL;
        }
        root = root->right;
        return;
    }
};
class Solution {
public:
    int sumNumbers(TreeNode* root,int x=0) {
        if (root == NULL)return 0;
        x = x * 10 + root->val;
        if (root->left == root->right)return x;
        return sumNumbers(root->left, x) + sumNumbers(root->right, x);
    }
};
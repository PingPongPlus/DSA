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
#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    vector<int> arr;

public:
    TreeNode* balanceBST(TreeNode* root) {
        helper(root);
        return buildBalanced(0, arr.size() - 1);

    }
    TreeNode* buildBalanced(int l, int r){
        if(l > r) return nullptr;
        int mid = l + (r - l) / 2;
        TreeNode* node = new TreeNode(arr[mid]);
        node->left = buildBalanced(l, mid - 1);
        node->right = buildBalanced(mid + 1, r);
        return node;
    }
  
    void helper(TreeNode* root) {
        if(!root) return;
        helper(root->left);
        arr.push_back(root->val);
        helper(root->right);


    }
};
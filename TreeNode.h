//
// Created by manas on 6/28/2021.
//

#ifndef C__BASICDSA_TREENODE_H
#define C__BASICDSA_TREENODE_H

#endif //C__BASICDSA_TREENODE_H

class TreeNode{

public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        data = val;
        left = NULL;
        right = NULL;
    }

    void printTree(TreeNode* root){
        if (root == NULL){
            return;
        }
        cout << root->data << " -> ";
        printTree(root->left);
        printTree(root->right);
    }
};
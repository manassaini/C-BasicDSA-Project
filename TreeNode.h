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

    TreeNode* createTreeManual(){
        TreeNode* root = new TreeNode(1);
        root->left = new TreeNode(2);
        root->right = new TreeNode(3);
        root->left->left = new TreeNode(4);
        root->left->right = new TreeNode(5);
        root->right->left = new TreeNode(6);
        root->right->right = new TreeNode(7);
        return root;
    }

    TreeNode* createTreeManual2(){
        TreeNode* root = new TreeNode(1);
        root->left = new TreeNode(2);
        root->right = new TreeNode(3);
        root->left->left = new TreeNode(4);
        root->left->right = new TreeNode(5);
        root->right->left = new TreeNode(6);
        root->right->right = new TreeNode(8);
        root->right->right->right = new TreeNode(9);
        return root;
    }

    TreeNode* createBSTManual(){
        TreeNode* root = new TreeNode(8);             //level 1

        root->left = new TreeNode(3);             //level 2
        root->right = new TreeNode(10);

        root->left->left = new TreeNode(1);       //level 3
        root->left->right = new TreeNode(6);
        root->right->right = new TreeNode(14);

        root->left->right->left = new TreeNode(4); //level 4
        root->left->right->right = new TreeNode(7);
        root->right->right->left = new TreeNode(13);

        return root;
    }

    void preOrder(TreeNode* root){
        if (root == NULL){
            return;
        }
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }

    void inOrder(TreeNode* root){
        if (root == NULL){
            return;
        }
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }

    void postOrder(TreeNode* root){
        if (root == NULL){
            return;
        }
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
};
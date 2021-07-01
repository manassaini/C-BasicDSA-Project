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

    void showPreOrderCode(){
        cout << "void preOrder(TreeNode* root){" << endl;
        cout << "    if (root == NULL){" << endl;
        cout << "        return;" << endl;
        cout << "    }" << endl;
        cout << "    cout << root->data << " ";" << endl;
        cout << "    preOrder(root->left);" << endl;
        cout << "    preOrder(root->right);" << endl;
        cout << "}" << endl;
    }

    void inOrder(TreeNode* root){
        if (root == NULL){
            return;
        }
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }

    void showInOrderCode(){
        cout << "void inOrder(TreeNode* root){" << endl;
        cout << "    if (root == NULL){" << endl;
        cout << "        return;" << endl;
        cout << "    }" << endl;
        cout << "    inOrder(root->left);" << endl;
        cout << "    cout << root->data << " ";" << endl;
        cout << "    inOrder(root->right);" << endl;
        cout << "}" << endl;
    }


    void postOrder(TreeNode* root){
        if (root == NULL){
            return;
        }
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }

    void showPostOrderCode(){
        cout << "void postOrder(TreeNode* root){" << endl;
        cout << "    if (root == NULL){" << endl;
        cout << "        return;" << endl;
        cout << "    }" << endl;
        cout << "    postOrder(root->left);" << endl;
        cout << "    postOrder(root->right);" << endl;
        cout << "    cout << root->data << " ";" << endl;
        cout << "}" << endl;
    }

    void searchBST(int val, TreeNode* root){
        if (root->data == val){
            cout << val << " is found!";
        }
        else if (val < root->data){
            searchBST(val, root->left);
        }
        else if (val > root->data){
            searchBST(val, root->right);
        }
    }

    void showSearchBSTCode(){
        cout << "void searchBST(int val, TreeNode* root){" << endl;
        cout << "    if (root->data == val){" << endl;
        cout << "        cout << val <<  is found!"";" << endl;
        cout << "    }" << endl;
        cout << "    else if (val < root->data){" << endl;
        cout << "        searchBST(val, root->left);" << endl;
        cout << "    }" << endl;
        cout << "    else if (val > root->data){" << endl;
        cout << "        searchBST(val, root->right);" << endl;
        cout << "    }" << endl;
        cout << "}" << endl;
    }

    TreeNode* insertDataBST(int val, TreeNode* root){
        if (root == NULL){
            return new TreeNode(val);
        }
        if (val < root->data){
            root->left = insertDataBST(val, root->left);
        }
        if (val > root->data){
            root->right = insertDataBST(val, root->right);
        }
        return root;
    }

    void s

    bool isSameTree(TreeNode* root1, TreeNode* root2){
        if (root1 == NULL && root2 == NULL) {
            return true;
        }
        else if (root1 == NULL || root2 == NULL) {
            return false;
        }
        else if (root1->data != root2->data) {
            return false;
        }
        else{
            return isSameTree(root1->left, root2->left) && isSameTree(root1->right, root2->right);
        }
    }
};
//
// Created by manas on 6/28/2021.
//

#ifndef C__BASICDSA_TREENODE_H
#define C__BASICDSA_TREENODE_H

#endif //C__BASICDSA_TREENODE_H

class TreeNode{

public:

    int choice;
    int orderRunner = 1;
    int searchRunner = 1;
    int insertRunner = 1;
    int sameRunner = 1;
    int sumRunner = 1;

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
        TreeNode* root = new TreeNode(2);
        root->left = new TreeNode(4);
        root->right = new TreeNode(8);
        root->left->left = new TreeNode(1);
        root->left->right = new TreeNode(3);
        root->right->left = new TreeNode(10);
        root->right->right = new TreeNode(6);
        root->right->right->right = new TreeNode(7);
        root->left->right->left = new TreeNode(9);
        root->right->left->right = new TreeNode(5);
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

    void explainPreInPost(){
        cout << endl << "This algorithm is able to traverse a binary tree in pre, in, post order traversal" << endl;
        cout << "Knowledge of these algorithms is already expected" << endl;
    }

    void drawTree1(){
        cout << "Tree 1:" << endl;
        cout << "         1" << endl;
        cout << "      /     \\" << endl;
        cout << "     2       3" << endl;
        cout << "   /  \\     /  \\" << endl;
        cout << "  4    5   6    7" << endl;
    }

    void drawTree2(){
        cout << "Tree 2:" << endl;
        cout << "         2" << endl;
        cout << "      /     \\" << endl;
        cout << "     4       8" << endl;
        cout << "   /  \\     /  \\" << endl;
        cout << "  1    3   10    6" << endl;
        cout << "     /       \\    \\" << endl;
        cout << "    9         5    7" << endl;
    }

    int selectTree() {
        int treeChoice;
        cout << "First let's select which tree you want to work with!" << endl;
        drawTree1();
        cout << endl;
        drawTree2();
        cout << "Enter your choice here:";
        cin >> treeChoice;
        return treeChoice;
    }

    int selectOrder(){
        int orderChoice;
        cout << "Not let's select an order algorithm" << endl;
        cout << "1 --> Pre Order" << endl;
        cout << "2 --> In Order" << endl;
        cout << "3 --> Post Order" << endl;
        cout << "Enter your choice here:";
        cin >> orderChoice;
        return orderChoice;
    }

    void chooseOrderInputs(){
        TreeNode* root1 = createTreeManual();
        TreeNode* root2 = createTreeManual2();

        if (selectTree() == 1){  //first selectTree()
            if (selectOrder() == 1) preOrder(root1);
            else if (selectOrder() == 2) inOrder(root1);
            else postOrder(root1);
        }
        else if (selectTree() == 2){  //second selectTree()
            if (selectOrder() == 1) preOrder(root2);
            else if (selectOrder() == 2) inOrder(root2);
            else postOrder(root2);
        }
        else{
            cout << "Please use the correct number mapping!";
            selectTree();
            selectOrder();
        }

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

    void explainSearchBST(){
        cout << endl << "This program searches for a node in a binary search tree." << endl;
        cout << "The function is given two parameters, the root of the BST tree and an integer value of the node you are looking for." << endl;
    }

    void drawBST(){
        cout << "         8" << endl;
        cout << "      /     \\" << endl;
        cout << "     3       10" << endl;
        cout << "   /  \\        \\" << endl;
        cout << "  1    6         14" << endl;
        cout << "     /   \\     /    " << endl;
        cout << "    4     7   13     " << endl;
    }

    void showSearchBSTInputs(){
        cout << "Here is your given binary search tree" << endl;
        drawBST();
        cout << endl << "Which node would you like to search for?" << endl;
    }

    int chooseSearchBSTInputs(){
        TreeNode* root = createBSTManual();
        while (searchRunner == 1){
            cout << "Enter an integer value here:";
            cin >> choice;
            if (choice != 8 && choice != 3 && choice != 10 && choice != 1 && choice != 6 && choice != 14 && choice != 4 && choice != 7 && choice != 13){
                cout << choice << " is not found!";
            }
            else{
                searchBST(choice, root);
            }
            cout << endl << "Would you like to run another input? (1 for Yes | 2 for No):";
            cin >> searchRunner;
        }
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

    void showInsertDataBSTCode(){
        cout << "TreeNode* insertDataBST(int val, TreeNode* root){" << endl;
        cout << "    if (root == NULL){" << endl;
        cout << "        return new TreeNode(val);" << endl;
        cout << "    }" << endl;
        cout << "    if (val < root->data){" << endl;
        cout << "        root->left = insertDataBST(val, root->left);" << endl;
        cout << "    }" << endl;
        cout << "    if (val > root->data){" << endl;
        cout << "        root->right = insertDataBST(val, root->right);" << endl;
        cout << "    }" << endl;
        cout << "    return root;" << endl;
        cout << "}" << endl;
    }

    void explainInsertDataBST(){
        cout << endl << "This program inserts a Node in an already existing binary search tree." << endl;
        cout << "It takes two parameters, the root of the BST and the value of the node you wish to add." << endl;
    }

    void showExamplesInsertBST(){
        cout << "Example 1: " << endl;
        cout << "Input: " << endl;
        cout << "Example 1:" << endl;
        cout << "Input: " << endl;
        cout << "         5" << endl;
        cout << "      /     \\" << endl;
        cout << "     3       8" << "              Val: 7" << endl;
        cout << "   /  \\     /  \\" << endl;
        cout << "  1    4   6    9" << endl;
        cout << "Output: " << endl;
        cout << "         5" << endl;
        cout << "      /     \\" << endl;
        cout << "     3       8" << endl;
        cout << "   /  \\     /  \\" << endl;
        cout << "  1    4   6    9" << endl;
        cout << "            \\" << endl;
        cout << "             7" << endl;

    }
    void showInsertBSTInputs(){
        cout << "Here is your given binary search tree" << endl;
        drawBST();
        cout << endl << "Which node would you like to insert?" << endl;
        cout << "1 --> 11" << endl;
        cout << "2 --> 0" << endl;
        cout << "3 --> 2" << endl;
    }

    int chooseInsertBSTInputs(){
        TreeNode* root = createBSTManual();
        TreeNode* temp = NULL;

        while (insertRunner == 1) {
            cout << "Enter your desired input here:";
            cin >> choice;
            if (choice == 1){
                cout << endl;
                temp = insertDataBST(11, root);
                cout << "Result in Pre Order" << endl;
                preOrder(temp);
            }
            else if (choice == 2){
                cout << endl;
                temp = insertDataBST(0, root);
                cout << "Result in Pre Order" << endl;
                preOrder(temp);
            }
            else if (choice == 3){
                cout << endl;
                temp = insertDataBST(2, root);
                cout << "Result in Pre Order" << endl;
                preOrder(temp);
            }
            else{
                cout << "Please use the correct number mapping!";
                chooseInsertBSTInputs();
            }
            cout << endl << "Would you like to run another input? (1 for Yes | 2 for No):";
            cin >> insertRunner;
        }

    }





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

    void showIsSameTreeCode(){
        cout << "bool isSameTree(TreeNode* root1, TreeNode* root2){" << endl;
        cout << "    if (root1 == NULL && root2 == NULL) {" << endl;
        cout << "        return true;" << endl;
        cout << "    }" << endl;
        cout << "    else if (root1 == NULL || root2 == NULL) {" << endl;
        cout << "        return false;" << endl;
        cout << "    }" << endl;
        cout << "    else if (root1->data != root2->data) {" << endl;
        cout << "        return false;" << endl;
        cout << "    }" << endl;
        cout << "    else{" << endl;
        cout << "        return isSameTree(root1->left, root2->left) && isSameTree(root1->right, root2->right);" << endl;
        cout << "    }" << endl;
        cout << "}" << endl;
    }

    void explainIsSameTree(){
        cout << "Given the roots of two binary trees p and q, write a function to check if they are the same or not.\n"
                "\n"
                "Two binary trees are considered the same if they are structurally identical, and the nodes have the same value." << endl;
        cout << "*** COURTESY OF LEETCODE ***" << endl;
    }

    void showExamplesIsSameTree(){
        cout << "Example 1: " << endl;
        cout << "Input: " << endl;
        cout << "    1" <<            "             1" << endl;
        cout << "  /   \\" <<         "         /   \\"  << endl;
        cout << " 2     3" <<         "       2     3" << endl;
        cout << "Output: true" << endl;
        cout << "Explanation: The two binary trees are the exact same." << endl << endl;
        cout << "Example 2: "<< endl;
        cout << "Input: "<< endl;
        cout << "    1" << "     1" << endl;
        cout << "  / "  << "        \\" << endl;
        cout << " 2"    << "           2" << endl;
        cout << "Output: false" << endl;
        cout << "Explanation: While this looks similar, the nodes are in different positions." << endl;
        cout << "*** COURTESY OF LEETCODE ***" << endl;

    }





    int sumNodes(TreeNode* root) {
        if (root == NULL){
            return 0;
        }
        else {
            return root->data + sumNodes(root->left) + sumNodes(root->right);
        }
    }

    void showSumNodesCode(){
        cout << "int sumNodes(TreeNode* root) {" << endl;
        cout << "    if (root == NULL){" << endl;
        cout << "        return 0;" << endl;
        cout << "    }" << endl;
        cout << "    else {" << endl;
        cout << "        return root->data + sumNodes(root->left) + sumNodes(root->right);" << endl;
        cout << "    }" << endl;
        cout << "}" << endl;
    }

    void explainSumNodes(){
        cout << "Given the root of the binary tree as input, the task is to return the sum of all the nodes in the tree." << endl;
    }

    void showExamplesSumNodes(){
        cout << "Example 1:" << endl;
        cout << "Input: " << endl;
        cout << "         1" << endl;
        cout << "      /     \\" << endl;
        cout << "     2       3" << endl;
        cout << "   /  \\     /  \\" << endl;
        cout << "  4    5   6    7" << endl;
        cout << "Output: 28" << endl;
        cout << "Explanation: 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28" << endl;
    }






    void chooseTreeAlgo(){
        cout << "Which algorithm that uses a tree would you like to see?" << endl;
        cout << "1 --> Pre/In/Post Order Traversal" << endl;
        cout << "2 --> Search in Binary Search Tree" << endl;
        cout << "3 --> Insert in Binary Search Tree" << endl;
        cout << "4 --> Is Same Tree?" << endl;
        cout << "5 --> Sum Nodes of Tree" << endl;
    }

    int selectTreeAlgo(){
        cout << "Type a number to select: ";
        cin >> choice;
        if (choice == 1){
            explainPreInPost();
            cout << endl << "Let's run this algorithm!" << endl;
            chooseOrderInputs();
            cout << endl << "Would you like to see the code for this algorithm? (1 for Yes | 2 for No):";
            cin >> choice;
            if (choice == 1) {
                cout << "Which algorithm?" << endl;
                cout << "1 --> Pre" << endl;
                cout << "2 --> In" << endl;
                cout << "3 --> Post" << endl;
                cout << "Enter choice here:";
                cin >> choice;
                if (choice == 1) showPreOrderCode();
                else if (choice == 2) showInOrderCode();
                else showPostOrderCode();
            }
        }
        else if (choice == 2){
            explainSearchBST();
            cout << endl << "Let's run this algorithm!" << endl;
            showSearchBSTInputs();
            chooseSearchBSTInputs();
            cout << endl << "Would you like to see the code for this algorithm? (1 for Yes | 2 for No):";
            cin >> choice;
            if (choice == 1) {
                cout << endl;
                showSearchBSTCode();
            }
        }
        else if (choice == 3){
            explainInsertDataBST();
            cout << endl << "Would you like to view examples of this problem? (1 for Yes | 2 for No):";
            cin >> choice;
            if (choice == 1){
                cout << endl;
                showExamplesInsertBST();
            }
            cout << endl << "Let's run this algorithm!" << endl;
            showInsertBSTInputs();
            chooseInsertBSTInputs();
            cout << endl << "Would you like to see the code for this algorithm? (1 for Yes | 2 for No):";
            cin >> choice;
            if (choice == 1) {
                cout << endl;
                showInsertDataBSTCode();
            }

        }
        else if (choice == 4){
            cout << endl << "You chose Is Same Tree?" << endl;
        }
        else if (choice == 5){
            cout << endl << "You chose Sum Nodes of Tree" << endl;
        }
        else{
            cout << "--> Please select the correct number mapping!" << endl;
            selectTreeAlgo();
        }
        return choice;
    }

    void resetVariables(){
        int orderRunner = 1;
        int searchRunner = 1;
        int insertRunner = 1;
        int sameRunner = 1;
        int sumRunner = 1;
    }
};
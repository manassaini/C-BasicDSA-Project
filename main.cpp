#include <iostream>
#include <stack>
using namespace std;
#include "Stack.h"
#include "Queue.h"
#include "ListNode.h"
#include "TreeNode.h"
#include "Program.h"

int main() {
    /*
    Stack s;
   // s.showGreaterRightCode();
    Queue q;
    //q.showInterleaveCode();
    Node list;
    TreeNode tree(0);

    /*
    Node* head = list.createLinkedList(8);
    list.printList(head);


    Program program;
    program.IntroMessage();
    program.chooseDS();
    s.explainBalancedParantheses();
    s.showExamplesBalancedParantheses();


   // tree.showExamplesIsSameTree();
    //tree.showExamplesSumNodes();
    tree.showExamplesInsertBST();
    */

    Program program;
    Stack stack;
    Queue queue;
    Node list;
    TreeNode tree(0);

    int mainRunner = 1;
    program.IntroMessage();
    program.chooseDS();

    while (mainRunner == 1){
        int choiceDS = program.selectDS();
        //int choiceAlgo;

        if (choiceDS == 1){
            mainRunner = 1;
            stack.chooseStackAlgo();
            stack.selectStackAlgo();
            cout << endl << "Would you like to work with another DS? (1 for Yes | 2 for No):";
            cin >> mainRunner;
            if (mainRunner == 1) {
                stack.resetVariables();
                cout << endl;
                program.chooseDS();
            }
            else {
                cout << "Goodbye! " << endl;
            }
        }
        else if (choiceDS == 2){
            mainRunner = 1;
            queue.chooseQueueAlgo();
            queue.selectQueueAlgo();
            cout << endl << "Would you like to work with another DS? (1 for Yes | 2 for No):";
            cin >> mainRunner;
            if (mainRunner == 1){
                queue.resetVariables();
                cout << endl;
                program.chooseDS();
            }
            else {
                cout << "Goodbye! " << endl;
            }
        }
        else if (choiceDS == 3){
            mainRunner = 1;
            list.chooseListAlgo();
            list.selectListAlgo();
            cout << endl << "Would you like to work with another DS? (1 for Yes | 2 for No):";
            cin >> mainRunner;
            if (mainRunner == 1){
                list.resetVariables();
                cout << endl;
                program.chooseDS();
            }
            else {
                cout << "Goodbye! " << endl;
            }

            //choiceAlgo = list.selectListAlgo();
        }
        else if (choiceDS == 4){
            mainRunner = 1;
            tree.chooseTreeAlgo();
            tree.selectTreeAlgo();
            cout << endl << "Would you like to work with another DS? (1 for Yes | 2 for No):";
            cin >> mainRunner;
            if (mainRunner == 1){
                tree.resetVariables();
                cout << endl;
                program.chooseDS();
            }
            else {
                cout << "Goodbye! " << endl;
            }

        }
    }











    return 0;
}

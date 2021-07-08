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

    program.IntroMessage();
    program.chooseDS();

    int choice = program.selectDS();

    if (choice == 1){
        stack.chooseStackAlgo();
    }
    else if (choice == 2){
        queue.chooseQueueAlgo();
    }
    else if (choice == 3){
        list.chooseListAlgo();
    }
    else if (choice == 4){
        tree.chooseTreeAlgo();
    }










    return 0;
}

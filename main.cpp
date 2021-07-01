#include <iostream>
#include <stack>
using namespace std;
#include "Stack.h"
#include "Queue.h"
#include "ListNode.h"
#include "TreeNode.h"

int main() {
    Stack s;
   // s.showGreaterRightCode();
    Queue q;
    //q.showInterleaveCode();
    Node list;

    Node* head = list.createLinkedList(8);
    list.printList(head);



    return 0;
}

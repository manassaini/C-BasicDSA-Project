//
// Created by manas on 6/28/2021.
//

#ifndef C__BASICDSA_LINKEDLIST_H
#define C__BASICDSA_LINKEDLIST_H

#endif //C__BASICDSA_LINKEDLIST_H

class Node {

public:

    int data;
    Node* next;

    void printList(Node* n){
        while (n != NULL){
            cout << n->data << " ";
            n = n->next;
        }
    }

    Node* createLinkedList(int n){
        Node* head = NULL;
        Node* temp = NULL;
        Node* x = NULL;

        for (int i = 0; i < n; ++i){
            //creating an isolated node in the "middle of nowhere"
            temp = new Node();
            temp->data = i;
            temp->next = NULL;

            if (head == NULL){
                head = temp;
            }
            else{
                x = head;
                while (x->next != NULL){
                    x = x->next;
                }
                x->next = temp;
            }

            //picture what is going on here
            //28->33->45->27->NULL      72->NULL
            //^ This is the already     ^this is the isolated node that we have to add to the end of our linked list
            //created linkedList
        }
        return head;
    }

    Node* createNewNode(int value){
        Node* result = new Node();
        result->data = value;
        result->next = NULL;
        return result;
    }

    Node* addNodeToEnd(Node* head){
        int newData;
        Node* temp;
        Node* newNode;
        temp = head;
        cout << "Enter data of the new Node:";
        cin >> newData;
        newNode = createNewNode(newData);

        while (temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        return head;
    }

    void explainAddNodeToEnd(){
        cout << "This simple program adds a Node to the end of an already existing linked list. The data for the new node is asked within the program." << endl;
    }

    void showAddNodeToEndCode(){
        cout << "Node* addNodeToEnd(Node* head){" << endl;
        cout << "    int newData;" << endl;
        cout << "    Node* temp;" << endl;
        cout << "    Node* newNode;" << endl;
        cout << "    temp = head;" << endl;
        cout << "    cout << ""Enter data of the new Node:"";" << endl;
        cout << "    cin >> newData;" << endl;
        cout << "    newNode = createNewNode(newData);" << endl;

        cout << "    while (temp->next != NULL){" << endl;
        cout << "        temp = temp->next;" << endl;
        cout << "    }" << endl;
        cout << "    temp->next = newNode;" << endl;
        cout << "    return head;" << endl;
        cout << "}" << endl;
    }
    Node* addNodeToFront(Node* head, int num){
        int newData;
        Node* temp;
        Node* newNode;
        temp = head;
        for (int i = 0; i < num; ++i){
            cout << "Enter data for your new node:";
            cin >> newData;
            newNode = createNewNode(newData);
            newNode->next = head;
            head = newNode;
        }
        return head;
    }

    void showAddNodeToFrontCode(){
        cout << "Node* addNodeToFront(Node* head, int num){" << endl;
        cout << "    int newData;" << endl;
        cout << "    Node* temp;" << endl;
        cout << "    Node* newNode;" << endl;
        cout << "    temp = head;" << endl;
        cout << "    for (int i = 0; i < num; ++i){" << endl;
        cout << "        cout << ""Enter data for your new node:"";" << endl;
        cout << "        cin >> newData;" << endl;
        cout << "        newNode = createNewNode(newData);" << endl;
        cout << "        newNode->next = head;" << endl;
        cout << "        head = newNode;" << endl;
        cout << "    }" << endl;
        cout << "    return head;" << endl;
        cout << "}" << endl;
    }

    void explainAddNodeToFront(){
        cout << "This simple program adds a Node to the front of an already existing linked list. The data for the new node is asked within the program." << endl;
    }

    Node* findSpecificNode(Node* node, int value){
        while (node != NULL){
            if (node->data == value) return node;
            node = node->next;
        }
        return NULL;
    }

    void explainFindSpecificNode(){
        cout << "This program checks to see if a specific node is in a linked list or not. Takes in a linked list and value as parameters." << endl;
        cout << "The value is the node->data you are looking for." << endl;
    }

    void showFindSpecificNodeCode(){
        cout << "Node* findSpecificNode(Node* node, int value){" << endl;
        cout << "    while (node != NULL){" << endl;
        cout << "        if (node->data == value) return node;" << endl;
        cout << "        node = node->next;" << endl;
        cout << "    }" << endl;
        cout << "    return NULL;" << endl;
        cout << "}" << endl;
    }

    Node* deleteNode(Node* head, int pos){
        Node* previous = head;
        Node* current = head;
        if (pos == 1){
            head = current->next;
            free(current);
            current = NULL;
        }
        else{
            while (pos != 1){
                previous = current;
                current = current->next;
                pos--;
            }
            previous->next = current->next;
            free(current);
            current = NULL;
        }
        return head;
    }

    void showDeleteNodeCode(){
        cout << "Node* deleteNode(Node* head, int pos){" << endl;
        cout << "    Node* previous = head;" << endl;
        cout << "    Node* current = head;" << endl;
        cout << "    if (pos == 1){" << endl;
        cout << "        head = current->next;" << endl;
        cout << "        free(current);" << endl;
        cout << "        current = NULL;" << endl;
        cout << "    }" << endl;
        cout << "    else{" << endl;
        cout << "        while (pos != 1){" << endl;
        cout << "            previous = current;" << endl;
        cout << "            current = current->next;" << endl;
        cout << "            pos--;" << endl;
        cout << "        }" << endl;
        cout << "        previous->next = current->next;" << endl;
        cout << "        free(current);" << endl;
        cout << "        current = NULL;" << endl;
        cout << "    }" << endl;
        cout << "   return head;" << endl;
        cout << "}" << endl;
    }

    void explainDeleteNode(){
        cout << "Given the head of a linked list and an integer holding the position of the node you wish to be deleted, the task is to delete that node" << endl;
        cout << "*** COURTESY OF GEEKSFORGEEKS ***" << endl;
    }

    void showExamplesDeleteNode(){
        cout << "Example 1:" << endl;
        cout << "Input: 4->5->1->9, 2" << endl;
        cout << "Output: 4->1->9" << endl;
        cout << "Explanation: The node at position 2 is deleted." << endl;
    }

    int getMiddle(Node* head) {
        Node *slowPointer = head;
        Node *fastPointer = head;
        while (fastPointer != NULL && fastPointer->next != NULL) {
            slowPointer = slowPointer->next;
            fastPointer = fastPointer->next->next;
        }
        return slowPointer->data;
    }

    void explainGetMiddel(){
        cout << "Given a singly linked list of N nodes. The task is to find the middle of the linked list. For example, if given linked list is 1->2->3->4->5 then the output should be 3.\n"
                "If there are even nodes, then there would be two middle nodes, we need to print the second middle element. For example, if given linked list is 1->2->3->4->5->6 then the output should be 4." << endl;
        cout << "*** COURTESY OF GEEKSFORGEEKS ***" << endl;
    }

    void showExamplesGetMiddle(){
        cout << "Example 1: " << endl;
        cout << "Input: LinkedList: 1->2->3->4->5" << endl;
        cout << "Output: 3" << endl;
        cout << "Example 2: " << endl;
        cout << "Input: LinkedList: 2->4->6->7->5->1" << endl;
        cout << "Output: 7" << endl;
    }

    void showGetMiddleCode(){
        cout << "int getMiddle(Node* head) {" << endl;
        cout << "    Node *slowPointer = head;" << endl;
        cout << "    Node *fastPointer = head;" << endl;
        cout << "    while (fastPointer != NULL && fastPointer->next != NULL) {" << endl;
        cout << "        slowPointer = slowPointer->next;" << endl;
        cout << "        fastPointer = fastPointer->next->next;" << endl;
        cout << "    }" << endl;
        cout << "    return slowPointer->data;" << endl;
        cout << "}" << endl;
    }

    void removeDuplicates(Node* head){
        Node* current = head;
        Node* next;
        while (current->next != NULL){
            if (current->data == current->next->data){
                next = current->next->next;
                free(current->next);
                current->next = next;
            }
            else{
                current = current->next;
            }
        }
        printList(head);
    }

    void showRemoveDuplicatesCode(){
        cout << "void removeDuplicates(Node* head){" << endl;
        cout << "    Node* current = head;" << endl;
        cout << "    Node* next;" << endl;
        cout << "    while (current->next != NULL){" << endl;
        cout << "        if (current->data == current->next->data){" << endl;
        cout << "            next = current->next->next;" << endl;
        cout << "            free(current->next);" << endl;
        cout << "            current->next = next;" << endl;
        cout << "        }" << endl;
        cout << "        else{" << endl;
        cout << "            current = current->next;" << endl;
        cout << "        }" << endl;
        cout << "    }" << endl;
        cout << "    printList(head);" << endl;
        cout << "}" << endl;
    }

    void explainRemoveDuplicates(){
        cout << "Given an unsorted linked list of N nodes. The task is to remove duplicate elements from this unsorted Linked List. When a value appears in multiple nodes, the node which appeared first should be kept, all others duplicates are to be removed." << endl;
        cout << "*** COURTESY OF GEEKSFORGEEKS ***" << endl;
    }

    void showExamplesRemoveDuplicates(){
        cout << "Example 1: " << endl;
        cout << "Input: 5->2->2->4" << endl;
        cout << "Output: 5->2->4" << endl;
        cout << "Example 2: " << endl;
        cout << "Input: 2->2->2->2->" << endl;
        cout << "Output: 2" << endl;
    }
};
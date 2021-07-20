//
// Created by manas on 6/28/2021.
//

#ifndef C__BASICDSA_LINKEDLIST_H
#define C__BASICDSA_LINKEDLIST_H

#endif //C__BASICDSA_LINKEDLIST_H

class Node {

public:

    int choice;
    int endRunner = 1;
    int frontRunner = 1;
    int findRunner = 1;
    int deleteRunner = 1;
    int middleRunner = 1;
    int duplicateRunner = 1;

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

    void showExamplesForMost(){
        cout << "Choose your desired input" << endl;
        cout << "1 --> 0->1->2->-3->4->5->6->7->8->9" << endl;
        cout << "2 --> 0->1->2->3->4->" << endl;
        cout << "3 --> 0->1->2->3->4->5->6->7" << endl;
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
        cout << endl << "This simple program adds a Node to the end of an already existing linked list. The data for the new node is asked within the program." << endl;
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

    int chooseAddToEndInputs(){
        Node* head1 = NULL;
        Node* head2 = NULL;
        Node* head3 = NULL;
        head1 = createLinkedList(10);
        head2 = createLinkedList(5);
        head3 = createLinkedList(8);

        while (endRunner == 1){
            cout << "Enter your desired input here:";
            cin >> choice;
            if (choice == 1){
                cout << endl;
                cout << "Here is your original list" << endl;
                printList(head1);
                cout << endl;
                head1 = addNodeToEnd(head1);
                cout << "New list" << endl;
                printList(head1);
            }
            else if (choice == 2){
                cout << endl;
                cout << "Here is your original list" << endl;
                printList(head2);
                cout << endl;
                head2 = addNodeToEnd(head2);
                cout << "New list" << endl;
                printList(head2);
            }
            else if (choice == 3){
                cout << endl;
                cout << "Here is your original list" << endl;
                printList(head3);
                cout << endl;
                head3 = addNodeToEnd(head3);
                cout << "New list" << endl;
                printList(head3);
            }
            else{
                cout << "Please use the correct number mapping!";
                chooseAddToEndInputs();
            }
            cout << endl << "Would you like to run another input? (1 for Yes | 2 for No):";
            cin >> endRunner;
        }
    }




    Node* addNodeToFront(Node* head){
        int newData;
        Node* temp;
        Node* newNode;
        temp = head;
        for (int i = 0; i < 1; ++i){
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
        cout << endl << "This simple program adds a Node to the front of an already existing linked list. The data for the new node is asked within the program." << endl;
    }

    int chooseAddToFrontInputs(){
        Node* head1 = NULL;
        Node* head2 = NULL;
        Node* head3 = NULL;
        head1 = createLinkedList(10);
        head2 = createLinkedList(5);
        head3 = createLinkedList(8);

        while (frontRunner == 1){
            cout << "Enter your desired input here:";
            cin >> choice;
            if (choice == 1){
                cout << endl;
                cout << "Here is your original list" << endl;
                printList(head1);
                cout << endl;
                head1 = addNodeToFront(head1);
                cout << "New list" << endl;
                printList(head1);
            }
            else if (choice == 2){
                cout << endl;
                cout << "Here is your original list" << endl;
                printList(head2);
                cout << endl;
                head2 = addNodeToFront(head2);
                cout << "New list" << endl;
                printList(head2);
            }
            else if (choice == 3){
                cout << endl;
                cout << "Here is your original list" << endl;
                printList(head3);
                cout << endl;
                head3 = addNodeToFront(head3);
                cout << "New list" << endl;
                printList(head3);
            }
            else{
                cout << "Please use the correct number mapping!";
                chooseAddToFrontInputs();
            }
            cout << endl << "Would you like to run another input? (1 for Yes | 2 for No):";
            cin >> frontRunner;
        }
    }



    Node* findSpecificNode(Node* node, int value){
        while (node != NULL){
            if (node->data == value) {
                cout << "Node found!" << endl;
                return node;
            }
            node = node->next;
        }
        cout << "Node not found!" << endl;
    }

    void explainFindSpecificNode(){
        cout << endl << "This program checks to see if a specific node is in a linked list or not. Takes in a linked list and value as parameters." << endl;
        cout << "The value is the node->data you are looking for." << endl;
        cout << "If the node is found, return it. If not, return ""Node not found!""" << endl;
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

    void showFindNodeInputs(){
        cout << "Choose your desired input" << endl;
        cout << "1 --> 0->1->2->-3->4->5->6->7->8->9, 5" << endl;
        cout << "2 --> 0->1->2->3->4->, 4" << endl;
        cout << "3 --> 0->1->2->3->4->5->6->7, 20" << endl;
    }

    int chooseFindNodeInputs(){
        Node* head1 = NULL;
        Node* head2 = NULL;
        Node* head3 = NULL;
        head1 = createLinkedList(10);
        head2 = createLinkedList(5);
        head3 = createLinkedList(8);

        while (findRunner == 1){
            cout << "Enter your desired input here:";
            cin >> choice;
            if (choice == 1){
                cout << endl;
                cout << "Here is your original list" << endl;
                printList(head1);
                cout << endl;
                head1 = findSpecificNode(head1, 5);
                cout << head1->data;
            }
            else if (choice == 2){
                cout << endl;
                cout << "Here is your original list" << endl;
                printList(head2);
                cout << endl;
                head2 = findSpecificNode(head2, 4);
                cout << head2->data;
            }
            else if (choice == 3){
                cout << endl;
                cout << "Here is your original list" << endl;
                printList(head3);
                cout << endl;
                head3 = findSpecificNode(head3, 8);
                cout << head3->data;
            }
            else{
                cout << "Please use the correct number mapping!";
                chooseFindNodeInputs();
            }
            cout << endl << "Would you like to run another input? (1 for Yes | 2 for No):";
            cin >> findRunner;
        }
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
        cout << endl << "Given the head of a linked list and an integer holding the position of the node you wish to be deleted, the task is to delete that node" << endl;
        cout << "*** COURTESY OF GEEKSFORGEEKS ***" << endl;
    }

    void showExamplesDeleteNode(){
        cout << "Example 1:" << endl;
        cout << "Input: 4->5->1->9, 2" << endl;
        cout << "Output: 4->1->9" << endl;
        cout << "Explanation: The node at position 2 is deleted." << endl;
    }

    void showDeleteNodeInputs(){
        cout << "Choose your desired input" << endl;
        cout << "1 --> 0->1->2->-3->4->5->6->7->8->9, 5" << endl;
        cout << "2 --> 0->1->2->3->4->, 4" << endl;
        cout << "3 --> 0->1->2->3->4->5->6->7, 2" << endl;
    }

    int chooseDeleteNodeInputs() {
        Node *head1 = NULL;
        Node *head2 = NULL;
        Node *head3 = NULL;
        head1 = createLinkedList(10);
        head2 = createLinkedList(5);
        head3 = createLinkedList(8);

        while (deleteRunner == 1) {
            cout << "Enter your desired input here:";
            cin >> choice;
            if (choice == 1) {
                cout << endl;
                cout << "Here is your original list" << endl;
                printList(head1);
                cout << endl;
                head1 = deleteNode(head1, 5);
                cout << "New list" << endl;
                printList(head1);
            } else if (choice == 2) {
                cout << endl;
                cout << "Here is your original list" << endl;
                printList(head2);
                cout << endl;
                head2 = deleteNode(head2, 4);
                cout << "New list" << endl;
                printList(head2);
            } else if (choice == 3) {
                cout << endl;
                cout << "Here is your original list" << endl;
                printList(head3);
                cout << endl;
                head3 = deleteNode(head3, 2);
                cout << "New list" << endl;
                printList(head3);
            } else {
                cout << "Please use the correct number mapping!";
                chooseDeleteNodeInputs();
            }
            cout << endl << "Would you like to run another input? (1 for Yes | 2 for No):";
            cin >> deleteRunner;
        }
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
        cout << endl << "Given a singly linked list of N nodes. The task is to find the middle of the linked list. For example, if given linked list is 1->2->3->4->5 then the output should be 3.\n"
                "If there are even nodes, then there would be two middle nodes, we need to print the second middle element. For example, if given linked list is 1->2->3->4->5->6 then the output should be 4." << endl;
        cout << "*** COURTESY OF GEEKSFORGEEKS ***" << endl;
    }

    void showExamplesGetMiddle(){
        cout << "Example 1: " << endl;
        cout << "Input: LinkedList: 1->2->3->4->5" << endl;
        cout << "Output: 3" << endl << endl;
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

    void chooseGetMiddleInputs(){
        Node *head1 = NULL;
        Node *head2 = NULL;
        Node *head3 = NULL;
        head1 = createLinkedList(10);
        head2 = createLinkedList(5);
        head3 = createLinkedList(8);

        while (middleRunner == 1) {
            cout << "Enter your desired input here:";
            cin >> choice;
            if (choice == 1) {
                cout << endl;
                cout << "Here is your original list" << endl;
                printList(head1);
                cout << endl << "Middle: " << getMiddle(head1);
            } else if (choice == 2) {
                cout << endl;
                cout << "Here is your original list" << endl;
                printList(head2);
                cout << endl << "Middle: " << getMiddle(head2);
            } else if (choice == 3) {
                cout << endl;
                cout << "Here is your original list" << endl;
                printList(head3);
                cout << endl << "Middle: " << getMiddle(head3);
            } else {
                cout << "Please use the correct number mapping!";
                chooseGetMiddleInputs();
            }
            cout << endl << "Would you like to run another input? (1 for Yes | 2 for No):";
            cin >> middleRunner;
        }
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











    void chooseListAlgo(){
        cout << "Which algorithm that uses a linked list would you like to see?" << endl;
        cout << "1 --> Add Node to Front" << endl;
        cout << "2 --> Add Node to End" << endl;
        cout << "3 --> Find Specific Node" << endl;
        cout << "4 --> Delete Specific Node" << endl;
        cout << "5 --> Get Middle of List" << endl;
        cout << "6 --> Remove Duplicates" << endl;
    }

    int selectListAlgo(){
        cout << "Type a number to select: ";
        cin >> choice;
        if (choice == 1){
            explainAddNodeToEnd();
            cout << endl << "Let's run this algorithm!" << endl;
            showExamplesForMost();
            chooseAddToEndInputs();
            cout << endl << "Would you like to see the code for this algorithm? (1 for Yes | 2 for No):";
            cin >> choice;
            if (choice == 1) {
                cout << endl;
                showAddNodeToEndCode();
            }
        }
        else if (choice == 2){
            explainAddNodeToFront();
            cout << endl << "Let's run this algorithm!" << endl;
            showExamplesForMost();
            chooseAddToFrontInputs();
            cout << endl << "Would you like to see the code for this algorithm? (1 for Yes | 2 for No):";
            cin >> choice;
            if (choice == 1) {
                cout << endl;
                showAddNodeToFrontCode();
            }
        }
        else if (choice == 3){
            explainFindSpecificNode();
            cout << endl << "Let's run this algorithm!" << endl;
            showFindNodeInputs();
            chooseFindNodeInputs();
            cout << endl << "Would you like to see the code for this algorithm? (1 for Yes | 2 for No):";
            cin >> choice;
            if (choice == 1) {
                cout << endl;
                showFindSpecificNodeCode();
            }
        }
        else if (choice == 4){
            explainDeleteNode();
            cout << endl << "Would you like to view examples of this problem? (1 for Yes | 2 for No):";
            cin >> choice;
            if (choice == 1){
                cout << endl;
                showExamplesDeleteNode();
            }
            cout << endl << "Let's run this algorithm!" << endl;
            showDeleteNodeInputs();
            chooseDeleteNodeInputs();
            cout << endl << "Would you like to see the code for this algorithm? (1 for Yes | 2 for No):";
            cin >> choice;
            if (choice == 1) {
                cout << endl;
                showDeleteNodeCode();
            }
        }
        else if (choice == 5){
            explainGetMiddel();
            cout << endl << "Would you like to view examples of this problem? (1 for Yes | 2 for No):";
            cin >> choice;
            if (choice == 1){
                cout << endl;
                showExamplesGetMiddle();
            }
            cout << endl << "Let's run this algorithm!" << endl;
            showExamplesForMost();
            chooseGetMiddleInputs();
            cout << endl << "Would you like to see the code for this algorithm? (1 for Yes | 2 for No):";
            cin >> choice;
            if (choice == 1) {
                cout << endl;
                showGetMiddleCode();
            }
        }
        else if (choice == 6){
            cout << endl << "You chose Remove Duplicates" << endl;
        }
        else{
            cout << "--> Please select the correct number mapping!" << endl;
            selectListAlgo();
        }
        return choice;
    }

    void resetVariables(){
        int endRunner = 1;
        int frontRunner = 1;
        int findRunner = 1;
        int deleteRunner = 1;
        int middleRunner = 1;
        int duplicateRunner = 1;
    }

};
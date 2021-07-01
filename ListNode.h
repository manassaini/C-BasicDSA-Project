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

    void showAddNodeToEndCode(){
        cout << "Node* addNodeToEnd(Node* head){" << endl;
        cout << "    int newData;" << endl;
        cout << "    Node* temp;" << endl;
        cout << "    Node* newNode;" << endl;
        cout << "    temp = head;" << endl;
        cout << "    cout << ""Enter data of the new Node:";"" << endl;
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
        cout << "        cout << ""Enter data for your new node:";"" << endl;
        cout << "        cin >> newData;" << endl;
        cout << "        newNode = createNewNode(newData);" << endl;
        cout << "        newNode->next = head;" << endl;
        cout << "        head = newNode;" << endl;
        cout << "    }" << endl;
        cout << "    return head;" << endl;
        cout << "}" << endl;
    }

    Node* findSpecificNode(Node* node, int value){
        while (node != NULL){
            if (node->data == value) return node;
            node = node->next;
        }
        return NULL;
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
};
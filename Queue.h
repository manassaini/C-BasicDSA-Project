//
// Created by manas on 6/28/2021.
//

#ifndef C__BASICDSA_QUEUE_H
#define C__BASICDSA_QUEUE_H

#endif //C__BASICDSA_QUEUE_H

#include <queue>

class Queue{
public:

    int choice;

    void printQueue(queue<int>q){
        while (!q.empty()){
            cout << q.front() << " ";
            q.pop();
        }
    }



    //works in gg compiler
    queue<int> rev(queue<int> q){
        stack<int>temp;
        while (!q.empty()){
            temp.push(q.front());
            q.pop();
        }
        while (!temp.empty()){
            q.push(temp.top());
            temp.pop();
        }

        return q;
    }

    void showRevCode(){
        cout << "queue<int> rev(queue<int> q){" << endl;
        cout << "    stack<int>temp;" << endl;
        cout << "    while (!q.empty()){" << endl;
        cout << "        temp.push(q.front());" << endl;
        cout << "        q.pop();" << endl;
        cout << "    }" << endl;
        cout << "    while (!temp.empty()){" << endl;
        cout << "        q.push(temp.top());" << endl;
        cout << "        temp.pop();" << endl;
        cout << "    }" << endl;

        cout << "    return q;" << endl;
        cout << "}" << endl;
    }

    void explainReverseQueue(){
        cout << "Given a Queue Q containing N elements. The task is to reverse the Queue" << endl;
        cout << "*** COURTESY OF GEEKSFORGEEKS ***" << endl;
    }

    void showExamplesRevQueue(){
        cout << "Example 1:" << endl;
        cout << "Input: 4 3 1 10 2 6" << endl;
        cout << "Output: 6 2 10 1 3 4" << endl;
        cout << "Example 2:" << endl;
        cout << "Input: 4 3 2 1" << endl;
        cout << "Output: 1 2 3 4" << endl;
        cout << "*** COURTESY OF GEEKSFORGEEKS ***" << endl;
    }






    void modifyQueue(queue<int> q, int k){
        stack<int>s;
        int queueSize = q.size();
        int arr[q.size()];
        for (int i = 0; i < queueSize - k; ++i){
            arr[i] = q.front();
            q.pop();
        }
        while (!q.empty()){
            s.push(q.front());
            q.pop();
        }
        for (int i = (queueSize-k) - 1; i >= 0; --i){
            s.push(arr[i]);
        }
        while (!s.empty()){
            q.push(s.top());
            s.pop();
        }

        printQueue(q);
    }

    void showModifyQueueCode(){
        cout << "void modifyQueue(queue<int> q, int k){" << endl;
        cout << "stack<int>s;" << endl;
        cout << "int queueSize = q.size();" << endl;
        cout << "int arr[q.size()];" << endl;
        cout << " for (int i = 0; i < queueSize - k; ++i){" << endl;
        cout << "     arr[i] = q.front();" << endl;
        cout << "     q.pop();" << endl;
        cout << " }" << endl;
        cout << "  while (!q.empty()){" << endl;
        cout << "      s.push(q.front());" << endl;
        cout << "      q.pop();" << endl;
        cout << " }" << endl;
        cout << " for (int i = (queueSize-k) - 1; i >= 0; --i){" << endl;
        cout << "      s.push(arr[i]);" << endl;
        cout << "  }" << endl;
        cout << "  while (!s.empty()){" << endl;
        cout << "      q.push(s.top());" << endl;
        cout << "      s.pop();" << endl;
        cout << "  }" << endl;

        cout << "  printQueue(q);" << endl;
        cout << "}" << endl;
    }

    void explainModifyQueue(){
        cout << endl << "Given an integer K and a queue of integers, we need to reverse the order of"
                        "the first K elements of the queue, leaving the other elements in the same relative order." << endl;
        cout << "*** COURTESY OF GEEKSFORGEEKS ***";
    }

    void showExamplesModifyQueue(){
        cout << "Example 1:" << endl;
        cout << "Input: 1 2 3 4 5, 3" << endl;
        cout << "Output: 3 2 1 4 5" << endl;
        cout << "Explanation: The output has the first three elements of the queue reversed, the rest are the same." << endl << endl;
        cout << "Example 2:" << endl;
        cout << "Input: 4 3 2 1, 4" << endl;
        cout << "Output: 1 2 3 4" << endl;
        cout << "Explanation: The output has reversed all the elements of the queue, because there are 4 elements." << endl;
        cout << "*** COURTESY OF GEEKSFORGEEKS ***" << endl;
    }





    void interLeave(queue<int>q){
        int queueSize = q.size();
        stack<int>firstHalf;
        stack<int>secondHalf;
        for (int i = 0; i < queueSize; ++i){
            if (i < queueSize/2){
                secondHalf.push(q.front());
                q.pop();
            }
            else{
                firstHalf.push(q.front());
                q.pop();
            }
        }

        for (int i = 0; i < queueSize/2; ++i){
            q.push(firstHalf.top());
            q.push(secondHalf.top());
            firstHalf.pop();
            secondHalf.pop();
        }

        while (!q.empty()){
            firstHalf.push(q.front());
            q.pop();
        }
        while (!firstHalf.empty()){
            q.push(firstHalf.top());
            firstHalf.pop();
        }

        printQueue(q);
    }

    void showInterleaveCode(){
        cout << "void interLeave(queue<int>q){" << endl;
        cout << "   int queueSize = q.size();" << endl;
        cout << " stack<int>firstHalf;" << endl;
        cout << " stack<int>secondHalf;" << endl;
        cout << "  for (int i = 0; i < queueSize; ++i){" << endl;
        cout << "     if (i < queueSize/2){" << endl;
        cout << "        secondHalf.push(q.front());" << endl;
        cout << "         q.pop();" << endl;
        cout << "     }" << endl;
        cout << "     else{" << endl;
        cout << "        firstHalf.push(q.front());" << endl;
        cout << "        q.pop();" << endl;
        cout << "     }" << endl;
        cout << "  }" << endl;

        cout << "  for (int i = 0; i < queueSize/2; ++i){" << endl;
        cout << "      q.push(firstHalf.top());" << endl;
        cout << "      q.push(secondHalf.top());" << endl;
        cout << "     firstHalf.pop();" << endl;
        cout << "     secondHalf.pop();" << endl;
        cout << "  }" << endl;

        cout << " while (!q.empty()){" << endl;
        cout << "     firstHalf.push(q.front());" << endl;
        cout << "     q.pop();" << endl;
        cout << " }" << endl;
        cout << " while (!firstHalf.empty()){" << endl;
        cout << "      q.push(firstHalf.top());" << endl;
        cout << "      firstHalf.pop();" << endl;
        cout << " }" << endl;

        cout << "  printQueue(q);" << endl;
        cout << "}" << endl;
    }

    void explainInterleave(){
        cout << "Given a queue of integers of even length, rearrange the elements by interleaving the first half of the queue with the second half of the queue.\n"
                "\n"
                "Only a stack can be used as an auxiliary space.";
    }

    void showExamplesInterleave(){
        cout << "Example 1: " << endl;
        cout << "Input: 1 2 3 4" << endl;
        cout << "Output: 1 3 2 4" << endl;
        cout << "Example 2: " << endl;
        cout << "Input: 11 12 13 14 15 16 17 18 19 20" << endl;
        cout << "Output: 11 16 12 17 13 18 14 19 15 20" << endl;
    }








    void chooseQueueAlgo(){
        cout << "Which algorithm that uses a queue would you like to see?" << endl;
        cout << "1 --> Reverse Queue" << endl;
        cout << "2 --> Modify Queue" << endl;
        cout << "3 --> Interleave Queue" << endl;
    }

    int selectQueueAlgo(){
        cout << "Type a number to select: ";
        cin >> choice;
        if (choice == 1){
            cout << endl << "You chose Reverse Queue" << endl;
        }
        else if (choice == 2){
            cout << endl << "You chose Modify Queue" << endl;
        }
        else if (choice == 3){
            cout << endl << "You chose Interleave Queue" << endl;
        }
        else{
            cout << "--> Please select the correct number mapping!" << endl;
            selectQueueAlgo();
        }
        return choice;
    }

};

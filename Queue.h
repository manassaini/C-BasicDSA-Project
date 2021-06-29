//
// Created by manas on 6/28/2021.
//

#ifndef C__BASICDSA_QUEUE_H
#define C__BASICDSA_QUEUE_H

#endif //C__BASICDSA_QUEUE_H

#include <queue>

class Queue{
public:

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

};

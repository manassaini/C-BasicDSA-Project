//
// Created by manas on 6/28/2021.
//

#ifndef C__BASICDSA_QUEUE_H
#define C__BASICDSA_QUEUE_H

#endif //C__BASICDSA_QUEUE_H

#include <queue>d

class Queue{
public:
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



};

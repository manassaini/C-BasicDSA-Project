//
// Created by manas on 6/28/2021.
//

#ifndef C__BASICDSA_STACK_H
#define C__BASICDSA_STACK_H


class Stack {

public:
    void stackIntro(){
        stack<int>nums;
        nums.push(1);
        nums.push(2);
        nums.push(3);
        nums.push(4);
        nums.push(5);

        cout << nums.top() << endl;  //should print 5
        nums.pop(); //remove the top element
        cout << nums.top() << endl; //now should print 4
    }

    bool balanced(string str){
        //if open, push to stack
        //if close, check if top is a match
        //if the top is a match, then pop the top
        stack<char>braces;
        for (char c: str){
            if (c == '{' || c == '[' || c == '('){
                braces.push(c);
            }
            else {
                if ((c == '}' && braces.top() == '{') || (c == ']' && braces.top() == '[') ||
                    c == ')' && braces.top() == '(') {
                    braces.pop();
                }
            }
        }
        return braces.empty();
    }



};


#endif //C__BASICDSA_STACK_H

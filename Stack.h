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

    int postfix(string str){
        //read left to right
        //if c is a number, push to stack
        //if c is an operator, peek 2 top elements
        //apply operation to these two elements
        //and push the result to the stack
        stack<int>exp;
        int temp; int firstOperand; int secondOperand;
        for (char c: str){
            if (c=='0') exp.push(0);
            else if (c=='1') exp.push(1);
            else if (c=='2') exp.push(2);
            else if (c=='3') exp.push(3);
            else if (c=='4') exp.push(4);
            else if (c=='5') exp.push(5);
            else if (c=='6') exp.push(6);
            else if (c=='7') exp.push(7);
            else if (c=='8') exp.push(8);
            else if (c=='9') exp.push(9);

            else {
                secondOperand = exp.top();
                exp.pop();
                firstOperand = exp.top();
                exp.pop();
                if (c=='x') {
                    temp = firstOperand * secondOperand;
                    exp.push(temp);
                }
                else if (c=='/') {
                    temp = firstOperand / secondOperand;
                    exp.push(temp);
                }
                else if (c=='+') {
                    temp = firstOperand + secondOperand;
                    exp.push(temp);
                }
                else if (c=='-') {
                    temp = firstOperand - secondOperand;
                    exp.push(temp);
                }
            }
        }
        return exp.top();
    }


};


#endif //C__BASICDSA_STACK_H

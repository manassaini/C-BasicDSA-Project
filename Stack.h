//
// Created by manas on 6/28/2021.
//

#ifndef C__BASICDSA_STACK_H
#define C__BASICDSA_STACK_H




class Stack {

public:
    bool balanced(string str){
        //if open, push to stack
        //if close, check if top is a match
        //if the top is a match, then pop the top
        stack<char>braces;
        for (char c: str){      //traverse through the string
            if (c == '{' || c == '[' || c == '('){      //if an open brace is found, push it to the stack
                braces.push(c);
            }
            else {
                //closing brace is found so make sure the top of the stack matches with the closing brace
                if ((c == '}' && braces.top() == '{') || (c == ']' && braces.top() == '[') ||
                    c == ')' && braces.top() == '(') {
                    braces.pop();   //and if it does, pop the open brace and continue
                }
            }
        }
        return braces.empty();      //if a match is found for every pair, the stack will be empty
    }

    void showBalancedCode(){
        cout << "bool balanced(string str){" << endl;
        cout << "    stack<char>braces;" << endl;
        cout << "    for (char c: str) {" << endl;
        cout << "        if (c == '{' || c == '[' || c == '('){" << endl;
        cout << "            braces.push(c);" << endl;
        cout << "        else {" << endl;
        cout << "           if ((c == '}' && braces.top() == '{') || (c == ']' && braces.top() == '[') ||" << endl;
        cout << "               c == ')' && braces.top() == '(') {" << endl;
        cout << "               braces.pop();" << endl;
        cout << "           }" << endl;
        cout << "        }" << endl;
        cout << "     }" << endl;
        cout << "     return braces.empty();" << endl;
        cout << "}";
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

    void showPostFixCode(){
        cout << "int postfix(string str){" << endl;
            //read left to right
            //if c is a number, push to stack
            //if c is an operator, peek 2 top elements
            //apply operation to these two elements
            //and push the result to the stack
        cout << "    stack<int>exp;" << endl;
        cout << "    int temp; int firstOperand; int secondOperand;" << endl;
        cout << "    for (char c: str){" << endl;
        cout << "        if (c=='0') exp.push(0);" << endl;
        cout << "        else if (c=='1') exp.push(1);" << endl;
        cout << "        else if (c=='2') exp.push(2);" << endl;
        cout << "        else if (c=='3') exp.push(3);" << endl;
        cout << "        else if (c=='4') exp.push(4);" << endl;
        cout << "        else if (c=='5') exp.push(5);" << endl;
        cout << "        else if (c=='6') exp.push(6);" << endl;
        cout << "        else if (c=='7') exp.push(7);" << endl;
        cout << "        else if (c=='8') exp.push(8);" << endl;
        cout << "        else if (c=='9') exp.push(9);" << endl;

        cout << "        else {" << endl;
        cout << "            secondOperand = exp.top();" << endl;
        cout << "            exp.pop();" << endl;
        cout << "            firstOperand = exp.top();" << endl;
        cout << "            exp.pop();" << endl;
        cout << "            if (c=='x') {" << endl;
        cout << "                temp = firstOperand * secondOperand;" << endl;
        cout << "                exp.push(temp);" << endl;
        cout << "            }" << endl;
        cout << "            else if (c=='/') {" << endl;
        cout << "                temp = firstOperand / secondOperand;" << endl;
        cout << "                exp.push(temp);" << endl;
        cout << "            }" << endl;
        cout << "            else if (c=='+') {" << endl;
        cout << "                temp = firstOperand + secondOperand;" << endl;
        cout << "                exp.push(temp);" << endl;
        cout << "            }" << endl;
        cout << "            else if (c=='-') {" << endl;
        cout << "                temp = firstOperand - secondOperand;" << endl;
        cout << "                exp.push(temp);" << endl;
        cout << "            }" << endl;
        cout << "        }" << endl;
        cout << "    }" << endl;
        cout << "    return exp.top();" << endl;
        cout << "}" << endl;
    }

    void reverseArray(int arr[], int size){
        stack<int>nums;
        for (int i = 0; i < size; ++i){
            nums.push(arr[i]);
        }
        int index = 0;
        while (!nums.empty()){
            arr[index] = nums.top();
            nums.pop();
            index++;
        }
        for (int i = 0; i < size; ++i){
            cout << arr[i] << " ";
        }
    }

    void greaterRight(int arr[], int size){
        //push first element in stack
        //push second element, see if it's less than stack.top()
        //if it is, push that element as well
        //if not, stack.pop(), and stack.push(), the greater number is now in stack
        stack<int>nums;
        nums.push(arr[0]);
        for (int i = 1; i < size; ++i){
            if (arr[i] < nums.top()){
                nums.push(arr[i]);
            }
            else if (arr[i] > nums.top()){
                nums.pop();
                if (nums.empty()) {
                    nums.push(arr[i]);
                    continue;
                }
                if (arr[i] > nums.top()){
                    nums.pop();
                }
                else {
                    nums.push(arr[i]);
                }
            }
        }
        while (!nums.empty()){
            cout << nums.top() << " ";
            nums.pop();
        }
    }


};


#endif //C__BASICDSA_STACK_H
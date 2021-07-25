//
// Created by manas on 7/5/2021.
//

#ifndef C__BASICDSA_PROGRAM_H
#define C__BASICDSA_PROGRAM_H


class Program {

public:
    int choice;

    void IntroMessage(){
        cout << "Welcome to my C++ Data Structures project!" << endl;
        cout << "This project showcases 5 data structures and some basic algorithms for each one." << endl;
        cout << "The 5 data structures I focused on were Stacks, Queues, Linked Lists, and Trees." << endl;
        cout << "Below explains the UI and how you can correctly run the program." << endl << endl;
        cout << "1. The program will first ask you which data structure you would like to work with." << endl;
        cout << "2. Then, you will be asked which specific algorithm you would like to see for that data structure." << endl;
        cout << "3. Since all the algorithms have their own names, the program will explain each one to you as well as give I/O examples.";
        cout << "4. You will then be asked which input you would like to run for that algorithm." << endl;
        cout << "5. The algorithm will run with the specific input, and you will see that it indeed does work correctly." << endl;
        cout << "6. You will then be asked if you would like to see the code for that algorithm to study its functionality." << endl << endl;
    }

    void chooseDS(){
        cout << "Let's begin!" << endl;
        cout << "Which DS would you like to work with? Please use the correct number mapping." << endl;
        cout << "1 --> Stack" << endl;
        cout << "2 --> Queue" << endl;
        cout << "3 --> Linked List" << endl;
        cout << "4 --> Tree" << endl;
    }

    int selectDS(){
        cout << "Type a number to select: ";
        cin >> choice;
        if (choice == 1){
            cout << endl << "You chose Stack" << endl;
        }
        else if (choice == 2){
            cout << endl << "You chose Queue" << endl;
        }
        else if (choice == 3){
            cout << endl << "You chose Linked List" << endl;
        }
        else if (choice == 4){
            cout << endl << "You chose Tree" << endl;
        }
        else{
            cout << "--> Please select the correct number mapping!" << endl;
            selectDS();
        }
        return choice;
    }

};


#endif //C__BASICDSA_PROGRAM_H

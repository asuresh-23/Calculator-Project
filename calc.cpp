#include <iostream>

// addition function
int add(int fnum, int snum){
    int total = fnum + snum;
    return total;
}

// subtraction function
int subtract(int fnum, int snum){
    int total = fnum - snum;
    return total;
}

// multiplication function
int multiply(int fnum, int snum){
    int total = fnum * snum;
    return total;
}

// division function
int divide(int fnum, int snum){
    int total = fnum / snum;
    return total;
}

bool invalid(char operation){
    if (operation != '+' && operation != '-' && operation != '*' && operation != '/'){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    using namespace std;

    int firstNum;
    int secondNum;
    char symbol;
    char answer;

    cout << "\t\t***************************************************************************************" << endl;
    cout << "\t\t**   #####                                                                           **" << endl;
    cout << "\t\t**  #     #     ##    #        ####   #    #  #          ##     ###   ####   #####   **" << endl;
    cout << "\t\t**  #          #  #   #       #    #  #    #  #         #  #     #   #    #  #    #  **" << endl;
    cout << "\t\t**  #         #    #  #       #       #    #  #        #    #    #   #    #  #    #  **" << endl;
    cout << "\t\t**  #         ######  #       #       #    #  #        ######    #   #    #  #####   **" << endl;
    cout << "\t\t**  #     #  #      # #       #    #  #    #  #       #      #   #   #    #  #   #   **" << endl;
    cout << "\t\t**   #####   #      #  ######  ####    ####   ######  #      #   #    ####   #    #  **" << endl;
    cout << "\t\t***************************************************************************************" << endl;



    cout << "Would you like to use the Calculator? y/n --> ";
    cin >> answer;



    while (answer == 'y'){
        cout << "Enter your first number: ";
        cin >> firstNum;

        cout << "Enter your second number: ";
        cin >> secondNum;

        cout << "Enter the operation: ";
        cin >> symbol;

        if (!invalid(symbol)){
            if (symbol == '+'){
                cout << add(firstNum, secondNum) << "\n";
            }
            else if (symbol == '-'){
                cout << subtract(firstNum, secondNum) << "\n";
            }
            else if (symbol == '*'){
                cout << multiply(firstNum, secondNum) << "\n";
            }
            else if (symbol == '/'){
                cout << divide(firstNum, secondNum) << "\n";
            }
        }

    

        if (invalid(symbol)){
            cout << "Invalid operation. Enter a valid operator: ";
            cin >> symbol;
            if (!invalid(symbol)){
                if (symbol == '+'){
                    cout << add(firstNum, secondNum) << "\n";
                }
                else if (symbol == '-'){
                    cout << subtract(firstNum, secondNum) << "\n";
                }
                else if (symbol == '*'){
                    cout << multiply(firstNum, secondNum) << "\n";
                }
                else if (symbol == '/'){
                    cout << divide(firstNum, secondNum) << "\n";
                }
            }
        }
        
        cout << "Would you like to keep using the Calculator? ";
        cin >> answer;
        if (answer != 'y'){
            cout << "Sounds good. Have a nice day!\n";
            return 0;
        }
    }
}
#include <iostream>

using namespace std;

int main()
{
    string CorrectPin="1234";
    string pin;
    double deposit;
    double withdraw;
    int choice;
    int initial =700;
    double newbalance;
    string UserName;
    string password;
    int accountNo;




            cout<< "Enter 1 to Deposit "<<endl;
            cout<< "Enter 2 to Withdraw "<<endl;
            cout<< "Enter 3 to check your balance "<<endl;
            cin>>choice;
                                switch(choice)
                                {
                                case 1:

                                do
                                {
                                cout << "Please enter 4 digit pin "<<endl;
                                cin >>pin;
                                if (pin!=CorrectPin)
                                {
                                cout <<"Access Denied!. Wrong pin please try again. "<<endl;
                                }
                                }
                                while(pin!=CorrectPin);
                                cout <<"Access Granted. "<<endl;
                                cout << "How much would you like to deposit"<<endl;
                                cin >> deposit;
                                newbalance = initial + deposit;
                                cout << "You have successfully deposited R"<<deposit<<endl;
                                cout <<"Your new balance is R"<< newbalance<<endl;
                        break;
                            case 2:
                                do
                                {
                                cout << "Please enter 4 digit pin "<<endl;
                                cin >>pin;
                                if (pin!=CorrectPin)
                                {
                                cout <<"Access Denied!. Wrong pin please try again. "<<endl;
                                }
                                }
                                while(pin!=CorrectPin);
                                cout <<"Access Granted. "<<endl;
                                cout << "How much would you like to withdraw "<<endl;
                                cin >>withdraw;
                                newbalance = initial - withdraw;
                                cout << "You have successfully withdrawn R"<<withdraw<<endl;
                                cout << "Your new balance is R"<< newbalance<<endl;
                    break;

                        case 3:

                                do
                                {
                                cout << "Please enter 4 digit pin "<<endl;
                                cin >>pin;
                                if (pin!=CorrectPin)
                                {
                                cout <<"Access Denied!. Wrong pin please try again. "<<endl;
                                }
                                }
                                while(pin!=CorrectPin);
                                cout <<"Access Granted. "<<endl;
                                newbalance = initial - withdraw + deposit;
                                cout << newbalance<<endl;
                break;

                                }


    return 0;
}


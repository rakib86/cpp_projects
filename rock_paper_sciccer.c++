#include <iostream>
using namespace std;

int main()
{
    // code

    srand(time(NULL));

    int computer = rand() % 3 + 1;

    int user = 0;

    cout << "=========================\n";
    cout << "Rock Paper Scissors!\n";
    cout << "=========================\n";

    cout << "1)Rock✊\n";
    cout << "2)Paper✋\n";
    cout << "3)Scissors✌️\n";
    cout << "shoot! ";

    cin >> user;

    if (user == 1)
    {
        if (computer == 1)
        {
            cout << "Tie\n";
        }
        else if (computer == 2)
        {
            cout << "Computer wins you dumb!!!\n";
        }
        else
        {
            cout << "You wins!!!!\n";
        }
    }
    else if (user == 2)
    {
        if (computer == 1)
        {
            if (computer == 2)
            {
                cout << "Tie\n";
            }
            else
            {
                cout << "Computer wins you dumb!!\n";
            }
        }else{
            cout<<"You Wins!!\n";
        }
    }else if ( user == 3 ){
        if ( computer == 1 ){
            cout<<"Computer Wins you Dumb!!\n";

        }else if ( computer == 2 ){
            cout<<"You wins!!\n";
        }else{
            cout<<"Tie\n";
        }
    }else{
        cout<<"No Selection!!\n";
    }
}
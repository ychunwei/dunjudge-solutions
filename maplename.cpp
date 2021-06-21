#include <iostream>
using namespace std;
int main()
{
    char command;
    string name;
    cin >> command >> name;
    if (command == 'A') {
        cout << 'o';
        for (int i = 0; i < name.size(); i++)
        {
            cout << '-';
        }
        cout << 'o';
        cout << "\n|" << name << "|\n";
        cout << 'o';
        for (int i = 0; i < name.size(); i++)
        {
            cout << '-';
        }
        cout << 'o';
    } else if (command == 'K')
    {
        cout << 'x';
        for (int i = 0; i < name.size(); i++)
        {
            cout << '-';
        }
        cout << 'x';
        cout << "\n|" << name << "|\n";
        cout << 'x';
        for (int i = 0; i < name.size(); i++)
        {
            cout << '-';
        }
        cout << 'x';
    } else if (command == 'H') {
        if (name.size() % 2 != 0)
        {
            for (int i = 0; i < (name.size() + 2 - 1) / 2; i++)
            {
                cout << "ox";
            }
            cout << "o\nx" << name << "x\n";
            for (int i = 0; i < (name.size() + 2 - 1) / 2; i++)
            {
                cout << "ox";
            }
            cout << 'o';
        } else if (name.size() % 2 == 0)
        {
            for (int i = 0; i < (name.size()+2) / 2; i++)
            {
                cout << "ox";
            }
            cout << "\nx" << name << "o\n";
            for (int i = 0; i < (name.size() + 2) / 2; i++)
            {
                cout << "ox";
            }
        }
    } else if (command == 'R') {
        if (name.size() % 2 != 0)
        {
            cout << 'o';
            for (int i = 1; i <= name.size(); i++)
            {
                if (i != (name.size() + 1)/2)
                    cout << '-';
                else 
                    cout << '+';
            }
            cout << "o\n|" << name << "|\n";
            cout << 'o';
            for (int i = 1; i <= name.size(); i++)
            {
                if (i != (name.size() + 1)/2)
                    cout << '-';
                else 
                    cout << '+';
            } cout << 'o';
        } else {
            cout << 'o';
            for (int i = 1; i <= name.size(); i++)
            {
                if (i != (name.size())/2)
                    cout << '-';
                else 
                    cout << '+';
            }
            cout << "o\n|" << name << "|\n";
            cout << 'o';
            for (int i = 1; i <= name.size(); i++)
            {
                if (i != (name.size())/2)
                    cout << '-';
                else 
                    cout << '+';
            } cout << 'o';
        }
    }

}

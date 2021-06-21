#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<string> commands;
    int s, n;
    cin >> s >> n;

    int dirty = 0, totalUni = s;

    for (int i = 0; i < n; ++i)
    {
        string command;
        cin >> command;
        commands.push_back(command);
    }

    for (int j = 0; j < commands.size(); ++j)
    {
        if (commands[j] == "USE")
        {
            dirty++;
            s--;

            if (dirty > totalUni)
            {
                cout << "DIRTY";
                break;
            }
        }
        else if (commands[j] == "WASH")
        {
            dirty = 0;
            s = totalUni;
        }
    }
    if (dirty <= totalUni)
    {
        cout << "CLEAN";
    }
}

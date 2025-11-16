#include <iostream>

#include <string>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        bool found = false;
        for (int j = 0; j < i; j++)
        {
            if (str[i] == str[j])
            {
                found = true;

                break;
            }
        }
        if (!found)
        {
            count++;
        }
    }

    // cout<<count<<endl;
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    string ch;
    int capital = 0;
    int small = 0;

    cin >> ch;

    for (int i = 0; i < ch.length(); i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
            capital++;
        else
            small++;
    }

    for (int i = 0; i < ch.length(); i++)
    {
        if (capital <= small)
        {
            if (ch[i] >= 'A' && ch[i] <= 'Z')
                ch[i] = ch[i] + 32;
        }
        else
        {
            if (ch[i] >= 'a' && ch[i] <= 'z')
                ch[i] = ch[i] - 32;
        }
    }

    cout << ch << endl;

    return 0;
}

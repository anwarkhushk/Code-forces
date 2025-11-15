#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int counter = 0;
    while (n != 0)
    {
        if (n >= 100)
        {
            n / 100 == 1;
            counter++;
            n -= 100;
            continue;
        }

        if (n >= 20)
        {
            n / 20 == 1;
            counter++;
            n -= 20;
            continue;
        }
        if (n >= 10)
        {
            n / 10 == 1;
            counter++;
            n -= 10;
            continue;
        }
        if (n >= 5)
        {
            n / 5 == 1;
            counter++;
            n -= 5;
            continue;
        }
        if (n >= 1)
        {
            n / 1 == 1;
            counter++;
            n -= 1;
            continue;
        }
    }
    cout << counter << endl;
    return 0;
}
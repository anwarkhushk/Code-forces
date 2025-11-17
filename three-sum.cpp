#include <iostream>
using namespace std;

int main()
{
    int n, target;
    cin >> n >> target;

    int p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    bool chk = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (p[i] + p[j] + p[k] == target)
                {
                    chk = true;
                    goto done;
                }
            }
        }
    }

done:
    if (chk)
        cout << "true";
    else
        cout << "false";

    return 0;
}

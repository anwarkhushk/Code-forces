#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    int target = -1;
    cin >> target;

    int first = -1, second = -1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (i == j) continue;  //don't match element with itself

            if ((arr[i] + arr[j]) == target)
            {
                first = i;
                second = j;
                goto done;         //stop as soon as correct pair found
            }
        }
    }

done:
    cout << first << " " << second << endl;

    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    int dist;
    int first, sec;
    for (int i = 0; i < n - 1; i++)
    {
        dist = p[i] - p[i + 1];
        if (dis < p[i])
        {
            first = i;
            sec=i+1;
        }
    }

    return 0;
}
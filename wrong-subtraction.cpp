#include <iostream>
using namespace std;
int main()
{
    int n, k, lastnu, temp;
    cin >> n >> k;
    temp = n;
    for (int i = 0; i < k; i++)
    {

        lastnu = n % 10;
        

        if (lastnu == 0)
        {
            n= n / 10;
            
        }
        else if (lastnu != 0)
        {
            n = n - 1;
        }
    }

    cout << n<<endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100];   

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxVal = a[0];
    int minVal = a[0];
    int maxIndex = 0;      
    int minIndex = 0;     

    for (int i = 1; i < n; i++) {
        if (a[i] > maxVal) {
            maxVal = a[i];
            maxIndex = i;
        }
    }

    minVal = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] <= minVal) {
            minVal = a[i];
            minIndex = i;  
        }
    }

    int moves = maxIndex + (n - 1 - minIndex);
    if (maxIndex > minIndex) {
        moves--;
    }

    cout << moves << endl;
    return 0;
}

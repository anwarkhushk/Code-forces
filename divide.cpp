#include <iostream>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        
        // If 'a' is already divisible by 'b'
        if (a % b == 0) {
            cout << 0 << endl;
        } else {
            cout << (b - (a % b)) << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}

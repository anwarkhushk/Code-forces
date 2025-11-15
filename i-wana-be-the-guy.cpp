#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int p;
    cin >> p;

    int X[p];
    for(int i = 0; i < p; i++){
        cin >> X[i];
    }

    int q;
    cin >> q;

    int Y[q];
    for(int i = 0; i < q; i++){
        cin >> Y[i];
    }

    // Checking from level 1 to n
    for(int level = 1; level <= n; level++){
        bool found = false;

        // Check in X
        for(int i = 0; i < p; i++){
            if(X[i] == level){
                found = true;
                break;
            }
        }

        // Check in Y (only if not found already)
        if(!found){
            for(int i = 0; i < q; i++){
                if(Y[i] == level){
                    found = true;
                    break;
                }
            }
        }

        // If not found in X or Y → cannot complete game
        if(!found){
            cout << "Oh, my keyboard!";
            return 0;
        }
    }

    // If all levels found
    cout << "I become the guy.";
    return 0;
}

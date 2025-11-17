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

    for(int level = 1; level <= n; level++){
        bool found = false;

        for(int i = 0; i < p; i++){
            if(X[i] == level){
                found = true;
                break;
            }
        }

        if(!found){
            for(int i = 0; i < q; i++){
                if(Y[i] == level){
                    found = true;
                    break;
                }
            }
        }

 
        if(!found){
            cout << "Oh, my keyboard!";
            return 0;
        }
    }


    cout << "I become the guy.";
    return 0;
}

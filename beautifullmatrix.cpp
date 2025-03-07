#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int matrix[5][5];
    
    // Read the 5x5 matrix
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }

    // Find the position of the '1' in the matrix
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] == 1) {
                // Calculate the number of moves required to bring '1' to the center (3, 3)
                int moves = abs(i - 2) + abs(j - 2);  // Convert to 0-based index
                cout << moves << endl;
                return 0;
            }
        }
    }

    return 0;
}

#include <iostream>
#include <set>

using namespace std;

// Function to check if all digits in a year are distinct
bool hasDistinctDigits(int year) {
    string strYear = to_string(year);
    set<char> digitSet(strYear.begin(), strYear.end());
    return digitSet.size() == strYear.size();
}

int main() {
    int y;
    cin >> y;

    while (true) {
        y++;  // Increment the year
        if (hasDistinctDigits(y)) {
            cout << y << endl;
            break;
        }
    }

    return 0;
}

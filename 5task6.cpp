/*#include <iostream>

using namespace std;

int main() {

    int s, e, pr;
    do {
        cout << "Enter the starting ASCII value (33–126): ";
        cin >> s;
        if (s < 33 || s > 126) {
            cout << "Invalid input. Starting value must be between 33 and 126." << endl;
        }
    } while (s < 33 || s > 126);
    do {
        cout << "Enter the ending ASCII value (33–126): ";
        cin >> e;
        if (e < 33 || e > 126 || e < s) {
            cout << "Invalid input. Ending value must be >= starting value and within range." << endl;
        }
    } while (e < 33 || e > 126 || e < s);
    do {
 cout << "Enter number of character codes per row: ";
        cin >> pr;
        if (pr <= 0) {
            cout << "Invalid input. Must be a positive integer." << endl;
        }

    } while (pr <= 0);

    cout << endl;
    int count = 0;
    for (int i = s; i <= e; i++) {
        cout << char(i) << " (" << i << ")\t";  
        count++;
        if (count % pr == 0) {
            cout << endl;
        }

    }
    cout << endl;
    return 0;
} */
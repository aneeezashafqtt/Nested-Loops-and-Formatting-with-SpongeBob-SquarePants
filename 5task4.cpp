/*#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    int h, w;
    char c;
    cout << "Are SpongeBob's pants a square or a rectangle? ";
    cin >> s;
    if (s == "square" || s == "Square") {
        cout << "Enter the size: ";
        cin >> h;
        w = h;
    }
    else if (s == "rectangle" || s == "Rectangle") {
        cout << "Enter the height: ";
        cin >> h;
        cout << "Enter the width: ";
        cin >> w;
    }
    else {
        cout << "Invalid shape type! Please enter 'square' or 'rectangle'." << endl;
        return 0;
    }
    cout << "Enter the outline character: ";
    cin >> c;
    cout << endl;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            if (i == 1 || i == h || j == 1 || j == w)

                cout << c;
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
} */
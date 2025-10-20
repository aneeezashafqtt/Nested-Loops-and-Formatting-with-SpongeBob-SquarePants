/*include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the dome center size: ";
    cin >> n;
    for (int a = 1; a <= n; a++) {
        for (int s = a; s < n; s++) {

            cout << " ";
        }
        cout << "*";
        for (int j = 1; j < a; j++) {
            cout << j;
        }
        for (int j = a - 2; j >= 1; j--) {
            cout << j;
        }
        if (a > 1) cout << "*"; 
        cout << endl;
    }
    for (int a = n - 1; a >= 1; a--) {

        for (int s = n; s > a; s--) {

            cout << " ";

        }
        cout << "*";
        for (int j = 1; j < a; j++) {

            cout << j;
        }
        for (int j = a - 2; j >= 1; j--) {

            cout << j;
        }
        if (a > 1) cout << "*"; 
        cout << endl;
    }
    return 0;

} */
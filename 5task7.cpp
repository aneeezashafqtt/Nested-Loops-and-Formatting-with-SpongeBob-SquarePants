#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    char b;

    int n;
    cout << "Enter border character: ";
    cin >> b;
    cout << "Enter number of items: ";
    cin >> n;
    string itemNames[50];
    int q[50];
    double p[50];
    double t[50];
    for (int i = 0; i < n; i++) {
        cout << "Enter item " << i + 1 << " name: ";
        cin.ignore();          
        getline(cin, itemNames[i]);
        cout << "Enter quantity: ";
        cin >> q[i];
        cout << "Enter price per item: ";
        cin >> p[i];
        t[i] = q[i] * p[i];
    }
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (itemNames[i].length() > max)
            max = itemNames[i].length();

    }
    int nw = max+ 2;
    int qw = 6; 
    int pw = 10; 
    int tw = 10;
    int receiptWidth = nw + qw + pw + tw + 4; 
    cout << setfill(b) << setw(receiptWidth) << b << endl;
    cout << setfill(' ') << b
        << setw((receiptWidth - 2 + 14) / 2) << "KRUSTY KRAB RECEIPT"
        << setw((receiptWidth - 2 - 14) / 2) << b << endl;
    cout << setfill(b) << setw(receiptWidth) << b<< endl;
    cout << setfill(' ') << fixed << setprecision(2);

    cout << left << setw(nw) << "Item"
        << setw(qw) << "Qty"
        << setw(pw) << "Price"
        << setw(tw) << "Total" << endl;
    cout << setfill('-') << setw(receiptWidth) << "-" << endl;
    cout << setfill(' ');
    double total = 0.0;
    for (int i = 0; i < n; i++) {
        cout << left << setw(nw) << itemNames[i]
            << setw(qw) << q[i]
            << setw(pw) << p[i]
            << setw(tw) << t[i] << endl;
        total += t[i];
    }
    cout << setfill('-') << setw(receiptWidth) << "-" << endl;
    cout << setfill(' ');
    cout << left << setw(nw + qw + pw - 2)
        << "Total Bill:"
        << total << endl;
    cout << "Thank you, come again!" << endl;
    cout << setfill(b) << setw(receiptWidth) << b << endl;
    return 0;
}
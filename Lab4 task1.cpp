#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(num >= 0) {
        cout << "Number entered is positive";
    } else {
        cout << "Number entered is negative";
    }
    return 0;
}

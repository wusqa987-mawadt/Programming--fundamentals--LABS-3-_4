#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int num1 = rand() % 900 + 100;
    int num2 = rand() % 900 + 100;
    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "------" << endl;
    cout << "Press Enter to see answer...";
    cin.get();
    cout << endl;
    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "------" << endl;
    cout << "  " << num1 + num2 << endl;
    return 0;
}

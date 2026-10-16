#include <iostream>
using namespace std;
int main() {
    int qty, salesReps;
    double unitsEach;
    cin >> qty >> salesReps;
    unitsEach = static_cast<double>(qty) / salesReps;
    cout << unitsEach;
    return 0;
}

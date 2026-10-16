#include <iostream>
using namespace std;
int main() {
    int num;
    int count = 0;
    cout << "Enter a number: ";
    cin >> num;
    if(num > 0) {
        int temp = num;
        while(temp != 0) {
            temp = temp / 10;
            count++;
        }
        cout << "Positive and digits: " << count;
    } else {
        cout << "Number is not positive";
    }
    return 0;
}

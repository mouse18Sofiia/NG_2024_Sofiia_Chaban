#include <iostream>

using namespace std;

int main()
{
    int salary = -1;
    cin >> salary;

    if (salary < 1000) {
        cout << "Work more!" << endl;
    }
     if (salary > 1000) {
        if (salary < 1000000) {
            cout << "Good job!" << endl;
        }
    }
    if (salary > 1000000) {
        cout << "You are a millionaire!" << endl;
    }

    cout << "...but you're great!" << endl;
    return 0;
}

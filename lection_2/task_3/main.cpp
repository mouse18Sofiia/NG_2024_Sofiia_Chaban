#include <iostream>

using namespace std;

int main()
{
    int height = -1;
    char elem = '*';
    char empty = ' ';
    int max_height = 0;
    int spaces;
    cout << "What size chandelier do you want?:" << endl;
    cin >> height;
    int *arr = new int[height];
    int index = 0;
    cout << "Enter numbers:" << endl;
    while (true) {
        cin >> arr[index];
        if (arr[index] == 0) break;
        index++;
    }

    for (int index = 1; index < height; index++) {
        if (max_height < arr[index]) {
            max_height = arr[index];
        }
    }

    for (int level = 0; level < (height - 1); level++) {
        spaces = (max_height / 2 - arr[level] / 2);
        for (int space = 0; space < spaces; space++) {
            cout << empty;
        }
        for (int built = 0; built < arr[level]; built++) {
            cout << elem;
        }
        cout << endl;
    }

    delete[] arr;
    return 0;
}

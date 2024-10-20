#include <iostream>
using namespace std;

int main() {
    const int SIZE = 15;
    int arr[SIZE];
    bool perevir[SIZE] = { false };
    cout << "Vvedit 15elem: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }
    cout << "Povtorki ";
    for (int i = 0; i < SIZE; i++) {
        if (perevir[i]) {
            continue;
        }
        int kilkist = 1;
        for (int j = i + 1; j < SIZE; j++) {
            if (arr[i] == arr[j]) {
                kilkist++;
                perevir[j] = true;
            }
        }
        if (kilkist > 1) {
            cout << arr[i] << " ";
        }
    }
}

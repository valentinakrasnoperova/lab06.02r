#include <iostream>
#include <iomanip>
#include <time.h>
#include "func.h"


using namespace std;

void Create_r(int* arr, const int size, const int Low, const int High, int i) {
    if (i == size) {
        return;
    }
    arr[i] = Low + rand() % (High - Low + 1);
    Create_r(arr, size, Low, High, i + 1);
}

void Print_r(int* arr, const int size, int i) {
    if (i == size) {
        cout << endl;
        return;
    }
    cout << setw(4) << arr[i];
    Print_r(arr, size, i + 1);
}



int main() {
    srand((unsigned) time(NULL));
    const int SIZE = 6;
    int arr[SIZE];

    int Low = -15;
    int High = 75;

    Create_r(arr, SIZE, Low, High, 0);
    Print_r(arr, SIZE, 0);

    Rep(arr, SIZE);
    Print_r(arr, SIZE, 0);

    return 0;
}
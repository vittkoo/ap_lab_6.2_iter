#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void Create(int* a, const int size, const int Low, const int High) {
    for (int i = 0; i < size; i++) {
        a[i] = Low + rand() % (High - Low + 1);
    }
}

void Print(int* a, const int size) {
    for (int i = 0; i < size; i++) {
        cout << "a[" << i << "] = " << a[i] << "    ";
    }
    cout << endl;
}

int Max(int* a, const int size) {
    int max = a[0];
    for (int i = 1; i < size; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int Min(int* a, const int size) {
    int min = a[0];
    for (int i = 1; i < size; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

int main() {
    srand((unsigned)time(NULL));

    const int n = 5;
    int a[n];

    int Low = -10;
    int High = 10;

    Create(a, n, Low, High);
    cout << "Start array: ";
    Print(a, n);

    int min = Min(a, n);
    int max = Max(a, n);

    cout << "min: " << min << endl;
    cout << "max: " << max << endl;

    return 0;
}

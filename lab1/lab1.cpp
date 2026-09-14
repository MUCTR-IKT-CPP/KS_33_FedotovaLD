#include <iostream>
#include <Windows.h>

using namespace std;

bool proverka(int num);


int main() {
    SetConsoleOutputCP(CP_UTF8);
    const int N = 10;
    const int COUNT_N = N - 1;
    int numbers[COUNT_N] = {};

    cout << "N = " << N << endl;

    for (int i = 0; i < COUNT_N; i++) {
        numbers[i] = i + 2;
    }

    int prost_num = 0;

    cout << "Вывод:" <<" ";

    for (int i = 0; i < COUNT_N; i++) {
        if (proverka(numbers[i])) {
            cout << numbers[i] << " ";
            prost_num++;
        }
    }

    cout << endl;
    cout << "Количество: " << prost_num << endl;

    return 0;
}

bool proverka(int num) {
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
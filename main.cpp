#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));

    int array1[5][10];
    int array2[5][5];

    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            array1[i][j] = rand() % 51; 
        }
    }

    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            array2[i][j] = array1[i][2 * j] + array1[i][2 * j + 1];
        }
    }

    
    cout << "Перший масив (5x10):" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }

   
    cout << "Другий масив (5x5):" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << array2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0)); 

    vector<vector<int>> array = { {3, 5, 6, 7},
                                 {12, 1, 1, 1},
                                 {0, 7, 12, 1} };

    int rows = array.size();
    int columns = array[0].size();


    cout << "—ума елемент≥в у кожному р€дку:" << endl;
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < columns; j++) {
            rowSum += array[i][j];
        }
        cout << rowSum << endl;
    }

    
    cout << "—ума елемент≥в у кожному стовпц≥:" << endl;
    for (int j = 0; j < columns; j++) {
        int columnSum = 0;
        for (int i = 0; i < rows; i++) {
            columnSum += array[i][j];
        }
        cout << columnSum << " ";
    }
    cout << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            totalSum += array[i][j];
        }
    }
    cout << "—ума елемент≥в по вс≥х р€дках ≥ стовпц€х: " << totalSum << endl;

    return 0;
}

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int col = 5;
const int row = 5;

int arr_sum(int array[][row]) {
    float Sum = 0;
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            Sum += array[i][j];
        }
    }
    return Sum;
}

float matrixAverage(int array[][row]) {
    float Sum = arr_sum(array);
    float average = Sum / (col * row);
    return average;
}

int min_el(int array[][row]) {
    int minElement = array[0][0];
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            if (array[i][j] < minElement) {
                minElement = array[i][j];
            }
        }
    }
    return minElement;
}

int Max_El(int array[][row]) {
    int maxElement = array[0][0];
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            if (array[i][j] > maxElement) {
                maxElement = array[i][j];
            }
        }
    }
    return maxElement;
}

int main()
{
    srand(time(0));
    int arr[col][row];

    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            arr[i][j] = rand() % 10;
            cout << arr[i][j] << "\t";
        }
        cout << endl << endl;
    }
    cout << endl << endl;

    int sum = arr_sum(arr);
    cout << "sum: " << sum << endl;

    float average = matrixAverage(arr);
    cout << "aver: " << average << endl;

    int minElement = min_el(arr);
    cout << "min: " << minElement << endl;

    int maxElement = Max_El(arr);
    cout << "max: " << maxElement << endl;

    return 0;
}

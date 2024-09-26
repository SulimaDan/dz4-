#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
    int rows, cols, number;

    cout << "Введіть кількість рядків і стовпців: ";
    cin >> rows >> cols;
    cout << "Введіть початкове число: ";
    cin >> number;

    int array[rows][cols];
    array[0][0] = number;


    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (i == 0 && j == 0) continue;
            array[i][j] = array[i][j - 1] * 2;
        }
    }


    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}







//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows, cols, number;
//
//    cout << "Введіть кількість рядків і стовпців: ";
//    cin >> rows >> cols;
//    cout << "Введіть початкове число: ";
//    cin >> number;
//
//    int array[rows][cols];
//
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            array[i][j] = number++;
//        }
//    }
//
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cout << array[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}












//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows, cols, shift;
//    char dir;
//
//    cout << "Введіть кількість рядків і стовпців: ";
//    cin >> rows >> cols;
//    cout << "Введіть кількість зрушень і напрямок (l, r, u, d): ";
//    cin >> shift >> dir;
//
//    int array[100][100];
//
//    cout << "Початковий масив:" << endl;
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            array[i][j] = rand() % 10;
//            cout << array[i][j] << " ";
//        }
//        cout << endl;
//    }
//    while (shift--) {
//        if (dir == 'r') {
//            for (int i = 0; i < rows; ++i) {
//                int temp = array[i][cols - 1];
//                for (int j = cols - 1; j > 0; --j) {
//                    array[i][j] = array[i][j - 1];
//                }
//                array[i][0] = temp;
//            }
//        }
//    }
//
//    cout << "Масив після зрушення:" << endl;
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cout << array[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}


#include <iostream>
using namespace std;
int main() {
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, r2, c2;
    int i, j, k, choice;
    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter elements of first matrix:\n";
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            cin >> a[i][j];
        }
    }
    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;
    cout << "Enter elements of second matrix:\n";
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            cin >> b[i][j];
        }
    }
    cout << "\nChoose Operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {

        case 1:
            if(r1 == r2 && c1 == c2) {

                for(i = 0; i < r1; i++) {
                    for(j = 0; j < c1; j++) {
                        result[i][j] = a[i][j] + b[i][j];
                    }
                }

                cout << "\nResultant Matrix after Addition:\n";
                for(i = 0; i < r1; i++) {
                    for(j = 0; j < c1; j++) {
                        cout << result[i][j] << " ";
                    }
                    cout << endl;
                }

            } else {
                cout << "Addition not possible! Matrices must have same size.\n";
            }
            break;

        case 2:
            if(r1 == r2 && c1 == c2) {
                for(i = 0; i < r1; i++) {
                    for(j = 0; j < c1; j++) {
                        result[i][j] = a[i][j] - b[i][j];
                    }
                }
                cout << "\nResultant Matrix after Subtraction:\n";
                for(i = 0; i < r1; i++) {
                    for(j = 0; j < c1; j++) {
                        cout << result[i][j] << " ";
                    }
                    cout << endl;
                }

            } else {
                cout << "Subtraction not possible! Matrices must have same size.\n";
            }
            break;
        case 3:
            if(c1 == r2) {

                for(i = 0; i < r1; i++) {
                    for(j = 0; j < c2; j++) {

                        result[i][j] = 0;

                        for(k = 0; k < c1; k++) {
                            result[i][j] += a[i][k] * b[k][j];
                        }
                    }
                }
                cout << "\nResultant Matrix after Multiplication:\n";
                for(i = 0; i < r1; i++) {
                    for(j = 0; j < c2; j++) {
                        cout << result[i][j] << " ";
                    }
                    cout << endl;
                }

            } else {
                cout << "Multiplication not possible! Columns of first matrix must equal rows of second matrix.\n";
            }
            break;
        default:
            cout << "Invalid choice!\n";
    }
    return 0;
}

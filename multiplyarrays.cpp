#include<iostream>
using namespace std;

int main() {
    int a[2][3][2] = {
        {{1, 2}, {3, 4}, {5, 6}},
        {{7, 8}, {9, 10}, {11, 12}}
    };

    int b[2][3][2] = {
        {{1, 2}, {3, 4}, {5, 6}},
        {{7, 8}, {9, 10}, {11, 12}}
    };

    int result[2][3][2];

    
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 2; ++k) {
                result[i][j][k] = a[i][j][k] * b[i][j][k];
            }
        }
    }

 
    for (int i = 0; i < 2; ++i) {
        cout << "Layer " << i + 1 << ":\n";
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 2; ++k) {
                cout << result[i][j][k] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}
			
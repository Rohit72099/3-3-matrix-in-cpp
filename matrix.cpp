#include<iostream>
using namespace std;

int main() {
    int matrix[3][3];

    // Fill the matrix
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            matrix[i][j] = i*3 + j + 1;
        }
    }

    // Print the matrix
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


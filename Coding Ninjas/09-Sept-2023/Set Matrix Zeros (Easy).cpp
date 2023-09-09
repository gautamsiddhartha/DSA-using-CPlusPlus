#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	int rows = matrix.size();
    if (rows == 0) return; // Handle the case of an empty matrix

    int cols = matrix[0].size();
    vector<bool> zeroRows(rows, false);
    vector<bool> zeroCols(cols, false);

    // Mark the rows and columns that contain 0s
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                zeroRows[i] = true;
                zeroCols[j] = true;
            }
        }
    }

    // Set elements to 0 based on zeroRows and zeroCols
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (zeroRows[i] || zeroCols[j]) {
                matrix[i][j] = 0;
            }
        }
    }
}
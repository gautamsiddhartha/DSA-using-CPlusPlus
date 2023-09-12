class Solution {
public:
  void rotate(vector<vector<int>> &matrix) {
    // Important two-step process:
    // Step 1 - Transpose
    // Step 2 - Reverse

    int n = matrix.size();

    // Transpose
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        swap(matrix[i][j], matrix[j][i]);
      }
    }

    // Reverse each row
    for (int i = 0; i < n; i++) {
      reverse(matrix[i].begin(), matrix[i].end());
    }
  }
};

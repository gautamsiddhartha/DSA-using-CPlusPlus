class Solution {
public:
  bool searchMatrix(vector<vector<int>> &matrix, int target) {
    /* METHOD -1 LINEAR SEARCH
    int m = matrix.size();
    int n = matrix[0].size();
    for(int i = 0; i<m ; i++){
        for(int j = 0 ; j< n ; j++){
                if(matrix[i][j] == target){
                    return true;
                    break;
                }
                //return false;
        }

    }
    return false;
}
*/
    // METHOD II BINARY SEARCH
    int row = matrix.size();
    if (row == 0)
      return false; // Handle an empty matrix
    int col = matrix[0].size();

    int start = 0;
    int end = row * col - 1;

    while (start <= end) {
      int mid = start + (end - start) / 2;
      int element = matrix[mid / col][mid % col];

      if (element == target) {
        return true;
      } else if (element < target) {
        start = mid + 1;
      } else {
        end = mid - 1;
      }
    }
    return false;
  }
};
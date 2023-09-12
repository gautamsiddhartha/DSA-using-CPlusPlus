class Solution {
public:
  vector<int> rowAndMaximumOnes(vector<vector<int>> &mat) {
    vector<int> ans;
    int n = mat.size();
    // Will store the max number of 1s in a row
    int oneCount = INT_MIN;
    // Will store max row number with max 1s
    int rowNo = -1;

    for (int i = 0; i < n; i++) {
      // Initialize count with 0 for each row
      int count = 0;
      for (int j = 0; j < mat[i].size(); j++) {
        if (mat[i][j] == 1) {
          count++;
        }
      }
      // After row completion, compare count with oneCount
      if (count > oneCount) {
        oneCount = count;
        rowNo = i;
      }
    }

    ans.push_back(rowNo);
    ans.push_back(oneCount);
    return ans;
  }
};

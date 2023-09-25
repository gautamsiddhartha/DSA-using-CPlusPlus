class Solution {
public:
  int findMinDifference(vector<string> &timePoints) {
    // Convert time points to minutes since midnight
    vector<int> minutes;
    for (const string &time : timePoints) {
      int hour = stoi(time.substr(0, 2));
      int minute = stoi(time.substr(3, 2));
      minutes.push_back(hour * 60 + minute);
    }

    // Sort the time points in ascending order
    sort(minutes.begin(), minutes.end());

    int minDifference = INT_MAX;
    int n = minutes.size();

    // Calculate the time difference between adjacent time points
    for (int i = 1; i < n; ++i) {
      int diff = minutes[i] - minutes[i - 1];
      minDifference = min(minDifference, diff);
    }

    // Consider the circular difference (between the first and last time points)
    int circularDiff = (minutes[0] + 24 * 60) - minutes[n - 1];
    minDifference = min(minDifference, circularDiff);

    return minDifference;
  }
};

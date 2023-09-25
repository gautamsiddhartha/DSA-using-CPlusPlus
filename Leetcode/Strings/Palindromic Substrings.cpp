#include <string>

class Solution {
public:
  int expand(const string &s, int i, int j) {
    int count = 0;
    while (i >= 0 && j < s.length() && s[i] == s[j]) {
      count++;
      i--;
      j++;
    }
    return count;
  }

  int countSubstrings(const string &s) {
    int totalCount = 0;

    for (int center = 0; center < s.length(); center++) {
      // Odd-length palindromes with center at 'center'
      int oddPalindromes = expand(s, center, center);

      // Even-length palindromes with center at 'center' and 'center + 1'
      int evenPalindromes = expand(s, center, center + 1);

      totalCount += oddPalindromes + evenPalindromes;
    }

    return totalCount;
  }
};

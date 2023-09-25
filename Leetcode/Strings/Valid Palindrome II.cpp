#include <string>

class Solution {
public:
  bool checkPalindrome(const std::string &s, int i, int j) {
    while (i < j) {
      if (s[i] != s[j]) {
        return false;
      }
      i++;
      j--;
    }
    return true;
  }

  bool validPalindrome(const std::string &s) {
    int i = 0;
    int j = s.length() - 1;

    while (i < j) {
      if (s[i] == s[j]) {
        i++;
        j--;
      } else {
        // s[i] != s[j]
        // 1 removal allowed
        // check palindrome for remaining string after removal
        // ith char
        bool ans1 = checkPalindrome(s, i + 1, j);
        // jth char -> remove
        bool ans2 = checkPalindrome(s, i, j - 1);

        return ans1 || ans2;
      }
    }

    return true; // If we reach this point, the string is a valid palindrome.
  }
};

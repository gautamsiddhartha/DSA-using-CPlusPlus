class Solution {
public:
  void sortColors(vector<int> &nums) {
    // counting method
    // TC: O(N)
    // SC: O(1)
    /*
    int zeroes, ones, twoes;
    zeroes = ones = twoes = 0;
    for(int i = 0 ; i< nums.size(); i++){
        if(nums[i] == 0){
            zeroes++;
        }
        else if(nums[i] == 1){
            ones++;
        }
        else{
            twoes++;
        }
    }
    //spread
    int i = 0;
    while(zeroes--){
        nums[i] == 0;
        i++;
    }
    while(ones--){
        nums[i] == 1;
        i++;
    }
    while(twoes--){
        nums[i] == 2;
        i++;
    }
}
*/
    // METHOD 2 - FOR IN PLACE SOLUTIION - 3 POINTERS APPROACH
    int l = 0, m = 0, h = nums.size() - 1;
    while (m <= h) {
      if (nums[m] == 0) {
        swap(nums[l], nums[m]);
        l++, m++;
      } else if (nums[m] == 1) {
        m++;
      } else {
        swap(nums[m], nums[h]);
        h--;
      }
    }
  }
};
// TC: O(LOG(N)) OF STL SORT FN
// SC: O(N) OF STL SORT FN
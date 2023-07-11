class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool entered = false;
       for (int i = nums.size() - 2; i >= 0; i--) {
           if (nums[i] < nums[i + 1]) {
               entered = true;
               for (int j = nums.size() - 1; j >= 0; j--) {
                   if (nums[j] > nums[i]) {
                       int m = nums[j];
                       nums[j] = nums[i];
                       nums[i] = m;
                       reverse(nums.begin() + i + 1, nums.end());
                       break;
                   }
               }
               break;
           }
       }

       if (!entered) {
           reverse(nums.begin(), nums.end());
       }
    }
};

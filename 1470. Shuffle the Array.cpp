class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i = 0, j = n;
        vector<int> nums2;
        for (int t = 0; t < 2*n; t++) {
            if (t % 2 == 0) {
                nums2.push_back(nums[i]);
                i++;
            } else {
                nums2.push_back(nums[j]);
                j++;
            } 
        }
        return nums2;
    }
};

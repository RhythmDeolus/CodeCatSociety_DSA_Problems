class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for (int i = 1; i <= nums.size(); i++) {
            int t = nums[i-1];
            if (t == i) continue;
            if (t <= 0 || t > nums.size()) continue;
            int j = i;
            while(t != j && t <= nums.size() && t > 0) {
                int c = nums[t-1];
                nums[t-1] = t;
                j = t;
                t = c;
            }
        }

        for (int i = 1; i <= nums.size(); i++) {
            if (nums[i-1] != i) return i;
        }
        return nums.size()+1;
    }
};

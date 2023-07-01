class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        bool m[201];
        memset(m, true, sizeof(m));
        int i = 0;
        for (int x: nums) {
            if (m[x + 100]) {
                m[x+ 100] = false;
                nums[i] = x;
                i++;
            }
        }
        return i;
    }
};

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int t = m + n - 1;
        while (i >= 0 || j >= 0) {
            int a = (i >= 0)? nums1[i]: INT_MIN;
            int b = (j >= 0)? nums2[j]: INT_MIN;
            if (a > b) {
                nums1[t--] = a;
                i--;
            } else {
                nums1[t--] = b;
                j--;
            }
        }
    }
};

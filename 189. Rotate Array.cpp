class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        if (!k) return;
        int arr[k];
        for(int i = nums.size() - k, j = 0; i < nums.size(); i++, j++) {
            arr[j] = nums[i];
        }
        for(int i = nums.size() - k - 1; i >= 0; i--) {
            nums[i + k] = nums[i];
        }
        for (int i = 0; i < k; i++) {
            nums[i] = arr[i];
        }
    }
};

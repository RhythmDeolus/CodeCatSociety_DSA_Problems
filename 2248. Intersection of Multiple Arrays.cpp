class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int arr[1001];
        memset(arr, 0, sizeof(arr));
        for (int i = 0; i < nums.size(); i++) {
            for (int x: nums[i]) {
                arr[x]++;
            }
        }

        vector<int> v;
        for (int i = 1; i <= 1000; i++) {
            if (arr[i] == nums.size()) v.push_back(i);
        }
        return v;
    }
};

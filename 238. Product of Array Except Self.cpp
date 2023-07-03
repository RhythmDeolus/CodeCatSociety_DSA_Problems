class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> forward;
        int pro = 1;
        for (int i = 0; i < nums.size(); i++) {
            forward.push_back(pro);
            pro *= nums[i];
        }
        pro = 1;
        vector<int> backward;
        for (int i = nums.size() - 1; i >= 0; i--) {
            backward.push_back(pro);
            pro *= nums[i];
        }
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            result.push_back(forward[i] * backward[nums.size() - 1 - i]);
        }
        return result;

    }
};

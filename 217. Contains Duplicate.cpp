class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool> m;
        for (int x: nums) {
            if(m.find(x) != m.end()) return true;
            m[x] = false;
        }
        return false;
    }
};

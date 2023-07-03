class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m1, m2;
        vector<int> t1, t2;
        for(int x: nums1) {
            if (m1.find(x) == m1.end()) {
                m1[x] = 1;
            } 
        }
        for (int x: nums2) {
            if (m2.find(x) == m2.end()) {
                m2[x] = 1;
            }
        }

        for (int x: nums1) {
            if (m2.find(x) == m2.end() && m1[x] == 1) {
                t1.push_back(x);
                m1[x] = 2;
            }
        }
        for (int x: nums2) {
            if (m1.find(x) == m1.end() && m2[x] == 1) {
                t2.push_back(x);
                m2[x] = 2;
            }
        }
        vector<vector<int>> result;
        result.push_back(t1);
        result.push_back(t2);
        return result;
    }
};

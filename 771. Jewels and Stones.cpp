class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<int> s;
        s.insert(jewels.begin(), jewels.end());

        int count = 0;
        for (auto c: stones) {
            if (s.find(c) != s.end()) {
                count++;
            }
        }
        return count;
    }
};

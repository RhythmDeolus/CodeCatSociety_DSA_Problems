class Solution {
public:
    int trap(vector<int>& height) {

        int dir = 1;
        int i = 1;
        int j = height.size() - 2;
        int left = i -1;
        int right = j + 1;

        int val = 0;
        int delta = 0;
        
        for (;left < right; (dir == 1)? i++: j--) {

            if (i > right || j < left) {
                i = left + 1;
                j = right - 1;
                delta = 0;
                dir *= -1;
            }

            if (dir == 1) {
                if (height[left] <= height[i]) {
                    val += delta;
                    delta = 0;
                    val += (i - left - 1) * (height[left]);
                    left = i;
                } else {
                    delta -= height[i];
                }
            } else {
                if (height[right] <= height[j]) {
                    val += delta;
                    delta = 0;
                    val += (right - j - 1) * (height[right]);
                    right = j;
                } else {
                    delta -= height[j];
                }
            }
            
            
        }
        return val;
    }
};

class Solution {
public:
    template <typename T> void swap(vector<T> &arr, int i, int j) {
        T temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    void quicksort(vector<string>& names, vector<int>& heights, int i, int j) {
        if (i >= j) return;
        int p = partition(names, heights, i, j);
        quicksort(names, heights, i, p -1);
        quicksort(names, heights, p + 1, j);        
    }
    int partition(vector<string>& names, vector<int>& heights,int  i,int j) {
        int k = i;
        for (int l = i; l < j; l++) {
            if (heights[l] > heights[j]) {
                swap<int>(heights, l, k);
                swap<string>(names, l, k);
                k++;
            }
        }
        swap<int>(heights, k, j);
        swap<string>(names, k, j);
        return k;
    }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        quicksort(names, heights, 0, names.size() - 1);
        return names;
    }
};

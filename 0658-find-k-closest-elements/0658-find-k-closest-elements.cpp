class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int low = 0, high = arr.size() - k;
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            // Compare the element just outside the window on the right with the element at the left
            if (x - arr[mid] > arr[mid + k] - x) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        
        return vector<int>(arr.begin() + low, arr.begin() + low + k);
    }
};
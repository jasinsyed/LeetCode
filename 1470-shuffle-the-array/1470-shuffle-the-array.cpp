class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result(2 * n);
        int j = 0;
        for(int i = 0; i < n; i++){
            result[j] = nums[i];
            result[j + 1] = nums[i + n];
            j+=2;
        }
        return result;
        
    }
};
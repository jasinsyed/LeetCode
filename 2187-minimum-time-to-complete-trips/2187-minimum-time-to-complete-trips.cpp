class Solution {
public:
    bool check(long long mid, const vector<int>& time, int totalTrips) {
        long long tripsCompleted = 0;
        for (int t : time) {
            tripsCompleted += mid / t;
            if (tripsCompleted >= totalTrips) {
                return true; // Early exit prevents overflow
            }
        }
        return tripsCompleted >= totalTrips;
    }

    long long minimumTime(vector<int>& time, int totalTrips) {
        long long lo = 1;
        
        // Find minimum bus time to set a tight upper bound
        int min_val = *min_element(time.begin(), time.end());
        long long hi = 1LL * min_val * totalTrips;
        
        long long ans = hi;

        while (lo <= hi) {
            long long mid = lo + (hi - lo) / 2;
            
            if (check(mid, time, totalTrips)) {
                ans = mid;
                hi = mid - 1; // Try to find a smaller valid time
            } else {
                lo = mid + 1; // Needs more time
            }
        }

        return ans;
    }
};
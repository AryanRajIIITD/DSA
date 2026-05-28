class Solution {
public:
    long long totald(vector<int>& bloomDay, int d, int k) {
        long long bouquets = 0;
        int consecutive_flowers = 0;
        int n = bloomDay.size();
        
        for (int i = 0; i < n; i++) {
            
            if (bloomDay[i] <= d) {
                consecutive_flowers++;
                
                if (consecutive_flowers == k) {
                    bouquets++;
                    consecutive_flowers = 0;
                }
            } else {
                consecutive_flowers = 0;
            }
        }
        return bouquets;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        if ((long long)m * k > bloomDay.size()) {
            return -1;
        }

        int maxi = *max_element(bloomDay.begin(), bloomDay.end());
        int l = 1, h = maxi, a = -1;

        while (l <= h) {
            int mid = l + (h - l) / 2;
            long long days = totald(bloomDay, mid, k);

            if (days >= m) {
                a = mid;
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return a;
    }
};

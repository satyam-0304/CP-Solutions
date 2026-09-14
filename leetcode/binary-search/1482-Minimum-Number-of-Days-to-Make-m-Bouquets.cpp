class Solution {
public:
    int cntpairs(vector<int>& bloomDay, int k, int n){
        int bouq = 0;
        int flowers = 0;

        for(int b : bloomDay){
            if(b <= n){
                flowers++;
                if(flowers == k){
                    bouq++;
                    flowers = 0;
                }
            }
            else {
                flowers = 0;
            }
        }
        return bouq;
        
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long n = bloomDay.size();

        if((long long)m*k > n) return -1;

        long long low = *min_element(bloomDay.begin(), bloomDay.end());
        long long high = *max_element(bloomDay.begin(), bloomDay.end());
        long long ans = 0;
        
        while(low <= high){
            int mid = low + (high - low)/2;

            int cnt = cntpairs(bloomDay, k, mid);
            if(cnt >= m){
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }

        }
        return ans ;




    }
};
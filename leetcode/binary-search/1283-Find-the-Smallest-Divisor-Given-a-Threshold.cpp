class Solution {
public:
    long long result(int n, vector<int>& nums){
        long long ans = 0;
        for(int i = 0; i < nums.size(); i++){
            ans += ceil(nums[i]*1.0/n);
        }
        return ans;
    }
    int smallestDivisor(vector<int>& nums, int x) {
        int n = nums.size();

        if(result(1, nums)<=x){
            return 1;
        }
        auto it = max_element(nums.begin(), nums.end());
        long long low = 1, high = *it;
        long long ans = 0, fans = 0;

        if(x == n) return high;

        while(low <= high){
            long long mid = low + (high - low) / 2;
            ans = result(mid, nums);
            if(ans <= x){
                fans = mid;
                high = mid - 1;
                
            } 
            else {
                low = mid + 1;
            }
        }
        return fans;
                 
    }
};
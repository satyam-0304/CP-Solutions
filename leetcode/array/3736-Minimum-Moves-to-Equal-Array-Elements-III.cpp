class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(), nums.end());
        int diff = 0;
        int maxx = nums[n-1];
        for(int i : nums){
            diff += (maxx - i);
        }
        return diff;
    }
};
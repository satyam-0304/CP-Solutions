class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        long long sum = 0;
        for(int i : nums) sum += i;

        vector<int> diff(nums.size());

        for(int i= 0;  i < nums.size(); i++){
            string s = to_string(nums[i]);
            sort(s.rbegin(), s.rend());
            int num = stoi(s);
            diff[i] = num-nums[i];
        }

        sort(diff.rbegin(), diff.rend());
        for(int i = 0; i < k; i++ ){
            sum += diff[i];
        }
        return sum;
    }
};
class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int d = 0; int cnt = 0;
        for(int i = 0 ; i < nums.size(); i++){
            if( i != nums[i] && cnt == 0){
                cnt = 1;
                d = nums[i];
            }
            else if( i != nums[i] ){
                d &= nums[i];
            }
        }
        return d;
    }
};
class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        vector<int> vec;
        int valid = 0;

        for(int i =0; i < n; i++){
            int target = nums[i];
            int cnt = count(nums.begin(), nums.end(), target);
            auto itt = find(vec.begin(), vec.end(), target);

            if(cnt == 3 && itt == vec.end()){
                auto it = find(nums.begin(), nums.end(), target);
                int index = distance(nums.begin(), it);

                auto sec_it = find(it+1, nums.end(), target);
                int index_2 = distance(nums.begin(), sec_it);
                int index_3 = 2*index_2 - index;
                if(index_3 < n && nums[index_3] == target){
                    valid ++;
                }
            }
            vec.push_back(nums[i]);

        }
        return valid;
        
    }
};
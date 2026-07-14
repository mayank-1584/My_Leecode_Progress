class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 1 && k % 2 != 0){
            return -1;
        }
        if(k > n){
            int ans = -1;
            for(int x : nums){
                ans= max(ans,x);
            }
        return ans;
        }
        int maxval = -1;
        for(int i = 0 ; i < k-1 ; i++){
            maxval = max(maxval,nums[i]);
        }
        if(k < n){
            maxval = max(maxval,nums[k]);
        }
        return maxval;
    }
};
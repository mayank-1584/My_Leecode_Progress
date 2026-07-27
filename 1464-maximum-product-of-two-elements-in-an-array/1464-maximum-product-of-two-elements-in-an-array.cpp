class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        int first = nums[n-1] -1;
        int secound = nums[n-2] -1;
        return first * secound;
    }
};
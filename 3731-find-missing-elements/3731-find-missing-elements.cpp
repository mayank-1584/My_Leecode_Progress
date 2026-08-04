class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        set <int> s;
        int maxi = *max_element(nums.begin() , nums.end());
        int mini = *min_element(nums.begin() , nums.end());

        for(int i = 0 ; i <nums.size() ; i++){
            s.insert(nums[i]);
        }

        vector<int> ans;
        for(int i = mini ;i <= maxi ; i++){
            if(s.find(i) == s.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
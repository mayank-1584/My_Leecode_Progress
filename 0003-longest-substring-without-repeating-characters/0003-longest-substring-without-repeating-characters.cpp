class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int count = 0;
        int maxcount = 0;
        unordered_set <char> set;
        int st = 0;
        int s2 = 0;
        while (s2<n){
            if(set.find(s[s2]) == set.end()){
                set.insert(s[s2]);
                count ++;
                s2++;
                maxcount = max(maxcount , count);
                
            }else{
                set.erase(s[st]);
                st++;
                count--;
            }
            
        }
        return maxcount;
    }
};
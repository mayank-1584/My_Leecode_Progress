class Solution {
public:
    string smallestPalindrome(string s) {
        string half = "";
        string ans = "";
        int n = s.length();
        if (s.length() % 2 == 0) {
            for (int i = 0; i < s.length() / 2; i++) {
                half += s[i];
            }
            sort(half.begin(), half.end());
            ans += half;
            reverse(half.begin(), half.end());
            ans += half;
        }else{
            for(int i = 0 ; i < (n/2)+1 ; i++){
                half += s[i];
            }
            int m = half.size();
            char mid = half[m-1];
            half.pop_back();
            sort(half.begin(), half.end());
            ans += half;
            reverse(half.begin(), half.end());
            ans =ans+mid+half;
        }
        return ans;
    }
};
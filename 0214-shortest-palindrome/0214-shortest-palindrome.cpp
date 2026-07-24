class Solution {
public:
    string shortestPalindrome(string s) {
        if (s.empty()) return s;

        string rev = s;
        reverse(rev.begin(),rev.end());
        rev = s + "#" + rev;
        
        int n = rev.length();
        int i = 1;
        int len = 0;
        vector<int>lps(n,0);
        
        while(i < n){
            if(rev[i] == rev[len]){
                len++;
                lps[i] = len;
                i++;
            }else{
                if(len == 0){
                    i++;
                }else{
                    len = lps[len-1];
                }
            }
        }

        int index = lps[n-1];
        string extra = s.substr(index);
        reverse(extra.begin(),extra.end());

        return (extra + s);
    }
};
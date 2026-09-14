class Solution {
public:
    bool isValid(string s) {
        stack<char> yo;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '{' || s[i] == '(' || s[i] == '[') {
                yo.push(s[i]);
            } else {
                if (yo.empty()) return false; 
                if ((s[i] == ']' && yo.top() != '[') ||
                    (s[i] == '}' && yo.top() != '{') ||
                    (s[i] == ')' && yo.top() != '(')) {

                    return false;
                }
                yo.pop();
            }
        }
         return yo.empty();
    }
};
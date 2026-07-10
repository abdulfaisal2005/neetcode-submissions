class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;
        for(char &c : s) {
            c = tolower(c);
        }
        for(int i=0;i<s.length();i++) {
           if(!isalnum(s[left])) {
            left ++;
           } else if(!isalnum(s[right])) {
            right--;
           } else if(isalnum(s[left]) && isalnum(s[right])) {
            if(s[left] == s[right]) {
                left ++;
                right --;
            } else {
                return false;
            }
           }
        }
        return true;
    }
};

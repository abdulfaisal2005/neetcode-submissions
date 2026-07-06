class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> s1;
        unordered_map<char,int> s2;
       if(s.length()==t.length()) {
         for(int i=0;i<s.length();i++) {
            s1[s[i]]++;
            s2[t[i]]++;
        }

         for(int i=0;i<s.length();i++) {
            if(!(s1[s[i]] == s2[s[i]])) {
                return false;
            }
    }
return true;
       } else {
        return false;
       }
    }
};

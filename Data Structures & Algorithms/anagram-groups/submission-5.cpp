class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int index;
        vector<vector<string>> result;
        map<vector<int>,vector<string>> myMap;
        for(auto elem : strs) {
            vector<int> count(26,0);
            for(char c:elem) {
                index = c - 'a';
                if(count[index] == 0) {
                    count[index] = 1;
                } else {
                    count[index]++;
                }
            }
        myMap[count].push_back(elem);
    }
        for (const auto &kv : myMap) {
            result.push_back(kv.second);
        }
        return result;
    }
};

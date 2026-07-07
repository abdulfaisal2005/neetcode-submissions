class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> myset (nums.begin(),nums.end());
        if(nums.size() > myset.size()) {
            return true;
        } else if(nums.size() == myset.size()) {
            return false;
        }
    }
};
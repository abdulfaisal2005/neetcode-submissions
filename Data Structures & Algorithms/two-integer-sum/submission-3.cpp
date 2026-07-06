class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> freq;
        vector<int> result;
        int differ;
        for(int i=0;i<nums.size();i++) {
            differ = target - nums[i];
            if(freq.find(differ) != freq.end()) {
                result.push_back(freq[differ]);
                result.push_back(i);
            } else {
                freq[nums[i]]=i;
            } 
        }
        return result;
    }
};



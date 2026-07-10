class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        int sum;
        vector<int> result;
        for(int i = 0;i<numbers.size();i++) {
            sum = numbers[left] + numbers[right];
            if(sum < target) {
                left ++;
            } else if(sum > target) {
                right --;
            } else {
                result.push_back(left+1);
                result.push_back(right+1);
                break;
            }
        }
        return result;
    }
};

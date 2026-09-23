class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>v;
        int plus=0;
        for(int i=0;i<nums.size();i++){
             plus +=nums[i];
            v.push_back(plus);
        }return v;
    }
};
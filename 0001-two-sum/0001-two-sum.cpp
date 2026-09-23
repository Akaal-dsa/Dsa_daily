class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
        int get=target-nums[i];
    if(mp.find(get)!=mp.end()){
        return {mp[get],i};
    }mp[nums[i]]=i;
    }return{};}
};
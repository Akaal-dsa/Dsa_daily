class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        int maxcount=0;
        int answer=0;
        for(auto x:mp){
            if(x.second>maxcount){
                maxcount=x.second;
                answer=x.first;
            }

        }
        

        return answer;
    }
};
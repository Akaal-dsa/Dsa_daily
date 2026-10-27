
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>seen;
        int left=0;
        int count=0;
        for(int right=0;right<s.size();right++){
            while(seen.find(s[right])!=seen.end()){
                seen.erase(s[left]);
                left++;
            }seen.insert(s[right]);
            count=max(count,right-left+1);
        }return count;
    }
};

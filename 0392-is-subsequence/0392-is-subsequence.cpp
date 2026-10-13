class Solution {
public:
    bool isSubsequence(string s, string t) {
        int  k=0;
        int l=0;
        for(int i=0;i<t.size();i++){
            if(s[k]==t[l]){
               k++;
               l++;


            }
            else{
                l++;
            }
        }
        if(k==s.length()){
            return true;
        }
    return false;}
};
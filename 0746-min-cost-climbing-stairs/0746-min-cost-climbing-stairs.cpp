
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
       int a=cost[0];
       int b=cost[1];
       for(int i=2;i<cost.size();i++){
        int curr =cost[i]+min(a,b);
        a=b;
        b=curr;
       }
    return min(a,b);}
};

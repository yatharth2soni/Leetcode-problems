class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int mincost=cost[0];

        for(int i=1;i<cost.size();i++){
            mincost=min(mincost,cost[i]);
            cost[i]=mincost;
        }
        return cost;
    }
};
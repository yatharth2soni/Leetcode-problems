class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();

        int count=0;

        for(int i=0;i<n;i++){
            int ele1=intervals[i][0],ele2=intervals[i][1];
            for(int j=0;j<n;j++){
                if(i==j){
                    continue;
                }
                int k=intervals[j][0],l=intervals[j][1];
                if(k<=ele1 && l>=ele2){
                    count++;
                    break;
                }
            }
        }
        return n-count;   
    }
};
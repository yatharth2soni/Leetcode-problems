class Solution {
public:
    bool canfinish(vector<int> &piles,int maxspeed,int h){
        int hour=0;
        for(auto it:piles){
            hour+=it/maxspeed;
            if(it%maxspeed!=0){
                hour++;
            }
            if(hour>h){
                return false;
            }
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1,e,mid,maxi=0,speed=0;

        for(int i=0;i<piles.size();i++){
            maxi=max(maxi,piles[i]);
        }
        e=maxi;
        while(s<=e){
            mid=s+(e-s)/2;

            if(canfinish(piles,mid,h)==true){
                speed=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return speed;
    }
};
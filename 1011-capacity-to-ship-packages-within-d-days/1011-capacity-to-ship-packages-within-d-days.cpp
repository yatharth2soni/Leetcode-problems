class Solution {
public:
    bool canship(vector<int> &weights,int maxcapacity,int ships){
        int ship=1,capacity=0;

        for(auto it:weights){
            capacity+=it;
            if(capacity>maxcapacity){
                capacity=it;
                ship++;
            }
            if(ship>ships){
                return false;
            }
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int s,e=0,mid,maxi=0,res;

        for(auto it:weights){
            maxi=max(it,maxi);
            e+=it;
        }

        s=maxi;
        while(s<=e){
            mid=s+(e-s)/2;

            if(canship(weights,mid,days)==true){
                res=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return res;
    }
};
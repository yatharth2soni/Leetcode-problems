class Solution {
public:
    int mySqrt(int x) {
        long long l=1,r=x,mid;

        while(l<=r){
            mid=floor(l+(r-l)/2);

            if(mid*mid==x){
                return (int)mid;
            }

            else if(mid*mid>x){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return int(r);
    }
};
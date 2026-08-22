class Solution {
public:
    bool checkDivisibility(int n) {
        long long digitsum=0,sum=0,m=n,product=1;
        
        while(m!=0){
            product*=m%10;
            sum+=m%10;
            m/=10;
        }
        
        sum+=product;
        if(n%sum==0){
            return true;
        }

        return false;
    }
};
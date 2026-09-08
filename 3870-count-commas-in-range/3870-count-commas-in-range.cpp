class Solution {
public:
    int countCommas(int n) {
        int sum=0;
        if(n>=1 && n<=999){
            return 0;
        }
        else{
            if(n==1000){
                return 1;
            }
            int num=n-1000+1;
            return num;
        }
        return 0;
    }
};
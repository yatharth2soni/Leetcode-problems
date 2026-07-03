class Solution {
public:
    bool isPowerOfFour(int n) {
        int i=-1;
        int count=0;

        if(n<0){
            return false;
        }
        while(n!=0){
            i++;
            if(n&1){
                count++;
            }
            n>>=1;
        }

        if(i%2==0 && count==1){
            return true;
        }
        return false;
    }
};
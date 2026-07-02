class Solution {
public:
    int getSum(int a, int b) {
        int sum=0,carry=0;

        if(b==0){
            return a;
        }

        while(b!=0){
            carry=a&b;
            sum=a^b;
            a=sum;
            b=carry<<1;
        }
        return sum;
    }
};
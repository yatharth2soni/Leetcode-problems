class Solution {
public:
    int smallestNumber(int n, int t) {
        int number;
        for(int i=n;i<=100;i++){
            int k=i;
            int product=1;
            while(k!=0){
                product*=k%10;
                k/=10;
            }
            number=i;
            if(product%t==0){
                return number;
            }
        }
        return -1;
    }
};
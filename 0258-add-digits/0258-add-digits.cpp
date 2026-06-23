class Solution {
public:
    int sumup(int a,int sum){
        
        while(a>0){
            sum=sum+a%10;
            a/=10;
        }

        return sum;
    }
    int addDigits(int num) {
        int k=num;

        if(k>=0 && k<=9){
            return k;
        }
        
        int sum_digit=sumup(k,0);

        while(sumup(sum_digit,0)>=10){
            sum_digit=sumup(sum_digit,0);
        }
        sum_digit=sumup(sum_digit,0);
        return sum_digit;
    }
};
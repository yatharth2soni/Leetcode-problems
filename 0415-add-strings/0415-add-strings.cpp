class Solution {
public:
    string addStrings(string num1, string num2) {
        vector<int>v;

        int n1=num1.length(),n2=num2.length();
        int carry=0;
        
        if(n2>n1){
            int i=n2-1;
            int j=n1-1;
            while(i>=0 && j>=0){
                int a=num1[j]-'0';
                int b=num2[i]-'0';

                int sum=a+b+carry;
                carry=sum/10;
                v.push_back(sum%10);

                i--;
                j--;
            }
            
            while(i>=0){
                int k=num2[i]-'0';
                int sum=k+carry;

                k=sum%10;

                v.push_back(k);
                carry=sum/10;
                i--;
            }
            if(carry>0){
                v.push_back(carry);
            }
        }

        else{
            int i=n2-1;
            int j=n1-1;
            while(j>=0 && i>=0){
                int a=num1[j]-'0';
                int b=num2[i]-'0';

                int sum=a+b+carry;
                carry=sum/10;
                v.push_back(sum%10);

                i--;
                j--;
            }
            
            while(j>=0){
                int k=num1[j]-'0';
                int sum=k+carry;

                k=sum%10;

                v.push_back(k);
                carry=sum/10;
                j--;
            }
            if(carry>0){
                v.push_back(carry);
            }
        }
        reverse(v.begin(),v.end());

        string res="";
        for(int d:v){
            res.push_back(d+'0');
        }
        return res;
    }
};
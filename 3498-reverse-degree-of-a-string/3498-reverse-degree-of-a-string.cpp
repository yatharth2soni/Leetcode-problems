class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.length();i++){
            int k=abs(s[i]-'z')+1;
            sum=sum+k*(i+1);
        }
        return sum;
    }
};
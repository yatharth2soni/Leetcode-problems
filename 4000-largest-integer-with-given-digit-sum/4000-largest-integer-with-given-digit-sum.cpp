class Solution {
public:
    int largestInteger(int n, int s) {
        if(s>9*n){
            return -1;
        }
        if(s==0){
            return 0;
        }
        if(s>=1 && s<=9 && n==1){
            return s;
        }
        string t="";
        for(int i=0;i<n;i++){
            if(s>=9){
                t+="9";
                s-=9;
            }
            else{
                t+=s+'0';
                s-=s;
            }
        }
        int k=std::stoi(t);
        return k;
    }
};
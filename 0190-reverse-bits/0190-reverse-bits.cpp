class Solution {
public:
    int reverseBits(int n) {
        int i=0;
        vector<int>v;
        while(n!=0){
            if(n&1){
                v.push_back(1);
            }
            else{
                v.push_back(0);
            }
            n>>=1;
        }
        
        int k=31-v.size();
        for(int i=k;i<31;i++){
            v.push_back(0);
        }
        int num=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==1){
                num+=pow(2,31-i);
            }
        }
        return num;
    }
};
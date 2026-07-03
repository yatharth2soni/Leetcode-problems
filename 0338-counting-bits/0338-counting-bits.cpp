class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v;

        for(int i=0;i<=n;i++){
            int k=i;
            int count=0;
            while(k!=0){
                if(k&1){
                    count++;
                }
                k>>=1;
            }
            v.push_back(count);
        }
        return v;
    }
};
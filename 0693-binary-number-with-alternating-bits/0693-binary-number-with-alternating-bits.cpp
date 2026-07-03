class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int>v;
        vector<int>j;
        int i=-1;
        int count=0;

        if(n==1||n==2){
            return true;
        }

        while(n!=0){
            i++;
            if(n&1){
                v.push_back(i);
                count++;
            }
            else{
                j.push_back(i);
            }
            n>>=1;
        }

        if(v.size()<=1){
            return false;
        }

        else{
            for(int i=0;i<v.size()-1;i++){
                if(v[i+1]!=v[i]+2){
                    return false;
                }
            }

            for(int i=0;i<j.size()-1;i++){
                if(j[i+1]!=j[i]+2){
                    return false;
                }
            }
        }
        return true;
    }
};
class Solution {
public:
    long long sumAndMultiply(int n) {
        vector<int>v;
        
        while(n!=0){
            int k=n%10;
            n/=10;

            if(k!=0){
                v.push_back(k);
            }
        }
        reverse(v.begin(),v.end());
        long long sum=0;
        for(int i=0;i<v.size();i++){
            sum+=v[i];
        }

        long long num=0;
        int l=v.size()-1;
        int i=0;
        while(i<v.size()){
            num+=v[i]*pow(10,l);
            l--;
            i++;
        }
        return num*sum;
    }
};
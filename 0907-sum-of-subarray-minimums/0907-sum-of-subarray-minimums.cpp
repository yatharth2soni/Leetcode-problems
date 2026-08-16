class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        const int MOD=1e9+7;
        int n=arr.size();
        vector<int>left,right;

        stack<pair<int,int>>l,r;

        for(int i=0;i<n;i++){
            if(l.size()==0){
                left.push_back(-1);
            }
            else if(l.size()>0 && l.top().first<arr[i]){
                left.push_back(l.top().second);
            }
            else if(l.size()>0 && l.top().first>=arr[i]){
                while(l.size()>0 && l.top().first>=arr[i]){
                    l.pop();
                }
                if(l.size()==0){
                    left.push_back(-1);
                }
                else{
                    left.push_back(l.top().second);
                }
            }
            l.push({arr[i],i});
        }

        for(int i=n-1;i>=0;i--){
            if(r.size()==0){
                right.push_back(n);
            }
            else if(r.size()>0 && r.top().first<=arr[i]){
                right.push_back(r.top().second);
            }
            else if(r.size()>0 && r.top().first>arr[i]){
                while(r.size()>0 && r.top().first>arr[i]){
                    r.pop();
                }
                if(r.size()==0){
                    right.push_back(n);
                }
                else{
                    right.push_back(r.top().second);
                }
            }
            r.push({arr[i],i});
        }

        long long sum=0;
        reverse(right.begin(),right.end());
        for(int i=0;i<n;i++){
            long long ls=i-left[i];
            long long rs=right[i]-i;

            long long subarray=(ls*rs)%MOD;
            long long totalsum=0;
            totalsum+=(subarray*arr[i])%MOD;

            sum=(sum+totalsum)%MOD;
        }
        return sum;
    }
};
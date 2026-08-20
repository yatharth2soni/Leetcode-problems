class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        vector<pair<char,int>>v;

        for(int i=0;i<letters.size();i++){
            int k=int(letters[i]);
            v.push_back({letters[i],k});
        }

        int t=int(target);
        if(t>=v[v.size()-1].second){
            return letters[0];
        }
        int start=0,end=v.size()-1,mid,res=INT_MAX;

        while(start<=end){
            mid=start+(end-start)/2;
            if(v[mid].second>t){
                res=min(res,mid);
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return v[res].first;
    }
};
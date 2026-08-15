class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>v,a;
        stack<pair<int,int>>st;

        for(int i=temperatures.size()-1;i>=0;i--){
            if(st.size()==0){
                v.push_back(-1);
            }
            else if(st.size()>0 && st.top().first>temperatures[i]){
                v.push_back(st.top().second);
            }
            else if(st.size()>0 && st.top().first<=temperatures[i]){
                while(st.size()>0 && st.top().first<=temperatures[i]){
                    st.pop();
                }
                if(st.size()==0){
                    v.push_back(-1);
                }
                else{
                    v.push_back(st.top().second);
                }
            }
            st.push({temperatures[i],i});
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<temperatures.size();i++){
            if(v[i]==-1){
                a.push_back(0);
            }
            else{
                a.push_back(v[i]-i);
            }
        }
        return a;
    }
};

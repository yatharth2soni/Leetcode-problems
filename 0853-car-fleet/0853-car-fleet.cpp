class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>>v;

        for(int i=0;i<position.size();i++){
            v.push_back({position[i],speed[i]});
        }

        sort(v.begin(),v.end(),greater<pair<int,int>>());
        reverse(v.begin(),v.end());
        double current_time;
        int fleet;

        stack<pair<int,double>>st;
        for(int i=0;i<v.size();i++){
            st.push({v[i].first,v[i].second});
        }

        while(st.size()!=0){
            if(st.size()==v.size()){
                current_time=(target-st.top().first)/st.top().second;
                fleet=1;
                st.pop();
            }
            else{
                double newtime=(target-st.top().first)/st.top().second;
                if(newtime>current_time){
                    current_time=newtime;
                    fleet++;
                }
                st.pop();
            }
        }
        return fleet;
    }
};
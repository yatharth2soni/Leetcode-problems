class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int>left,right,w;
        stack<pair<int,int>>st;

        for(int i=0;i<heights.size();i++){
            if(st.size()==0){
                left.push_back(-1);
            }
            else if(st.size()>0 && st.top().first<heights[i]){
                left.push_back(st.top().second);
            }
            else if(st.size()>0 && st.top().first>=heights[i]){
                while(st.size()>0 && st.top().first>=heights[i]){
                    st.pop();
                }
                if(st.size()==0){
                    left.push_back(-1);
                }
                else{
                    left.push_back(st.top().second);
                }
            }
            st.push({heights[i],i});
        }

        while(!st.empty()){
            st.pop();
        }

        for(int i=heights.size()-1;i>=0;i--){
            if(st.size()==0){
                right.push_back(heights.size());
            }
            else if(st.size()>0 && st.top().first<heights[i]){
                right.push_back(st.top().second);
            }
            else if(st.size()>0 && st.top().first>=heights[i]){
                while(st.size()>0 && st.top().first>=heights[i]){
                    st.pop();
                }
                if(st.size()==0){
                    right.push_back(heights.size());
                }
                else{
                    right.push_back(st.top().second);
                }
            }
            st.push({heights[i],i});
        }
        reverse(right.begin(),right.end());

        for(int i=0;i<heights.size();i++){
            w.push_back(right[i]-left[i]-1);
        }

        int area=0;
        for(int i=0;i<heights.size();i++){
            area=max(w[i]*heights[i],area);
        }
        return area;
    }
};
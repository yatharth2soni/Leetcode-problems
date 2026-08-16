class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>v;
        stack<int>st;

        for(int i=0;i<asteroids.size();i++){
            if(st.size()==0){
                st.push(asteroids[i]);
            }
            else{
                if(st.top()<0 && asteroids[i]<0){
                    st.push(asteroids[i]);
                }
                else if(st.top()>=0 && asteroids[i]>=0){
                    st.push(asteroids[i]);
                }
                else if(asteroids[i]>0 && st.top()<0){
                    st.push(asteroids[i]);
                }
                else{
                    int k=abs(asteroids[i]);
                    while(st.size()>0 && st.top()>0 && st.top()<k){
                        st.pop();
                    }
                    if(st.size()==0||st.top()<0){
                        st.push(asteroids[i]);
                    }
                    else if(st.top()==k){
                        st.pop();
                    }
                }
            }
        }

        while(st.size()>0){
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
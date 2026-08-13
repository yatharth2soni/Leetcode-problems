class Solution {
public:
    int MAH(vector<int>&v){
        vector<int>left,right,width;
        stack<pair<int,int>>st;

        int k=v.size();
        for(int i=0;i<v.size();i++){
            if(st.size()==0){
                left.push_back(-1);
            }
            else if(st.size()>0 && st.top().first<v[i]){
                left.push_back(st.top().second);
            }
            else if(st.size()>0 && st.top().first>=v[i]){
                while(st.size()>0 && st.top().first>=v[i]){
                    st.pop();
                }
                
                if(st.size()==0){
                    left.push_back(-1);
                }
                else{
                    left.push_back(st.top().second);
                }
            }
            st.push({v[i],i});
        }

        while(st.size()!=0){
            st.pop();
        }

        for(int i=k-1;i>=0;i--){
            if(st.size()==0){
                right.push_back(k);
            }
            else if(st.size()>0 && st.top().first<v[i]){
                right.push_back(st.top().second);
            }
            else if(st.size()>0 && st.top().first>=v[i]){
                while(st.size()>0 && st.top().first>=v[i]){
                    st.pop();
                }

                if(st.size()==0){
                    right.push_back(k);
                }
                else{
                    right.push_back(st.top().second);
                }
            }
            st.push({v[i],i});
        }

        reverse(right.begin(),right.end());
        for(int i=0;i<k;i++){
            width.push_back(right[i]-left[i]-1);
        }
        int area=0;
        for(int i=0;i<k;i++){
            area=max(area,width[i]*v[i]);
        }
        return area;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        vector<vector<int>>a(r,vector<int>(c));
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                a[i][j]=matrix[i][j]-'0';
            }
        }

        vector<int>v;
        for(int i=0;i<c;i++){
            v.push_back(a[0][i]);
        }
        
        int maxarea=MAH(v);

        for(int i=1;i<r;i++){
            for(int j=0;j<c;j++){
                if(a[i][j]==0){
                    v[j]=0;
                }
                else{
                    v[j]+=a[i][j];
                }
            }
            maxarea=max(maxarea,MAH(v));
        }
        return maxarea;
    }
};
class Solution {
public:
    string removeDuplicates(string s) {
        string ss="";
        stack<char>st;

        for(int i=0;i<s.length();i++){
            if(st.size()==0){
                st.push(s[i]);
            }
            else{
                if(st.top()==s[i]){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
        }
        while(st.size()>0){
            ss+=st.top();
            st.pop();
        }
        reverse(ss.begin(),ss.end());
        return ss;
    }
};
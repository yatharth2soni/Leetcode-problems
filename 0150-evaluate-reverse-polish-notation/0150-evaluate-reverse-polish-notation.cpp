class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i=0;i<tokens.size();i++){
            string t=tokens[i];
            if(t!="/" && t!="+" && t!="-" && t!="*"){
                st.push(stoi(t));
            }
            else{
                if(t=="+"){
                    int a=st.top();
                    st.pop();
                    int b=st.top();
                    st.pop();
                    st.push(a+b);
                }
                if(t=="-"){
                    int a=st.top();
                    st.pop();
                    int b=st.top();
                    st.pop();
                    st.push(b-a);
                }
                if(t=="*"){
                    int a=st.top();
                    st.pop();
                    int b=st.top();
                    st.pop();
                    st.push(a*b);
                }
                if(t=="/"){
                    int a=st.top();
                    st.pop();
                    int b=st.top();
                    st.pop();
                    st.push(b/a);
                }
            }
        }
        return st.top();
    }
};
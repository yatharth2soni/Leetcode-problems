class Solution {
public:
    int calculate(string s) {
        stack<long long>st;
        long long sign=1,number=0,ans=0;

        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])){
                number=number*10+(s[i]-'0');
            }
            else if(s[i]=='+'){
                ans+=number*sign;
                number=0;
                sign=1;
            }
            else if(s[i]=='-'){
                ans+=number*sign;
                number=0;
                sign=-1;
            }
            else if(s[i]=='('){
                st.push(ans);
                st.push(sign);
                ans=0;
                number=0;
                sign=1;
            }
            else if(s[i]==')'){
                ans+=number*sign;

                int ss=st.top();
                st.pop();
                int prev=st.top();
                st.pop();

                ans*=ss;
                ans+=prev;
                number=0;
            }
        }
        return ans+number*sign;
    }
};
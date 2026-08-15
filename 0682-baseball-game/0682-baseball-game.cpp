class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>s;
        int score=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                s.pop();
            }
            else if(operations[i]=="D"){
                int t=s.top()*2;
                s.push(t);
            }
            else if(operations[i]=="+"){
                int k=s.top();
                s.pop();
                int l=s.top();
                l=l+k;
                s.push(k);
                s.push(l);
            }
            else{
                s.push(stoi(operations[i]));
            }
        }
        while(!s.empty()){
            score+=s.top();
            s.pop();
        }
        return score;
    }
};
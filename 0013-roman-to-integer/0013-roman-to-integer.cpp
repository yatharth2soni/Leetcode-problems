class Solution {
public:
    int romanToInt(string s) {
       vector<pair<char,int>>v;
       for(int i=0;i<s.length();i++){
        if(s[i]=='I'){
            v.push_back({s[i],1});
        }
        else if(s[i]=='V'){
             v.push_back({s[i],5});
        }
        else if(s[i]=='X'){
             v.push_back({s[i],10});
        }
        else if(s[i]=='L'){
             v.push_back({s[i],50});
        }
        else if(s[i]=='C'){
             v.push_back({s[i],100});
        }
        else if(s[i]=='D'){
             v.push_back({s[i],500});
        }
        else if(s[i]=='M'){
             v.push_back({s[i],1000});
        }
       }
        int number=0;
        int n=v.size();
       for(int i=0;i<v.size()-1;i++){
        if(v[i].second<v[i+1].second){
            number+=v[i].second*(-1);
        }
        if(v[i].second>=v[i+1].second){
            number+=v[i].second;
        }
       }
       number+=v[n-1].second;
       return number;
    }
};
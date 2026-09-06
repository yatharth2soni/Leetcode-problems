class Solution {
public:
    bool isCircularSentence(string sentence) {

        if(sentence[0]!=sentence[sentence.length()-1]){
            return false;
        }

        char ch;
        vector<char>v;
        vector<char>a;

        int spaces=0;
        for(int i=0;i<sentence.length();i++){
            if(sentence[i]==' '){
                ch=sentence[i-1];  
                v.push_back(ch);
                spaces++;
            }
        }

        if(spaces==0){
            if(sentence[0]!=sentence[sentence.length()-1]){
                return false;
            }
            else{
                return true;
            }
        }
        for(int i=0;i<sentence.length();i++){
            if(sentence[i]==' '){
                ch=sentence[i+1];
                a.push_back(ch);
            }
        }

        for(int i=0;i<v.size();i++){
            if(v[i]!=a[i]){
                return false;
            }
        }

        return true;
    }
};
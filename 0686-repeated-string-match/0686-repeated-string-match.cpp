class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        // int count=1;
        // set<char>st1;
        // set<char>st2;

        // for(int i=0;i<a.length();i++){
        //     st1.insert(a[i]);
        // }

        // for(int i=0;i<b.length();i++){
        //     st2.insert(b[i]);
        // }

        // if(st1.size()!=st2.size()){
        //     return -1;
        // }

        // else if(st1.size()==st2.size()){
        //     bool flag=false;
        //     auto it1=st1.begin();
        //     auto it2=st2.begin();

        //     while(it1!=st1.end() && it2!=st2.end()){
        //         char c=*it1;
        //         char j=*it2;
        //         if(c!=j){
        //             flag=true;
        //             break;
        //         }
        //         it1++;
        //         it2++;
        //     }
            
        //     if(flag){
        //         return -1;
        //     }
        //     else{
        //         while(!(a.find(b)!=std::string::npos)){
        //             a+=a;
        //             count++;
        //         }
        //         return count;
        //     }
        // }
        
        int count=0;
        string e="";
        while(e.length()<b.length()){
            e+=a;
            count++;
        }

        if(e.find(b)!=std::string::npos){
            return count;
        }
        e+=a;
        count++;
        if(e.find(b)!=std::string::npos){
            return count;
        }
        return -1;
    }
};
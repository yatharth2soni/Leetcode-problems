class Solution {
public:
    int minBitFlips(int start, int goal) {
        vector<int>a_bits(32,0);
        vector<int>b_bits(32,0);
        int flips=0;
        int k=0;
        int j=0;
        while(start!=0){
            if(start&1){
                a_bits.push_back(1);
            }
            else{
                a_bits.push_back(0);
            }
            start>>=1;
            k++;
        }
        
        while(goal!=0){
            if(goal&1){
                b_bits.push_back(1);
            }
            else{
                b_bits.push_back(0);
            }
            goal>>=1;
            j++;
        }
        
        for(int i=k;i<32;i++){
            a_bits.push_back(0);
        }
        
        for(int i=j;i<32;i++){
            b_bits.push_back(0);
        }
        
        reverse(b_bits.begin(),b_bits.end());
        reverse(a_bits.begin(),a_bits.end());
        
        for(int i=0;i<32;i++){
            if(a_bits[i]!=b_bits[i]){
                flips++;
            }
        }
        return flips;
    }
};
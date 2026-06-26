class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int k=pow(n,2);

        int count=maxWeight/w;

        if(k>count){
            return count;
        }
        else{
            return k;
        }
    }
};
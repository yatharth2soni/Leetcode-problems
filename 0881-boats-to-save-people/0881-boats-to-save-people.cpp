class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int count=0;

        sort(people.begin(),people.end());

        int l=0,r=people.size()-1;
        while(l<r){
            long long sum=people[l]+people[r];
            if(sum<=limit){
                count++;
                l++;
                r--;
            }
            else{
                r--;
            }
        }
        int k=people.size()-count*2;
        return count+k;
    }
};
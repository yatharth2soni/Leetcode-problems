class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>st(nums.begin(),nums.end());

        int number=k;
        while(st.count(number)){
            number+=k;
        }
        return number;
    }
};
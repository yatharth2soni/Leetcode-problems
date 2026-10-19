class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int,greater<int>>st;

        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }

        int cnt=3;
        for(int k:st){
            if(cnt==1){
                return k;
            }
            cnt--;
        }
        return *st.begin();
    }
};
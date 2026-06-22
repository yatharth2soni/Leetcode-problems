class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>st;

        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        nums.clear();
        for(int it:st){
            nums.push_back(it);
        }
        return nums.size();
    }
};
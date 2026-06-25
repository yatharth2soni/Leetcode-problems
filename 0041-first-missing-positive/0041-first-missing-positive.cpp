class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int count2=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count2++;
            }
        }

        if(count2==0){
            return 1;
        }


        int count=0;
        set<int>st;

        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }

        auto it3=st.begin();
        auto it4=st.begin();

        it4++;
        while(it4!=st.end()){
            if(*it4-*it3!=1 && *it3+1!=0 && *it3>0 && *it4>0){
                count++;
            }
            it4++;
            it3++;
        }
        

        if(count==0){
            return nums[n-1]+1;
        }

        int element=INT_MAX;
        auto it1=st.begin();
        auto it2=st.begin();

        it2++;
        while(it2!=st.end()){
            if(*it2-*it1!=1 && *it1+1!=0 && *it2>0 && *it1>0){
                element=min(element,*it1+1);
            }
            it1++;
            it2++;
        }
        return element;
    }
};
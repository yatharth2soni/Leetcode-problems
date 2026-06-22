class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>index;

        int l=0;
        int r=numbers.size()-1;

        while(l<r){
            int sum=numbers[l]+numbers[r];
            if(sum==target){
             index.push_back(l+1);
             index.push_back(r+1);
             break;
            }
            if(sum>target){
                r--;
            }
            if(sum<target){
                l++;
            }
        }
       
        return index;
    }
};
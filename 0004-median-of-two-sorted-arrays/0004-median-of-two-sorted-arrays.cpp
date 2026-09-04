class Solution {
public:
    bool check(int ele,vector<int> &nums1,vector<int> &nums2,int k){
        int count=0;
        count+=upper_bound(nums1.begin(),nums1.end(),ele)-nums1.begin();
        count+=upper_bound(nums2.begin(),nums2.end(),ele)-nums2.begin();
        return count>=k;
    }

    int kthelement(int k,vector<int> &nums1,vector<int> &nums2){
        int s=INT_MAX,e=INT_MIN,mid,res=0;

        if(nums1.size()!=0){
            s=min(s,nums1[0]);
            e=max(e,nums1.back());
        }

        if(nums2.size()!=0){
            s=min(s,nums2[0]);
            e=max(e,nums2.back());
        }
        res=e;

        while(s<=e){
            mid=s+(e-s)/2;
            if(check(mid,nums1,nums2,k)){
                res=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return res;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size=nums1.size()+nums2.size();

        if(size%2!=0){
            return kthelement((size+1)/2,nums1,nums2);
        }
        else{
            int left=kthelement(size/2,nums1,nums2);
            int right=kthelement((size/2)+1,nums1,nums2);
            return (left+right)/2.0;
        }
        return 0;
    }
};
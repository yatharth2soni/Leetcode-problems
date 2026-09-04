class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int s=0,e=arr.size()-1,mid;
        if(arr.size()==1){
            return 0;
        }

        if(arr.size()==2){
            if(arr[0]>arr[1]){
                return 0;
            }
            else{
                return 1;
            }
        }

        while(s<=e){
            mid=s+(e-s)/2;

            if(mid>0 && mid<arr.size()-1){
                if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
                    return mid;
                }
                else if(arr[mid+1]>arr[mid]){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
            else if(mid==0){
                if(arr[0]>arr[1]){
                    return 0;
                }
                else{
                    return 1;
                }
            }
            else if(mid==arr.size()-1){
                if(arr[arr.size()-1]>arr[arr.size()-2]){
                    return mid;
                }
                else{
                    return mid-1;
                }
            }
        }
        return 0;
    }
};
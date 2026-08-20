class Solution {
public:
    int search(vector<int>& arr, int target) {
        int start=0,end=arr.size()-1,mid,prev,next,n=arr.size();
        int index=0;

        while(start<=end){
            mid=start+(end-start)/2;
            prev=(mid-1+n)%n;
            next=(mid+1)%n;

            if(arr[start]<=arr[end]){                   // to get minimum element index//
                index=start;
                break;
            }
            
            if(arr[mid]<=arr[prev] && arr[mid]<=arr[next]){
                index=mid;
                break;
            }
            if(arr[start]<=arr[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }

        end=index-1;                             //toward left of minimum element check for target//
        start=0;

        while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        
        start=index+1;                      //toward right of minimum element for target//
        end=n-1;                
        
        while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        
        if(arr[index]==target){
            return index;
        }
        return -1;
    }
};
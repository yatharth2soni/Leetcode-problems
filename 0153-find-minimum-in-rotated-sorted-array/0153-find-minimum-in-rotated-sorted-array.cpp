class Solution {
public:
    int findMin(vector<int>& arr) {
        int s=0,e=arr.size()-1,mid,prev,next;
        int n=arr.size();

        while(s<=e){
            mid=s+(e-s)/2;
            prev=(mid-1+n)%n;
            next=(mid+1)%n;

            if(arr[s]<=arr[e]){
                return arr[s];
            }
            if(arr[prev]>=arr[mid] && arr[next]>=arr[mid]){
                return arr[mid];
            }
            else if(arr[s]<=arr[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            
        }
        return arr[0];
    }
};
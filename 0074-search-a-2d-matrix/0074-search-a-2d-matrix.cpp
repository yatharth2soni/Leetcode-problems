class Solution {
public:
    bool binarysearch(int rowindex,vector<vector<int>>& matrix,int target){
        int l=0,r=matrix[0].size()-1,mid;

        while(l<=r){
            mid=l+(r-l)/2;
            if(matrix[rowindex][mid]==target){
                return true;
            }
            else if(matrix[rowindex][mid]>target){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return false;
    }
    int searchforrow(vector<vector<int>>& matrix,int target){
        int l=0,r=matrix.size()-1,mid;

        while(l<=r){
            mid=l+(r-l)/2;

            if(matrix[mid][0]<=target && target<=matrix[mid][matrix[mid].size()-1]){
                return mid;
            }
            else if(matrix[mid][0]>target){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return -1;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowfind=searchforrow(matrix,target);
        if(rowfind!=-1){
            return binarysearch(rowfind,matrix,target);
        }
        return false;
    }
};
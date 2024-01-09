class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;

        while(start <= end){
            int mid=(start+end)/2;
            if(target==nums[mid])return mid;

            if(target <nums[start]){
                if(nums[mid] >nums[end])start=mid+1;
                else{
                    if(nums[mid] >target)end=mid-1;
                    else start=mid+1;
                }
            }
            else {
                if(nums[mid]<nums[start])end=mid-1;
                else{
                    if(nums[mid]>target)end=mid-1;
                    else start=mid+1;
                }
            }
        }
        return -1;
    }
};
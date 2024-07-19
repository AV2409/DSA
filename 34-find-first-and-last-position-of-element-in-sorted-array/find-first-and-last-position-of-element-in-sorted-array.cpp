class Solution {
    private:
    int first_occurance(vector<int>& nums, int target)
{
    int start=0;
    int end=nums.size()-1;
    int mid=start + (end-start)/2;
    int ans=-1;
    
    while(start<=end){

        if(target==nums[mid]) {
            ans=mid;
            end=mid-1;

        }

        else if(target>nums[mid]) start=mid+1;

        else if(target<nums[mid]) end=mid-1;

        mid=start + (end-start)/2;

    }
    return ans;
}

int last_occurence(vector<int>& nums, int target){
    int start=0;
    int end=nums.size()-1;
    int mid=start + (end-start)/2;
    int ans=-1;

    while(start<=end){
        if(target==nums[mid]){
            ans=mid;
            start=mid+1;
        }

        else if(target>nums[mid]){
            start=mid+1;
        }

        else if(target<nums[mid]){
            end=mid-1;
        }
        mid=start + (end-start)/2;
    }
    return ans;
}
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=first_occurance(nums,target);
        int last=last_occurence(nums,target);

        vector<int> v({first,last});
        return v;

    }
};
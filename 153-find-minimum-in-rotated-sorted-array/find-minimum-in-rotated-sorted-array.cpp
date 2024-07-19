class Solution {
    private: 
    int pivot(vector<int>& nums){

        int s = 0;
    int e = nums.size() - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if(nums[mid]>=nums[s]&&nums[mid]<=nums[e]) return s;
        if (nums[mid] >= nums[0])
        {
            s = mid + 1;
        }

        else if (nums[mid] < nums[e])
        {
            e = mid;
        }

        mid = s + (e - s) / 2;
    }

    return mid;

    }
public:
    int findMin(vector<int>& nums) 
    {
    int index=pivot(nums);

    int ans=nums[index];

    return ans;

    
    }

};
class Solution {

    int pivot(vector<int>& arr)
{

    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }

        else if (arr[mid] < arr[e])
        {
            e = mid;
        }

        mid = s + (e - s) / 2;
    }

    return mid;
}

int binary_search(vector<int>& arr,int key,int start,int end){
    // int ans=-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        
        else if(arr[mid]>key){
            end=mid-1;
        }

        else if(arr[mid]<key){
            start=mid+1;
        }

        mid=start+(end-start)/2;

    }

    return -1;
}


public:
    int search(vector<int>& nums, int target) {

        if(nums.size()==1&&nums[0]==target) return 0;
        if(nums.size()==1&&nums[0]!=target) return -1;
        int p1;
    p1 = pivot(nums);

    if(target>=nums[0]&&target<=nums[p1-1]){
        return binary_search(nums,target,0,p1-1);
    }

    else{
        return binary_search(nums,target,p1,nums.size()-1);
    }
    }
};
class Solution {

private: 
void reverse(vector<int>& arr, int st,int end){
    while(st<end)
    {
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
}
public:
    void rotate(vector<int>& nums, int k) {
    k=k%nums.size();

    // vector<int> temp;
    // int x=nums.size()-k;
    // if(nums.size()==1) return;

    // for(int i=x;i<nums.size();i++){
    //     temp.push_back(nums[i]);
    // }

    // for(int i=0;i<x;i++){
    //     temp.push_back(nums[i]);
    // }

    // nums=temp;

    int n=nums.size();
    int i=0;
    int j=n-k-1;

    reverse(nums,i,j);

    i=n-k;
    j=n-1;

    reverse(nums,i,j);

    i=0;
    j=n-1;

    reverse(nums,i,j);
        
    }
};
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int x=m;
        for(int i=0;i<n;i++){
            nums1[x]=nums2[i];
            x++;
        }
        // int i=0,j=m;

        // while(i<m||j<m+n){
        //     if(nums1[i]>nums1[j]){
        //         swap(nums1[i],nums1[j]);
        //         i++;
        //     }

        //     else j++;
        // }

        sort(nums1.begin(),nums1.end());
    }
};
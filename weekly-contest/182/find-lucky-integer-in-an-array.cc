class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> nums(501, 0);
       for(unsigned int i=0; i<arr.size(); i++){
           nums[arr[i]]++;
       }
        int lucky = -1;
       for(unsigned int i=1; i<nums.size(); i++){
           if(nums[i] == i)
               lucky = i;
       }
        return lucky;
    }
};

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //tc- 0(nlogn) sc- 0(1)
        //we can solve it using map, tc- 0(n)  sc- 0(n)
        int n=nums.size();
        int p=n/2;        
        sort(nums.begin(),nums.end());        
        return nums[p];
    }
};

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     
        vector<vector<int>> ans;
        int size=nums.size();
        sort(nums.begin(),nums.end());
        
        if(nums[0]>0)
            return {};
        
        if(size<=2)
            return {};
        
        for(int i=0; i<size; i++){            
            if(nums[i]>0)
                break;            
            if(i>0 and nums[i]==nums[i-1]) //if no is gettig repeated ignore the lower loop and continue
                continue;
            
            int sum=0;
            int start=i+1;
            int end=size-1;
            
            
            while(start<end){
                sum= nums[i]+nums[start]+nums[end];            
                if(sum>0)
                    end--;
                else if(sum<0)
                    start++;
                else{
                    ans.push_back({nums[i],nums[start],nums[end]});

                    int last_start = nums[start] , last_end = nums[end];  //Now again, to avoid duplicate triplets, we have to navigate to last occurences of num[low] and num[high] respectively
                    while(start <end && nums[start] == last_start) // Update the low and high with last occurences of low and high.
                        start++;
                    
                    while(start< end && nums[end] == last_end)
                        end--;                    
                }
            }
        }
        return ans;
    }  
};

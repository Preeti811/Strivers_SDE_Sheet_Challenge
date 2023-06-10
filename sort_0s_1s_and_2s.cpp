class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0, j=nums.size()-1, zero=0;

        while(i<=j){
            if(nums[i]==0)
                swap(nums[i++],nums[zero++]);
            else if(nums[i]==2){
                swap(nums[i],nums[j--]);
            }
            else
                i++;
        }
        
        // int count0=0,count1=0;        
        // for(int i=0; i<nums.size(); i++){            
        //     if(nums[i]==0)
        //         count0++;            
        //     else if(nums[i]==1)
        //         count1++;            
        //    }
        
        // for(int i=0; i<count0; i++){
        //     nums[i]=0;
        // }        
        //  for(int i=count0; i<count0+count1; i++){
        //     nums[i]=1;
        // }        
        //  for(int i=count0+count1; i<nums.size(); i++){
        //     nums[i]=2;
        // }        
    }
};

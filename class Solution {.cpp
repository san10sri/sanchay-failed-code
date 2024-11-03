class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> v(nums.size(),1);
        int l=0;
        int h=1;
        #sanchay1
        while(h<nums.size()){
         if(nums[h]>nums[l])
        {
            
            v[h]=max(v[h],v[l]+1);
        }
            else if(l==h-1)
            {
                h++;
                l=0;
            }
            else if(h==nums.size()){
                return *max_element(v.begin(), v.end());
            }
        l++;
        }
        

       return *max_element(v.begin(), v.end());

        
    }
};
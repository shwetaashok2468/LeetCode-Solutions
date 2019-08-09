class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        ios::sync_with_stdio(0);
        cin.tie(0);
      
        int n = nums.size();
        int sum = 0^nums[0];
      
        for(int i=1; i<nums.size(); i++)
        {
            sum = sum^(i^nums[i]);
        }
   
        return sum^n;
        
    }
};

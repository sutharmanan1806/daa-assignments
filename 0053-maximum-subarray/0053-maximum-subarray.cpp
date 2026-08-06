class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int MaxSum= INT_MIN;
       int CurrSum = 0;
       for(int i: nums)
       {
        CurrSum += i;
        MaxSum = max(CurrSum, MaxSum);

        if(CurrSum<0){
        CurrSum = 0;
        }
       } 
    return MaxSum;
    }
    
};
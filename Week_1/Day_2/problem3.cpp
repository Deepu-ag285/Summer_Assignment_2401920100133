class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int maxsum = 0;
        int currsum = 0;
        for(int i = 0;i<k ; i++){
            currsum += nums[i];
        }
        maxsum = currsum;
        for(int i =k; i<nums.size();i++){
            currsum += nums[i]-nums[i-k];
            if(currsum>maxsum)
            maxsum = currsum;
        }
        return (double)maxsum/k;
        
    }
};

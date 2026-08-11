class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size();
        for(int values: nums)
        {
            int count = 0;
            for(int el : nums)
            {
                if(el == values)
                {
                    count++;
                }
            }
            if(count>n/2)
            {
                return values;
            }
        }
        return -1;
        
    }
};
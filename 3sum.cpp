class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> sums;
        int index = 0;
        for (int i = 0; i < nums.size() && nums[i] <= 0 ; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                for (int k = j + 1; k < nums.size(); k++) {
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        sums.push_back(vector<int>());
                        sums[index].push_back(nums[i]);
                        sums[index].push_back(nums[j]);
                        sums[index].push_back(nums[k]);
                        index++;
                    }
                }
            }
            while (i < nums.size() - 1 && nums[i] ==  nums[i+1]) {
                i++;
            }
        }

        return sums;
    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       // Step 1: Count frequency
        map<int, int> freqMap;
        for (int num : nums) {
            freqMap[num]++;
        }

        // Step 2: Transfer to vector and sort by frequency
        vector<pair<int, int>> elements(freqMap.begin(), freqMap.end());
        sort(elements.begin(), elements.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second; // Sort in descending order of frequency
        });

        // Step 3: Extract the top k frequent elements
        vector<int> ans;
        for (int i = 0; i < k; ++i) {
            ans.push_back(elements[i].first);
        }

        return ans;
    }
};

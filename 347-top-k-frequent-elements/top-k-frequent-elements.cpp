class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }

        using pair = pair<int,int>;
        priority_queue<pair, vector<pair>, greater<pair>> min_heap;

        for (const auto& [num, freq] : count) {
            min_heap.push({freq, num});
            if (min_heap.size() > k) {
                min_heap.pop();
            }
        }

        vector<int> result;
        while (!min_heap.empty()) {
            result.push_back(min_heap.top().second);
            min_heap.pop();
        }

        return result;
    }
};
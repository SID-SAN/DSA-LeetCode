class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> count;
        for (string word : words) {
            count[word]++;
        }

        using pair = pair<int, string>;

        auto comp = [](const pair& a, const pair& b) {
            if (a.first == b.first) {
                return a.second < b.second;
            }
            return a.first > b.first;
        };

        priority_queue<pair, vector<pair>, decltype(comp)> min_heap(comp);

        for (const auto& [word, freq] : count) {
            min_heap.push({freq, word});
            if (min_heap.size() > k) {
                min_heap.pop();
            }
        }

        vector<string> result;
        while (!min_heap.empty()) {
            result.push_back(min_heap.top().second);
            min_heap.pop();
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
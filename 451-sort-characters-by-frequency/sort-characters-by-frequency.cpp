class Solution {
public:
    string frequencySort(string s) {
        int n = s.length();
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        priority_queue<pair<int, char>> max_heap;
        for (auto& [ch, count] : freq) {
            max_heap.push({count, ch});
        }

        string res = "";
        while (!max_heap.empty()) {
            auto [count, ch] = max_heap.top();
            max_heap.pop();
            res.append(count, ch);
        }
        return res;
    }
};
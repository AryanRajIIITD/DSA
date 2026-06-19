class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char, int> counts;
        for (char c : s) {
            counts[c]++;
        }
        vector<string> buckets(n + 1, "");
        for (auto const& [ch, freq] : counts) {
            buckets[freq].push_back(ch);
        }
  
        string result = "";
        for (int i = n; i >= 1; i--) {
            if (!buckets[i].empty()) {
                for (char c : buckets[i]) {
                    result.append(i, c);
                }
            }
        }
        
        return result;
    }
};


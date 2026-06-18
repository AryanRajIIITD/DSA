class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (goal[i] == s[0]) {
                int k = i; 
                bool is_match = true;
                
                for (int j = 0; j < n; j++) {
                    if (s[j] != goal[k % n]) {
                        is_match = false;
                        break; 
                    }
                    k++;
                }
                if (is_match) return true;
            }
        }
        return false;
    }
};


class Solution {
public:
    int beautySum(string s) {
        int ans = 0;

        for (int i = 0; i < s.size(); i++) {
            int freq[26] = {0};

            for (int j = i; j < s.size(); j++) {
                freq[s[j] - 'a']++;

                int maxf = 0;
                int minf = INT_MAX;

                for (int k = 0; k < 26; k++) {
                    if (maxf < freq[k]) {
                        maxf = freq[k];
                    }

                    if (freq[k] > 0 && minf > freq[k]) {
                        minf = freq[k];
                    }
                }

                ans += maxf - minf;
            }
        }

        return ans;
    }
};
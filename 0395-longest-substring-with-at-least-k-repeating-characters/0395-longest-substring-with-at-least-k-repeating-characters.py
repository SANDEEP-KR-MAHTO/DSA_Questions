class Solution:
    def longestSubstring(self, s: str, k: int) -> int:
        n = len(s)
        d = dict()

        for c in s:
            if c not in d:
                d[c] = 1
            else:
                d[c]+=1

        for i in range(n):
            if d[s[i]] < k:

                left = self.longestSubstring(s[:i], k)
                right = self.longestSubstring(s[i+1:], k)

                return max(left, right)

        return len(s)
        
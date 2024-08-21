class Solution:
    def hIndex(self, citations):
        n = len(citations)
        cnt = [0] * (n + 1)
        for x in citations:
            cnt[min(x, n)] += 1
        s = 0
        for h in range(n, -1, -1):
            s += cnt[h]
            if s >= h:
                return h
        return 0  # In case no valid h-index is found

if __name__ == "__main__":
    citations = [3, 0, 6, 1, 5]
    
    solution = Solution()
    hIndex = solution.hIndex(citations)
    print(f"The H-Index is: {hIndex}")

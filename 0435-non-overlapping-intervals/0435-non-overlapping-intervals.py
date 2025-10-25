class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        intervals.sort(key=lambda x: x[1])

        i = 0
        j = 1
        count = 0
        while(i< len(intervals) and j< len(intervals)):
            if intervals[i][1]  <= intervals[j][0] :
            
                j += 1
                i = j-1
            else:
                count += 1
                j += 1

        return count
        
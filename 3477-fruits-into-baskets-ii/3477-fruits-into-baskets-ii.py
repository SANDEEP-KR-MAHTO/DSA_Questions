class Solution:
    def numOfUnplacedFruits(self, fruits: List[int], baskets: List[int]) -> int:
        n = len(fruits)
        count=0
        used=[False for i in range(n)]

        for i in range(n):
            placed = False
            for j in range(n):
                if(fruits[i]<=baskets[j] and used[j]==False):
                    used[j]=True
                    placed=True
                    break
            if(placed==False):
                count+=1

        return count

        
class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:

        d = {}
        l=[]
        for i in range(len(nums1)):
            if nums1[i] in d:
                d[nums1[i]] += 1
            else:
                d[nums1[i]] = 1
        for j in range(len(nums2)):
            if nums2[j] in d:
                l.append(nums2[j])
                d.pop(nums2[j])
        return l
        
class Solution:
    def mergeArrays(self, nums1: List[List[int]], nums2: List[List[int]]) -> List[List[int]]:
        res = {}

        for nums in nums1:
            res[nums[0]] = nums[1]

        for nums in nums2:
            res[nums[0]] = res.get(nums[0], 0) + nums[1]

        merged_arr = []
        for key, value in sorted(res.items()):
            merged_arr.append([key, value])

        return merged_arr

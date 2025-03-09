class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        prodN, cnt = 1, 0
        for num in nums:
            if num != 0:
                prodN *= num
            else:
                cnt += 1
        if cnt > 1: return [0] * len(nums)

        res = [0] * len(nums)
        for idx, value in enumerate(nums):
            if cnt: res[idx] = 0 if value else prodN
            else: res[idx] = prodN // value
        
        return res


        
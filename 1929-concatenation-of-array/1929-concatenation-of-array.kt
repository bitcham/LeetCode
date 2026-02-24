class Solution {
    fun getConcatenation(nums: IntArray): IntArray {
        val result = IntArray(nums.size * 2)
        for(i in 0..nums.size-1){
            result[i] = nums[i]
            result[nums.size + i] = nums[i]
        }
        return result
    }
}
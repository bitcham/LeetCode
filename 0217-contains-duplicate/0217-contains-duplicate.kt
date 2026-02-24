class Solution {
    fun containsDuplicate(nums: IntArray): Boolean {
        val compare = mutableSetOf<Int>()
        for (num in nums){
            if(compare.contains(num)){
                return true
            }
            compare.add(num)
        }
        return false
    }
}

class Solution {
    fun scoreOfString(s: String): Int {
        var result = 0
        for(i in 0..s.length-2){
            result += abs(s[i].code - s[i+1].code)
        }
        return result
    }
}
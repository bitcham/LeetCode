class Solution:
    def isPalindrome(self, s: str) -> bool:
        if s == "":
            return True
        temp = ""
        for c in s:
            if ord(c) >= ord('a') and ord(c) <= ord('z'):
                temp = temp + c
            elif ord(c) >= ord('A') and ord(c) <= ord('Z'):
                temp = temp + c.lower()
            elif ord(c) >= ord('0') and ord(c) <= ord('9'):
                temp = temp + c
        i = 0
        j = len(temp) - 1
        while i <= j:
            if temp[i] != temp[j]:
                return False
            i += 1
            j -= 1
        
        return True
        
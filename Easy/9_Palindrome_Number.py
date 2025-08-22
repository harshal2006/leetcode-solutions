class Solution(object):
    def isPalindrome(self, x):
        if x<0:
            return False
        temp=x
        sum=0
        while(x>0):
            rem=x%10
            x=x//10
            sum=sum*10+rem
        if (sum==temp):
            return True
        return False
        """
        :type x: int
        :rtype: bool
        """
        
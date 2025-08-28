class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        x=max(candies)
        arr=[]
        for i in range(len(candies)):
            if (candies[i]+extraCandies>=x):
                arr.append(True)
            else :
                arr.append(False)
        return arr

        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        
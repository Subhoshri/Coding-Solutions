class Solution(object):
    def longestCommonPrefix(self, strs):
        l=[]
        self.strs=strs
        for i in range(len(strs)):
            l.append(len(strs[i]))        #calculating length of every string in the array
        a=min(l)
        for i in range(a,-1,-1):
            for j in strs:
                if j.startswith(strs[0][:i]):      #checking for common prefix
                    flag=1
                    m=strs[0][:i]       #updating the prefix
                else:
                    flag=0
                    break
            else:
                return m

#Time Complexity: O(N^2)

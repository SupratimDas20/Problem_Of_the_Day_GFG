#User function Template for python3

class Solution:
    def reverseEqn(self, s):
        # code here
        op=['-','+','*','/']
        l=len(s)
        ans=""
        n=""
        for i in range(l-1,-1,-1):
            if(s[i]not in op):
                n=s[i]+n
            else:
                ans=ans+n+s[i]
                n=""
        ans=ans+n
        return(ans)

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input().strip()
        ob = Solution()
        ans = ob.reverseEqn(s)
        print(ans)
# } Driver Code Ends

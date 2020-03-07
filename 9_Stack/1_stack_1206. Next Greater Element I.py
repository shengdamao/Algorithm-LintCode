class Solution:
    """
    @param nums1: an array
    @param nums2: an array
    @return:  find all the next greater numbers for nums1's elements in the corresponding places of nums2
    """
    def nextGreaterElement(self, nums1, nums2):
        # Write your code here
        
        rst = [-1] * len(nums1)                             # 所有值设为-1
        
        
        for a, i in enumerate(nums1):                       # a为索引，i为值
                                
            
            for b, j in enumerate(nums2):                   # b为索引，j为值
                if i == j:                                  # 从nums2中找到与nums1中数的位置开始
                    for x in range(b+1,len(nums2)):         # 在这个数右边开始第一个比他大的数
    #                   print(nums2[x])
                        if(nums2[x] > i):                   # 找到第一个比它的数 赋值rst[a], 并break
                            rst[a] = nums2[x]
                            break
                    break                                   # 只需要 i == j 右边遍历完即可 break
        return rst
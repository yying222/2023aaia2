#week15-1.py 寫到一半的python,等一下還有「寫到一半的C」
class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        #先用python把字串的迴圈寫出來
        N = len(s) #先知道字串的長度
        for i in range(N): #字串的迴圈
            print( s[i],t[i] ) #字串的陣列

        return 0 #課堂作業1，先隨便給個0當答案(答案當然不對)
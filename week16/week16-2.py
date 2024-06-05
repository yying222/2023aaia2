class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        #for i in range(3) #其實不只3個 修改前
        #counter = Counter(words[0]) & Counter(words[1]) & Counter(words[2])
        counter = Counter(words[0])
        for word in words:
            counter &= Counter(word)
        ans = []
        for c in counter:
            for i in range(counter[c]): #看要重複幾次
                ans.append(c) #就重複幾次
        return ans
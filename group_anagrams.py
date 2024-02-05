class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagrams = {}
        for word in strs:
            key = ''.join(sorted(word))
            if key not in anagrams.keys():
                anagrams[key] = [word]
            else:
                anagrams[key].append(word)
        temp = []
        for key in anagrams.keys():
            temp.append(anagrams[key])
        return temp


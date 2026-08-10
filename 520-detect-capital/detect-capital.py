class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        length = len(word)
        count = 0

        if length == 1:
            return True

        for ch in word:
            if ch.isupper():
                count += 1

        if count == 1 and word[0].isupper():

            return True
        if count == 0 or count == length:
            return True
        else:
            return False

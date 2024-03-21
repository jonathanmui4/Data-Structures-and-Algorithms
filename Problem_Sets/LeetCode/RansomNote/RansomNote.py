class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        magazineCount = Counter(magazine)
        ransomNoteCount = Counter(ransomNote)

        return all(ransomNoteCount[c] <= magazineCount[c] for c in string.ascii_lowercase)
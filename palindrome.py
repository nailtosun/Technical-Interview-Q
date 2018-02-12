#Write a function that checks if a given word is a palindrome. Character case should be ignored.
class Palindrome:

    @staticmethod
    def is_palindrome(word):
        s = word.lower()
        reversed = s[::-1]
        if reversed == s:
            return 1
        else:
            return 0

print(Palindrome.is_palindrome('deleveled'))

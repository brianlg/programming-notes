import scrabble

#################################################
# Print all words containing 'uu'
# wordlist is a variable defined in scrabble.py 
# for word in scrabble.wordlist:
#     if "uu" in word:
#         print(word)
#################################################

#################################################
# words with oo and ee:
# for word in scrabble.wordlist:
#     if "oo" in word and "ee" in word:
#         print(word)
#################################################

#################################################
# have a q but not a u to go with it: 
# for word in scrabble.wordlist:
#     if "q" in word and "u" not in word:
#         print(word)
#################################################

#################################################
# are there letters that never appear doubled?
# letters = "abcdefghijklmnopqrstuvwxyz"

# def has_a_double(letter):
#     for word in scrabble.wordlist:
#         if letter + letter in word:
#             return True
#     return False

# for letter in letters:
#     if not has_a_double(letter):
#         print(letter + " never appears doubled.") 
#################################################

#################################################
# are there any words that contain all of the vowels?
letters = "abcdefghijklmnopqrstuvwxyz"
vowels = "aeiou"

def has_all_vowels(word):
    for vowel in vowels:
        if vowel not in word:
            return False
    return True

counter = 0
for word in scrabble.wordlist:
    if has_all_vowels(word):
        counter += 1
        print(word)
print(counter)
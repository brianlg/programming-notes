# see code/casino.py for more notes/examples

#SELF is what lets us expose the variable to the rest of the class

# FUNCTIONS - taking input, and with that input - producing some output.
# These are only NOTES!! Program will not work.

# We've used many functions 
print()
len() 
random.randint()

# We can assign a function to a variable : 
die_roll = random.randint(1, 6)
print(die_roll)

# We can write our own functions with _def_
def <function_name>(<arguments>):

def greeting():
print("Hello")
# ^ means define the function "greeting" that takes no arguments. 
# The function prints "Hello"
    
# Function that takes an argument : 
def greeting(name):
print("Hello " + name)
# You call it by providing the argument name : 
greeting("Brian")
# prints 'Hello Brian'

# Defining a function for summing products
# Before function, we summed products like this :
prices = [1.5, 2.75, 16.49, 9.90, 3.05]
total = 0
for number in prices:
    total += number
# Now total = 33.69
# Lets define a function to do this for us :
def sum(numbers):
    total = 0
    for number in numbers:
        total += number
    return total
# sum needs a list to take as input. 
# we chose "numbers" to be the variable that represents the list that is provided when invoking this function
# We use the RETURN keyword to tell the program that this is the output to store from this function. We cannot 'print' it, because that will not store the number anywhere.
# Almost all functions return something. That's the point of haveing a function.
sum(prices)
# prints 33.69. same as above!
grocery_total = sum(prices)
# now the function can RETURN the value from sum, and store it into grocery_total

# take string as input, return as output a T/F 
# Answers: does this string start with a vowel?
# if yes, return True, if not return False
def starts_with_a_vowel(word):
    return word[0] in "AEIOU"
###
starts_with_a_vowel("Alice")
# outputs True
starts_with_a_vowel("Max")
# outputs False

# function that puts names that start with a vowel into a list 
names = ["Alice", "Bob", "Cara", "Dan", "Edith"]
def filter_to_vowel_words(word_list):
    vowel_words = []
    for word in word_list:
        if starts_with_a_vowel(word):
            vowel_words.append(word)
    return vowel_words
# now we can assign it to a variable
v = filter_to_vowel_words(names)
# v is now = to ['Alice', 'Edith']

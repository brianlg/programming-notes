from sys import argv
# argv is the "argument variable" 
# this variable holds the arguments you pass to your python script when you run it.

# this line "unpacks" argv so that, rather than holding all the arguments, it gets assigned to four variables you can work with.
# arguments are assigned in order
script, first, second, third = argv

print "The script is called:", script
print "Your first variable is:", first
print "Your second variable is:", second
print "Your third variable is:", third

# ➜  lpthw python ex13.py first 2nd 3rd
# The script is called: ex13.py
# Your first variable is: first
# Your second variable is: 2nd
# Your third variable is: 3rd

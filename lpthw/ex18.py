# this one is like your scripts with argv
def print_two(*args):
    arg1, arg2 = args
    print "arg1: %r, arg2: %r" % (arg1, arg2)

# ok, that *args is actually pointless, we can just do this
def print_two_again(arg1, arg2):
    print "arg1: %r, arg2: %r" % (arg1, arg2)

# this just takes one argument
def print_one(arg1):
    print "arg1: %r" % arg1

# this one take no arguments
def print_none():
    print "I got nothin'."

print_two("Brian","Gibson")
print_two_again("Brian","Gibson")
print_one("First!")
print_none()

# ➜  lpthw python ex18.py
# arg1: 'Brian', arg2: 'Gibson'
# arg1: 'Brian', arg2: 'Gibson'
# arg1: 'First!'
# I got nothin'.

from sys import argv
from os.path import exists

script, from_file, to_file = argv

print "Copying from %s to %s" % (from_file, to_file)

# we could do these two on one line too, how?
in_file = open(from_file)
indata = in_file.read()

print "The input file is %d bytes long." % len(indata)

print "Does the output file exist? %r" % exists(to_file)
print "Ready, hit RETURN to continue, CTRL-C to abort."
raw_input()

out_file = open(to_file, 'w')
out_file.write(indata)

print "Alright, done."

out_file.close()
in_file.close()

# ➜  lpthw cat ex17_test.txt
# This is a test file.
# ➜  lpthw python ex17.py ex17_test.txt ex17_new_file.txt
# Copying from ex17_test.txt to ex17_new_file.txt
# The input file is 21 bytes long.
# Does the output file exist? False
# Ready, hit RETURN to continue, CTRL-C to abort.

# Alright, done.
# ➜  lpthw cat ex17_new_file.txt
# This is a test file.
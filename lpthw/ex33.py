i = 0
numbers = []

while i < 6:
    print "At the top of i is %d" % i
    numbers.append(i)

    i += 1
    print "Numbers now: ", numbers
    print "At the bottom of i is %d" % i


print "The numbers: "

for num in numbers:
    print num

# ➜  lpthw python ex33.py
# At the top of i is 0
# Numbers now:  [0]
# At the bottom of i is 1
# At the top of i is 1
# Numbers now:  [0, 1]
# At the bottom of i is 2
# At the top of i is 2
# Numbers now:  [0, 1, 2]
# At the bottom of i is 3
# At the top of i is 3
# Numbers now:  [0, 1, 2, 3]
# At the bottom of i is 4
# At the top of i is 4
# Numbers now:  [0, 1, 2, 3, 4]
# At the bottom of i is 5
# At the top of i is 5
# Numbers now:  [0, 1, 2, 3, 4, 5]
# At the bottom of i is 6
# The nmbers: 
# 0
# 1
# 2
# 3
# 4
# 5
my_name = "Brian Gibson"
my_age = 26
my_height = 74
my_weight = 190
my_eyes = "Blue"
my_teeth = "White"
my_hair = "Brown"

print "Let's talk about %s." % my_name
print "He's %d inches tall" % my_height
print "He's %d pounds heavy" % my_weight
print "Actually that's not too heavy."
print "He's got %s eyes and %s hair" % (my_eyes, my_hair)
print "His teeth are usually %s depending on the coffee." % my_teeth

print "If I add %d %d %d I get %d" % (my_age, my_height, my_weight, my_age + my_height + my_weight)

# ➜  lpthw python ex5.py 
# Let's talk about Brian Gibson.
# He's 74 inches tall
# He's 190 pounds heavy
# Actually that's not too heavy.
# He's got Blue eyes and Brown hair
# His teeth are usually White depending on the coffee.
# If I add 26 74 190 I get 290

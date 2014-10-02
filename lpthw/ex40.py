# Classes are like Modules.
# A module is specialized dictionary that can store python code so you can get it with the . (dot) operator. 
# A class is a way to take a grouping of functions and data and place them inside a container so you can access them with the . (dot) operator

# Instead of importing a class (like you do a module), you instantiate a class.
# ex.
# thing = MyStuff()
# thing.apple()
# print thing.tangerine
#
# The first line is the "instantiate" operation, and it's a lot like calling a function.

class Song(object):

    def __init__(self, lyrics):
        self.lyrics = lyrics

    def sing_me_a_song(self):
        for line in self.lyrics:
            print line

happy_bday = Song(["Happy birthday to you",
                    "I don't want to get sued",
                    "So I'll stop right there"])

bulls_on_parade = Song(["They rally around the family",
                        "With pockets full of shells"])

happy_bday.sing_me_a_song()

bulls_on_parade.sing_me_a_song()

# ➜  lpthw python ex40.py
# Happy birthday to you
# I don't want to get sued
# So I'll stop right there
# They rally around the family
# With pockets full of shells
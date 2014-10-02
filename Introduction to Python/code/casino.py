# with no work at the bottom, and only defined functions,
# we can use casino.py as a module.
# we can import it at the top of a new file, and use it's functions
# same as how we import random, we can :
# import casino

import random

class Die(object):
    def __init__(self, sides):
        self.sides = sides

    def roll(self):
        return random.randint(1, self.sides)

class Deck(object):
    def shuffle(self):
        suits = ["Spades", "Hearts", "Clubs", "Diamonds"]
        ranks = ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"]
        self.cards = []
        # for every suit in suits, and every rank in ranks, add a card to our cards list.
        for suit in suits: 
            for rank in ranks:
                self.cards.append(rank + " of " + suit)
        # shuffle is a function provided by random module
        random.shuffle(self.cards)

    def deal(self):
    # take a card out of desk (remove it)
    # pop function does this
        return self.cards.pop()   

# print("D6 rolls: ")
# d = Die(6)
# print(d.roll())
# print(d.roll())
# print(d.roll())

# print("D20 rolls: ")
# d2 = Die(20)
# print(d2.roll())
# print(d2.roll())
# print(d2.roll())

# d = Deck()
# d.shuffle()
# print(d.deal())
# print(d.deal())
# print(d.deal())
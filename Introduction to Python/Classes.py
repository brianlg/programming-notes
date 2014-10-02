# We've seen classes before:
# ex. type([1, 2, 3]) is of class 'list'
# list is a class with it's own functions associated (append, pop, etc)
# classes have functions associated with them - we use the (dot) .





# First argument to every first function defined to a class -- self
# Self pointer enables us to create a variable that we can use in other functions. Learn more about it.
# Greeter class with hello function that prints hello
class Greeter(object):
    def __init__(self, name):
        self.name = name

    def hello(self):
        print("Hello " + self.name)

    def goodbye(self):
        print("Goodbye " + self.name)

# variable g = instance of Greeter
# now g has functions hello and goodbye
# we have to insert a name as an argument now, because of init above
g = Greeter("Brian")
g.hello()
g.goodbye()

g2 = Greeter("Jessica")
g2.hello()
g2.goodbye()

# init will be called each time you create a new instance of a class
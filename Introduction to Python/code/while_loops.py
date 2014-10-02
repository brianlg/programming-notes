for i in [0, 1, 2, 3, 4]:
    print("Hello " + str(i))

# while loop - loop as long as some condition is true.
# below is same as above, but as a while loop
counter = 0
while counter < 5:
    print("Hello " + str(counter))
    counter += 1

# use break to break out of a while loop.
# while true is always true. The if statement is used to
# find when loop will be false, then breaks out.
counter = 0
while True:
    print("Hello " + str(counter))
    counter += 1

    if counter >= 5:
        break

print("Hello World")

while True:
    user_input = raw_input("> ")
    if user_input == "quit": 
        print("Goodbye.")
        break
    else: 
        print(user_input)
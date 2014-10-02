# open takes two arguments
# 1. file
# 2. mode (read, write, etx)

# open countries.txt (in current directory) in read mode
f = open("countries.txt", "r")

countries = []

for line in f:
    line = line.strip()
    # print(line)
    countries.append(line)

f.close()

print(countries)
print(len(countries))


for country in countries:
    if country[0] == "T":
        print country


# print natively appends a new line. 
# so, in our txt file, there is a new line between countries
# and print is adding a new line as well.
# line.strip() takes away the newlines in the txt file
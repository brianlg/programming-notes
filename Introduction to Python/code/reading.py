# open scores.txt file
f = open("scores.txt", "r")

# create empty dictionary to populate
participants = {}

# for every line in f
# strip the trailing \n newline
# split the string into a list called entry (split at the comma)
# in the list, participant is the left most entry
# score is the rightmost entry
# put the key/value pair into our dictionary.
for line in f:
    entry = line.strip().split(",")
    participant = entry[0]
    score = entry[1]
    # in the participants dict, participant is the key,
    # score is the value
    participants[participant] = score
    print(participant + ": " + score)

f.close()

print(participants)


# !! The file that we wrote to, wrote in the format of:
# Brian,98.5        (participant,score)
# the strip at , separates the string at the comma.
# Brian goes into participant
# 98.5 goes into score
# Brian is key, 98.5 is value
# Brian and 98.5 go into dictionary participants
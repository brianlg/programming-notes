capitals_dict = {
'Alabama' : 'Montgomery',
'Alaska' : 'Juneau',
'Arizona' : 'Phoenix',
'Arkansas' : 'Little Rock',
'California' : 'Sacramento',
'Colorado' : 'Denver',
'Connecticut' : 'Hartford',
'Delaware' : 'Dover',
'Dist. of Columbia' : 'Washington',
'Florida' : 'Tallahassee',
'Georgia' : 'Atlanta',
'Hawaii' : 'Honolulu',
'Idaho' : 'Boise',
'Illinois' : 'Springfield',
'Indiana' : 'Indianapolis',
'Iowa' : 'Des Moines',
'Kansas' : 'Topeka',
'Kentucky' : 'Frankfort',
'Louisiana' : 'Baton Rouge',
'Maine' : 'Augusta',
'Maryland' : 'Annapolis',
'Massachusetts' : 'Boston',
'Michigan' : 'Lansing',
'Minnesota' : 'St Paul',
'Mississippi' : 'Jackson',
'Missouri' : 'Jefferson City',
'Montana' : 'Helena',
'Nebraska' : 'Lincoln',
'Nevada' : 'Carson City',
'New Hampshire' : 'Concord',
'New Jersey' : 'Trenton',
'New Mexico' : 'Santa Fe',
'New York' : 'Albany',
'North Carolina' : 'Raleigh Durham',
'North Dakota' : 'Bismarck',
'Ohio' : 'Columbus',
'Oklahoma' : 'Oklahoma City',
'Oregon' : 'Salem',
'Pennsylvania' : 'Harrisburg',
'Puerto Rico' : 'San Juan',
'Rhode Island' : 'Providence',
'South Carolina' : 'Columbia',
'South Dakota' : 'Pierre',
'Tennessee' : 'Nashville',
'Texas' : 'Austin',
'Utah' : 'Salt Lake City',
'Vermont' : 'Montpelier',
'Virginia' : 'Richmond',
'Virgin Islands' : 'Charlotte Amalie',
'Washington' : 'Olympia',
'West Virginia' : 'Charleston',
'Wisconsin' : 'Madison',
'Wyoming' : 'Cheyenne',
}

import random

# pull out all of the keys (states), 
# and assign them to a variable called states
states = list(capitals_dict.keys())
# changed to run until user types quit.
while True:
    # choice function ramdomly selects and assigns a state
    state = random.choice(states)
    # assigns matching catpital to state 
    capital = capitals_dict[state]
    # assigns input to variable capital_guess
    capital_guess = raw_input("What is the capital of " + state + "? ")
    if capital_guess == "quit":
        break
    # compare input to real capital
    elif capital_guess == capital:
        print ("Correct! Nice job!")
    else: 
        print ("Incorrect. The capital of " + state + " is " + capital + ".")

print("All done.")
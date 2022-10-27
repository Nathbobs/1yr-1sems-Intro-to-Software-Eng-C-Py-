#Math Game
#1. Game between me and computer
#2. Only numbers
#3. 31 is loser
#4. Players can use 1~3 numbers

import random
import time

delay = 1

GAMEOVER = ['''
┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼
███▀▀▀██┼███▀▀▀███┼███▀█▄█▀███┼██▀▀▀
██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼█┼┼┼██┼██┼┼┼
██┼┼┼▄▄▄┼██▄▄▄▄▄██┼██┼┼┼▀┼┼┼██┼██▀▀▀
██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██┼┼┼
███▄▄▄██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██▄▄▄
┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼
███▀▀▀███┼▀███┼┼██▀┼██▀▀▀┼██▀▀▀▀██▄┼
██┼┼┼┼┼██┼┼┼██┼┼██┼┼██┼┼┼┼██┼┼┼┼┼██┼
██┼┼┼┼┼██┼┼┼██┼┼██┼┼██▀▀▀┼██▄▄▄▄▄▀▀┼
██┼┼┼┼┼██┼┼┼██┼┼█▀┼┼██┼┼┼┼██┼┼┼┼┼██┼
███▄▄▄███┼┼┼─▀█▀┼┼─┼██▄▄▄┼██┼┼┼┼┼██▄
┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼
┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼
┼┼┼┼┼┼████▄┼┼┼▄▄▄▄▄▄▄┼┼┼▄████┼┼┼┼┼┼┼
┼┼┼┼┼┼┼┼┼▀▀█▄█████████▄█▀▀┼┼┼┼┼┼┼┼┼┼
┼┼┼┼┼┼┼┼┼┼┼█████████████┼┼┼┼┼┼┼┼┼┼┼┼
┼┼┼┼┼┼┼┼┼┼┼██▀▀▀███▀▀▀██┼┼┼┼┼┼┼┼┼┼┼┼
┼┼┼┼┼┼┼┼┼┼┼██┼┼┼███┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼
┼┼┼┼┼┼┼┼┼┼┼█████▀▄▀█████┼┼┼┼┼┼┼┼┼┼┼┼
┼┼┼┼┼┼┼┼┼┼┼┼███████████┼┼┼┼┼┼┼┼┼┼┼┼┼
┼┼┼┼┼┼┼┼▄▄▄██┼┼█▀█▀█┼┼██▄▄▄┼┼┼┼┼┼┼┼┼
┼┼┼┼┼┼┼┼▀▀██┼┼┼┼┼┼┼┼┼┼┼██▀▀┼┼┼┼┼┼┼┼┼
┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼
┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼
''']

WINNER = ['''
 __     ______  _    _  __          ______  _   _ 
 \ \   / / __ \| |  | | \ \        / / __ \| \ | |
  \ \_/ / |  | | |  | |  \ \  /\  / / |  | |  \| |
   \   /| |  | | |  | |   \ \/  \/ /| |  | | . ` |
    | | | |__| | |__| |    \  /\  / | |__| | |\  |
    |_|  \____/ \____/      \/  \/   \____/|_| \_|
''']

myName = input("Enter your name: ")
print()

objective = ["Small", "Crazy", "Delicious", "Sweaty", "Smelly", "Rotten", "Manly", "Muscular", "Disgusting"]
noun = ["Coffee", "Granny", "Monster", "Octopus", "Cat", "Teacher", "Doll", "Robot", "Disaster"]
randomOne = random.choice(objective)
randomTwo = random.choice(noun)
name = randomOne + " " + randomTwo

def displayIntro():
    print ("STARTING GAME...")
    time.sleep(1)
    print ("Loading...")
    print ()
    time.sleep(2)
    time.sleep(1)
    print ("Welcome " + myName + "...")
    time.sleep(1)
    print ("...")
displayIntro()

def randomName():
    time.sleep(1)
    print ("Your opponent is " + name)
    time.sleep(2)
    print ()
randomName()

def choosePlayer():
    print (name + " is letting you go first")
    time.sleep (1)
choosePlayer()
    

def displayPlayer():
    print()
    print ("GAME START")
    time.sleep(1)
    print (myName + " vs " + name)
displayPlayer()

#My Turn
answer = input("Type your answer: ")

def startGame():

    answer = ""
    betweenOneToThree = random.choice(range(1,3))
    secondPlayerTurn = answer

    while answer != 31:
        print()
        if len(answer) != range(1,3):
            print("Please type 1~3 numbers")
            answer = (input("Enter 1~3 numbers: ")
        elif answer in ("abcdefghijklmnopqrstuvwxyz"):
                print("Numbers only")
                answer = (input("Enter numbers only: ")
        else:
            answer = answer + betweenOneToThree
            secondPlayerTurn = answer
            print ("It's" + name + " 's turn now")
            print (name + ": " + secondPlayerTurn)
            return answer
            print()
startGame()

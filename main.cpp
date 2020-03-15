#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

 write out 10 nouns.
 for each of the 10 nouns, write out 3 actions it might perform, in plain english.
 write out how you'd call that action in pseudo code, in the space between each block comment
 
 If the action requires multiple words, use camelCaseToNameIt
 don't forget the semi-colon after each statement
 
 When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

/*
 example)
 Noun:       arm
 action 1:   the arm extends
 action 2:   the arm flexes
 action 3:   the arm rotates conter-clockwise
 */
arm.extend();
arm.flex();
arm.rotateCounterClockwise(); //demonstrates CamelCase

/*
 1)
 Noun: note
 action 1: the note shifts up an octave
 action 2: the note shifts down an octave
 action 3: the note keeps a length of half note
 */
note.shiftUpAnOctave();
note.shiftDownAnOctave();
note.keepALengthOfHalfNote();

/*
 2)
 Noun:quarter
 action 1: the quarter starts
 action 2: the quarter ends
 action 3: the quarter suspends
 */
quarter.start();
quarter.end();
quarter.suspend();
/*
 3)
 Noun:pro tools
 action 1: the pro tools launches
 action 2: the pro tools quits
 action 3: the pro tools insert a new track
 */
protools.launch();
protools.quit();
protools.insertANewTrack;

/*
 4)
 Noun:timer
 action 1:the timer rings
 action 2:the timer sets 
 action 3:the timer resets
 */
timer.ring();
timer.set();
timer.reset();
/*
 5)
 Noun:coffee maker
 action 1: the coffee maker heats up
 action 2: the coffee maker cleans up
 action 3: the coffe maker brews coffee
 */
coffeemaker.heatUp();
coffeemaker.cleanUp();
coffeemaker.brewCoffee();

/*
 6)
 Noun:file
 action 1: copy the file
 action 2: delete the file
 action 3: duplicate the file
 */
file.copy();
file.delete();
file.duplicate();
/*
 7)
 Noun:email
 action 1:send the email
 action 2:reply the email
 action 3:save the email as a draft
 */
 email.send();
 email.reply();
 email.saveAsADraft();


/*
 8)
 Noun: dumplings
 action 1: spoil dumplings
 action 2: fry dumplings
 action 3: freeze dumplings
 */
dumplings.spoil();
dumplings.fry();
dumplings.freeze();
/*
 9)
 Noun:sun
 action 1:the sun sets
 action 2:the sun rises
 action 3:the sun eclipses
 */
sun.set();
sun.rise();
sun.eclipse();

/*
 10)
 Noun:washer
 action 1: set the load of water for washer
 action 2: set the temperature of water for washer
 action 3: set the length of time for washer
 */
 washer.setTheLoadOfWater();
 washer.setTheTemperatureOfWater();
 washer.setTheLengthOfTime();


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}

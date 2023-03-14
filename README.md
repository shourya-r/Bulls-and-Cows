# Bulls-and-Cows
Here’s how the game works.

    1.The program chooses a 4-digit secret number at random, and the user is asked to guess it.
    2.User guesses the number.
    3.For each digit which is correct in position and in value, we count 1 bull. For each remaining digit which is correct in value but not position, we count 1 cow. The program outputs the number of bulls and cows, for each user guess.
    4.Examples: If secret number is 3579 and the guess is 7583, then there are 1 bulls and 2 cows. If secret number is 3556 and guess is 3575, then there are 2 bulls and 1 cows.
    5.User continues guessing till he / she guesses the correct number. 

Here’s a sample interaction with the game:

Secret number chosen (between 1000 and 9999).
Start guessing! ...
444
Invalid Input!
10000
Invalid Input!
1212
Turn 1: Your guess 1212 has 1 bulls and 0 cows.
3434
Turn 2: Your guess 3434 has 2 bulls and 0 cows.
5656
Turn 3: Your guess 5656 has 0 bulls and 0 cows.
7878
Turn 4: Your guess 7878 has 0 bulls and 0 cows.
9090
Turn 5: Your guess 9090 has 1 bulls and 0 cows.
1111
Turn 6: Your guess 1111 has 0 bulls and 0 cows.
9999
Turn 7: Your guess 9999 has 1 bulls and 0 cows.
2349
Turn 8: Your guess 2349 has 0 bulls and 4 cows.
9432
Congratulations, you did it!
You took 9 to guess the number
Secret number is 9432

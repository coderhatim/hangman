# Hangman Game in C++

## Description
This is a simple command-line Hangman game written in C++. The game selects a random word from a predefined list, and the player must guess the word one letter at a time. The player has a maximum of 5 incorrect attempts before losing. If the player successfully guesses the word, they level up to the next round with a new word. The game continues until the player fails to guess a word within the given attempts.

## Features
- Randomly selects a word from a list of 95 words.
- Allows the player to guess one letter at a time.
- Limits incorrect guesses to 5 before losing.
- Displays the current state of the word with guessed letters revealed.
- Continues to a new round if the player wins.

## How to Play
1. Run the program.
2. A word with hidden letters will be displayed.
3. Enter a letter to guess.
4. If the letter is in the word, it will be revealed in the correct position.
5. If the guess is incorrect, the number of allowed attempts decreases.
6. The game continues until the player either guesses the word correctly or runs out of attempts.

## Compilation & Execution
To compile and run the game, use the following commands in a terminal:
```bash
 g++ hangman.cpp -o hangman
 ./hangman
```

## Requirements
- C++ Compiler (g++, Clang, or MSVC)
- Basic knowledge of command-line execution

## Notes
- The game automatically resets and starts a new round upon winning.
- The word list is predefined and can be modified within the source code.

## License
This project is open-source and free to use. Feel free to modify and improve it as needed.


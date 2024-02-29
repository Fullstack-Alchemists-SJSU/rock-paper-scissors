# CMPE 202 - Rock, Paper Scissors

This repository contains the code for the command line based game Rock, Paper Scissors. This is the solution code for Assignment 3.

## Getting Started

Make sure you have g++, clang and cmake (version 3.28 or above) installed.

Run the following command to clone the repository

```bash
git clone https://github.com/Fullstack-Alchemists-SJSU/rock-paper-scissors.git
cd rock-paper-scissors
```

## Build and Run project

Run the following commands to run the project

```bash
cd game
rock-paper-scissors/game $ rm -rf build
rock-paper-scissors/game $ cmake -S . -B build
rock-paper-scissors/game $ cd build
rock-paper-scissors/game/build $ make

cd ../../

rock-paper-scissors $ rm -rf build
rock-paper-scissors $ cmake -S . -B build
rock-paper-scissors $ cd build
rock-paper-scissors/build $ make
rock-paper-scissors/build $ ./RPS

```

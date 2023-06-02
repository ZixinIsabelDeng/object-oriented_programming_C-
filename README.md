
# COVID-19 Vaccine Appointment Scheduler

## Description

This program is a simple console-based tool for scheduling a COVID-19 vaccination appointment. The user can input their age, preferred location, and desired time slot. The program checks the input for validity and provides appointment details based on the user's preferences. 

## Getting Started

### Dependencies

- You need to have a C++ compiler installed on your machine (e.g., GCC, Clang, or MSVC).

### Executing program

1. Open the terminal.
2. Navigate to the directory containing `Comp218A3Q2.cpp`.
3. Compile the program by running the appropriate command for your C++ compiler. For GCC, the command would be `g++ Comp218A3Q2.cpp -o scheduler`.
4. Run the compiled program by entering `./scheduler` on Unix systems, or `scheduler.exe` on Windows.

## Usage

When the program is started, you will be greeted with a welcome message and the schedule based on age groups.

Firstly, you will be asked about the number of vaccine doses you have already received. If you have completed all three doses, the program will exit as no more doses are necessary.

The program then asks for your age, location, and preferred schedule. Please note that location and schedule must be selected using the number that corresponds to your choice.

After all inputs are received, the program will display the result, showing when and where your appointment is scheduled.

## Help

- Age: Must be 18 or older. 
- Location: Enter a number between 1 and 5 corresponding to the location in the provided list.
- Schedule: Enter a number between 1 and 5 corresponding to the schedule in the provided list.

If you encounter any problems or have suggestions for improvement, please open an issue.

## Authors

Zixin Deng
ID: 40047744
For Comp218 Section EC Winter 2022

## Version History

* 0.1
    * Initial Release

# Exit-Controlled Switch-Based ATM Menu Program in C

## Author
Parth Ajmera

## Description
This C program simulates a simple ATM menu using an exit-controlled loop and a switch statement. It allows the user to perform basic banking operations such as deposit, withdraw, check balance, and exit the program. The program uses only the standard input/output library (`stdio.h`) and demonstrates practical use of an exit-controlled loop (`do-while`) with switch-case control flow.

## Features
- Menu-driven interface to choose between deposit, withdrawal, balance check, or exit.
- Validates withdrawals against available balance.
- Updates and displays current balance after transactions.
- Exit-controlled, allowing continued use until the user chooses to exit.
- Simple and clear logic ideal for learning switch-case and loops in C.

## How It Works
- The program starts with an initial balance set to a predefined value.
- It presents a menu for the user to select an action.
- User input directs the flow via a `switch` statement:
  - **Deposit:** User inputs an amount to add to the balance.
  - **Withdraw:** User inputs amount to withdraw, checked against the current balance.
  - **Check Balance:** Displays the current balance.
  - **Exit:** Ends the program.
- The menu repeats until the user opts to exit.

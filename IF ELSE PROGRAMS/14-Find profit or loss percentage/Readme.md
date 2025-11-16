# Find Profit or Loss Percentage in C

## Author
Parth Ajmera

## Description
This C program calculates the profit or loss percentage based on the cost price and selling price entered by the user. It uses only the standard input/output library (`stdio.h`). The program determines if a transaction results in a profit, loss, or no profit/no loss, then computes and displays the respective percentage.

## Features
- Prompts the user to enter the cost price and selling price.
- Identifies whether the scenario is profit, loss, or neutral.
- Calculates and displays the profit or loss percentage.
- Simple logic suitable for beginners learning financial calculations in C.

## How It Works
- The user inputs the cost price and selling price.
- The program compares the two values:
  - If selling price > cost price, it calculates profit and profit percentage.
  - If cost price > selling price, it calculates loss and loss percentage.
  - If both are equal, it displays no profit no loss message.
- The percentage is calculated using the formula:
  \[
  \text{Profit \%} = \frac{\text{Profit} \times 100}{\text{Cost Price}}
  \]
  \[
  \text{Loss \%} = \frac{\text{Loss} \times 100}{\text{Cost Price}}
  \]


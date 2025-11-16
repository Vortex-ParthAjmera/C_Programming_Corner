# Display Grade Based on Marks Using Switch in C

## Author
Parth Ajmera

## Description
This C program reads the marks obtained by a student and displays the corresponding grade using a `switch` statement. The program demonstrates how to use switch cases to categorize numeric input into grade brackets (A, B, C, etc.) efficiently.

## Features
- Takes integer marks input from the user.
- Uses switch case statement to determine the grade based on the range of marks.
- Displays the grade as A, B, C, D, E, or F.
- Simple and effective logic for beginners learning C programming and control flow.

## How It Works
- The user is prompted to enter marks between 0 and 100.
- The marks are divided by 10 to determine the grade bracket.
- The `switch` statement compares this bracket to assign a grade:
  - 9 and 10 correspond to grade A.
  - 8 corresponds to grade B.
  - 7 corresponds to grade C.
  - 6 corresponds to grade D.
  - 5 corresponds to grade E.
  - 4 corresponds to grade E--.
  - Anything below 4 corresponds to grade F.
- If the marks entered are above 100 or invalid, the program can be extended to handle such cases gracefully.

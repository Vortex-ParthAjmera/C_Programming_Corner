# ✴️ Factorial Program with Overflow Check Using Function

## 🏷️ Author  
**Parth Ajmera**  
B.Tech Computer Science, Doon University  

GitHub: [Vortex-ParthAjmera](https://github.com/Vortex-ParthAjmera)

---

## 📄 Overview  
This C program calculates the factorial of a given number using a dedicated function with built-in checks for negative input and 64-bit overflow.  
It restricts input to \( n \leq 20 \) to prevent overflow of the `unsigned long long` result type.

---

## 📘 Description  
The program workflow includes:  
- Reading an integer input from the user with validation.  
- Using the `factorial` function to compute the factorial of the input number.  
- The `factorial` function:  
  - Returns 0 for negative inputs (factorial undefined).  
  - Checks and prevents calculation for numbers greater than 20 to avoid 64-bit overflow.  
  - Computes factorial iteratively using a `for` loop up to \( n \).  
- Displays the factorial result if valid.

Key programming concepts demonstrated:  
- Function implementation and return value handling  
- Input validation via `scanf()`  
- Overflow prevention logic  
- Loop-based factorial computation with type casting to `unsigned long long`

---

## 🧾 License  
This project is open-source and distributed under the MIT License.

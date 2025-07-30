Decision Making

🎯 Aim

To explore key decision-making structures in C++—including if-else, if-else-if ladder, and switch-case—through foundational examples like checking odd/even, finding the largest of three numbers, identifying vowels or consonants, and using switch statements.

📚 Theory

🔹 Conditional statements control the flow of execution based on evaluated conditions, allowing for dynamic and flexible logic handling. 🔹 These constructs are crucial for enabling programs to “think” and respond to input or state variations.

🔄 If-Else Statement

The if-else structure allows a program to make a binary decision. If a condition evaluates as true, one block of code is executed; otherwise, the alternate block runs. It’s useful for simple, yes/no logic checks where you’re choosing between two distinct paths.

🧭 If-Else-If-Else Ladder

This expands decision-making to multiple conditions. The program evaluates conditions sequentially from top to bottom. As soon as one condition is true, its corresponding block runs, and the rest are skipped. The final else acts as a fallback if none of the prior conditions match. Ideal for layered logic where multiple outcomes are possible.

🎚️ Switch-Case Statement

The switch-case structure offers a cleaner alternative to multiple if checks when you're dealing with discrete values (like menu options or fixed states). It matches the value of a variable against predefined cases and executes the matched case block. A default case handles anything that doesn’t fit the listed options.

Algorithm: Odd or Even Number Detection

1️⃣ Start
2️⃣ Declare an integer variable num
3️⃣ Prompt the user to enter a number 
4️⃣ Input the number into num 
5️⃣ Check if num % 2 == 0 ✔️ If true → Display "Even" ❌ Else → Display "Odd"
6️⃣ End

Algorithm: Largest of Three Numbers

1️⃣ Start 
2️⃣ Declare three integer variables a, b, and c 
3️⃣ Prompt the user to enter all three numbers 
4️⃣ Input the values 
5️⃣ Compare: ✔️ If a > b && a > c → Display a is largest ✔️ Else if b > c → Display b is largest ❌ Else → Display c is largest 
6️⃣ End

Algorithm: Vowel or Consonant Using ASCII

1️⃣ Start 
2️⃣ Declare a character variable ch 
3️⃣ Prompt the user to enter a character 
4️⃣ Input ch 
5️⃣ Check if ch is between 'A'-'Z' or 'a'-'z' (ASCII 65–90 or 97–122) ✔️ If true → Check if ch is 'A', 'E', 'I', 'O', 'U' or lowercase equivalents ✔️ If true → Display "Vowel" ❌ Else → Display "Consonant" ❌ Else → Display "Not a letter" 
6️⃣ End

Algorithm: Month Selector Using switch-case

1️⃣ Start 
2️⃣ Declare an integer variable choice 
3️⃣ Display menu options for months (1–12) 
4️⃣ Prompt the user to enter a choice 
5️⃣ Input choice 
6️⃣ Use switch(choice) ✔️ Match cases from 1–12 to corresponding month ❌ If no match → Display "Invalid Input" 
7️⃣ End

🧠 Conclusion

Decision-making is at the heart of intelligent programming. Whether you're branching logic with if-else, scaling conditions with else-if ladders, or simplifying options via switch-case, mastering these structures equips you to write smarter, more dynamic code. Let the compiler follow your logic line by line, decision by decision.

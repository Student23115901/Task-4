# Arithmetic Expression Compiler & Evaluator  
### Author: Anushk Singh  
### Internship ID: CT06DF1877  
### Company: CodeTech IT Solutions Pvt Ltd  
### Internship Duration: 30/05/2025 – 15/07/2025  

---

## Project Overview  

As part of my fourth task during the internship, I developed a **Simple Arithmetic Expression Compiler and Evaluator** in C++.  
The core objective was to design a program that could:  
- Parse basic arithmetic expressions entered by the user  
- Build an abstract syntax tree (AST) representation of the expression  
- Evaluate the expression following correct operator precedence and associativity  

This task aimed to simulate the foundational working of a compiler's parsing and evaluation stages — a critical part of programming language design and interpreter development.  

---

## Key Features  

- ✅ **Support for Basic Arithmetic Operators:** `+`, `-`, `*`, `/`  
- ✅ **Operator Precedence & Associativity Handling**  
- ✅ **Support for Parentheses for Grouped Expressions**  
- ✅ **Error Handling for Syntax Errors & Division by Zero**  
- ✅ **Interactive Console-Based Input & Output**  
- ✅ **Recursive Descent Parsing Implementation**  

---

## Technologies Used  

- **Language:** C++17  
- **Standard Libraries:**  
  - `<iostream>` for input/output  
  - `<string>` for handling user input  
  - `<cctype>` for parsing characters  
  - `<stdexcept>` for exception handling  

---

## How to Compile & Run  

1️⃣ Compile the code using:  
```bash
g++ expression_evaluator.cpp -o expr_eval
```  

2️⃣ Run the evaluator:  
```bash
./expr_eval
```  

---

## Project Description (Task Summary)  

The **Arithmetic Expression Compiler & Evaluator** reads a mathematical expression from the user and evaluates its result by first parsing the expression into a structured form (AST) and then recursively computing its value.  

**Evaluation Flow:**  
- **Tokenization:** Recognizes numbers, operators, and parentheses from the input string.  
- **Parsing:** Uses a recursive descent parser to interpret the token sequence into an AST, ensuring that operator precedence and associativity are correctly applied.  
- **Evaluation:** Recursively traverses the AST to compute the final result of the expression.  

The program supports nested parentheses, mixed operators, and ensures that invalid expressions throw meaningful error messages.  

For example:  
- `2 + 3 * 4` correctly evaluates to `14` (not `20`) due to operator precedence.  
- `(2 + 3) * 4` evaluates to `20`.  
- Division by zero is caught and handled gracefully.  

This task was an essential exercise in understanding how compilers parse and evaluate expressions and how recursive parsing is a powerful tool in language processing.  

---

## My Learning from this Task  

- Gained practical experience in writing a **Recursive Descent Parser**  
- Understood operator precedence parsing and AST construction  
- Developed skills in exception handling within parsing contexts  
- Strengthened understanding of compiler front-end design principles  
- Improved proficiency in managing user input and expression evaluation logic  

---

## Conclusion  

The **Arithmetic Expression Compiler & Evaluator** served as a fundamental project in my internship, giving me hands-on experience in parsing techniques and computational logic.  

It laid a strong foundation for understanding compiler construction, expression evaluation, and language processing — key areas in software engineering and systems programming.  

This task also helped refine my ability to build structured, maintainable, and error-resilient code, aligning with the professional standards expected at **CodeTech IT Solutions Pvt Ltd**.  

---


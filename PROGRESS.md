# Learning Progress

This document tracks progress across the 16 phases of the **Logic Building with Industrial Project Development** learning journey. Numbers represent verified programs completed and organized, tracked separately by programming language.

## Progress Overview

| Compartment | C | C++ | Java | JavaScript | Total |
|---|---:|---:|---:|---:|---:|
| 01. Logic Building | 35 | 0 | 12 | 0 | 47 |
| 02. Arrays & Matrices | 0 | 0 | 0 | 0 | 0 |
| 03. Strings | 0 | 0 | 0 | 0 | 0 |
| 04. Bit Manipulation | 0 | 0 | 0 | 0 | 0 |
| 05. Memory Management | 0 | 0 | 0 | 0 | 0 |
| 06. Structures & Generic Programming | 0 | 0 | 0 | 0 | 0 |
| 07. Recursion | 0 | 0 | 0 | 0 | 0 |
| 08. Data Structure Implementation | 0 | 0 | 0 | 0 | 0 |
| 09. Searching & Sorting | 0 | 0 | 0 | 0 | 0 |
| 10. Core Java | 0 | 0 | 0 | 0 | 0 |
| 11. Java Collections | 0 | 0 | 0 | 0 | 0 |
| 12. File & System Programming | 0 | 0 | 0 | 0 | 0 |
| 13. Network Programming | 0 | 0 | 0 | 0 | 0 |
| 14. Multithreading | 0 | 0 | 0 | 0 | 0 |
| 15. Object-Oriented Design | 0 | 0 | 0 | 0 | 0 |
| 16. Design Patterns & LLD | 0 | 0 | 0 | 0 | 0 |
| **Overall Total** | **35** | **0** | **12** | **0** | **47** |

---

## Detailed Section Breakdown

### 01. Logic Building
- **Status:** In Progress
- **Total Programs:** 47 (C: 35, C++: 0, Java: 12, JavaScript: 0)
- **Supporting Headers:** `Header.h` (multi-file modular function declaration)
- **Log:**
  - `01-display-message.c`: Basic formatted console output using `printf`.
  - `02-addition-hardcoded.c`: Foundational problem-solving steps & hardcoded arithmetic addition.
  - `03-addition-naming-conventions.c`: Addition demonstrating Hungarian variable naming conventions.
  - `04-addition-user-input.c`: Addition accepting dynamic user input via `scanf`.
  - `05-addition-initialized-formatted.c`: Addition with variable initialization and formatted output.
  - `06-addition-modular-function.c`: Modular arithmetic logic decomposed into a separate helper function.
  - `07-addition-function-documentation.c`: Modular addition with complete function header documentation.
  - `08-addition-test-cases.c`: Modular addition with Step 5 boundary test case verification matrix.
  - `09-addition-standard-exit.c`: Addition with standard library exit status macro (`EXIT_SUCCESS`) and parameter documentation.
  - `10-scanf-return-value.c`: Demonstration and inspection of `scanf` integer return code.
  - `11-input-validation-single.c`: Single-input validation checking `scanf` return code with conditional `EXIT_FAILURE`.
  - `12-error-stream-stderr.c`: Error reporting routed through standard error stream (`stderr`) using `fprintf`.
  - `13-addition-defensive-input-validation.c`: Robust addition with input validation on both operands and error streaming.
  - `14-addition-multi-file-main.c`: Multi-file architecture — application entry point importing `Header.h`.
  - `15-addition-multi-file-helper.c`: Multi-file architecture — business logic function definition matching `Header.h`.
  - `16-addition-assert-tests.c`: Automated assertion test harness using `<assert.h>` for addition logic.
  - `17-check-even-odd-inline.c`: Decision making — inline parity check using modulo `% 2` operator.
  - `18-check-even-odd-function.c`: Decision making — modular `void CheckEven(int)` function implementation.
  - `19-check-even-odd-boolean.c`: Decision making — boolean-returning `bool CheckEven(int)` using `<stdbool.h>`.
  - `20-single-word-string-input.c`: String input reading a single token using `scanf` format specifier `%s`.
  - `21-multi-word-string-input-scanset.c`: Multi-word string input using scanset `%[^'\n']s` regular expression.
  - `22-input-buffer-newline-issue.c`: Demonstration of residual newline character issue in input buffer across multiple inputs.
  - `23-input-buffer-space-fix.c`: Resolving residual whitespace/newline issue using leading space in format string.
  - `24-input-buffer-fflush-fix.c`: Flushing standard input buffer using `fflush(stdin)`.
  - `25-maximum-two-numbers-inline.c`: Decision making — finding maximum of two numbers using inline `if-else`.
  - `26-maximum-two-numbers-procedure.c`: Decision making — finding maximum of two numbers using `void` procedure.
  - `27-maximum-two-numbers-function.c`: Decision making — finding maximum of two numbers using fruitful helper function.
  - `28-minimum-two-numbers-function.c`: Decision making — finding minimum of two numbers using helper function.
  - `29-average-two-numbers-integer-division.c`: Arithmetic analysis — demonstrating integer division truncation flaw when calculating average.
  - `30-average-two-numbers-typecasting.c`: Arithmetic analysis — computing accurate average using float typecasting.
  - `31-average-three-numbers-typecasting.c`: Arithmetic analysis — computing average of three numbers using explicit float typecasting.
  - `32-maximum-three-numbers-logical-and.c`: Decision making — finding maximum of three numbers using logical AND `&&`.
  - `33-maximum-three-numbers-logical-or-flaw.c`: Decision making — demonstrating intentional logical flaw when using logical OR `||`.
  - `34-minimum-three-numbers-logical-and.c`: Decision making — finding minimum of three numbers using logical AND `&&`.
  - `35-minimum-four-numbers-conditional-ladder.c`: Decision making — finding minimum of four numbers using chained `else-if` conditional ladder.
  - `DisplayMessage.java`: Java console output fundamentals printing message using `System.out.println`.
  - `StringInputUsingScanner.java`: Reading full-line user string input using `java.util.Scanner` and `nextLine()`.
  - `ScannerNamingConventions.java`: Scanner input with structured object and variable naming conventions.
  - `ScannerNullInitialization.java`: Scanner object reference explicitly declared with `null` before instantiation.
  - `SingleWordInputUsingScanner.java`: Reading single-word string token using `scanner.next()`.
  - `FloatPrecisionLossError.java`: Type safety demonstration — lossy conversion compilation error assigning double literal to float without `f` suffix.
  - `FloatLiteralUsage.java`: Resolving float assignment using explicit `f` suffix literal (`0.0f`).
  - `MultiDataInputUsingScanner.java`: Multi-datatype input handling (String, int, float) using Scanner methods.
  - `AdditionInMainMethod.java`: Arithmetic addition implemented procedurally inside Java `main()` method.
  - `AdditionInstanceMethodCallingError.java`: OOP fundamentals — compilation error attempting to call non-static instance method from static `main()`.
  - `AdditionHelperClassBelowMain.java`: Modular design — static arithmetic method declared inside helper class and class-qualified invocation.
  - `AdditionObjectOrientedApproach.java`: Modular design — object-oriented instantiation of helper class and instance method invocation.

### 02. Arrays and Matrices
- **Status:** Not Started
- **Total Programs:** 0 (C: 0, C++: 0, Java: 0, JavaScript: 0)
- **Log:**
  - *No programs added yet.*

### 03. Strings
- **Status:** Not Started
- **Total Programs:** 0 (C: 0, C++: 0, Java: 0, JavaScript: 0)
- **Log:**
  - *No programs added yet.*

### 04. Bit Manipulation
- **Status:** Not Started
- **Total Programs:** 0 (C: 0, C++: 0, Java: 0, JavaScript: 0)
- **Log:**
  - *No programs added yet.*

### 05. Memory Management
- **Status:** Not Started
- **Total Programs:** 0 (C: 0, C++: 0, Java: 0, JavaScript: 0)
- **Log:**
  - *No programs added yet.*

### 06. Structures and Generic Programming
- **Status:** Not Started
- **Total Programs:** 0 (C: 0, C++: 0, Java: 0, JavaScript: 0)
- **Log:**
  - *No programs added yet.*

### 07. Recursion
- **Status:** Not Started
- **Total Programs:** 0 (C: 0, C++: 0, Java: 0, JavaScript: 0)
- **Log:**
  - *No programs added yet.*

### 08. Data Structure Implementation
- **Status:** Not Started
- **Total Programs:** 0 (C: 0, C++: 0, Java: 0, JavaScript: 0)
- **Log:**
  - *No programs added yet.*

### 09. Searching and Sorting
- **Status:** Not Started
- **Total Programs:** 0 (C: 0, C++: 0, Java: 0, JavaScript: 0)
- **Log:**
  - *No programs added yet.*

### 10. Core Java
- **Status:** Not Started
- **Total Programs:** 0 (C: 0, C++: 0, Java: 0, JavaScript: 0)
- **Log:**
  - *No programs added yet.*

### 11. Java Collections
- **Status:** Not Started
- **Total Programs:** 0 (C: 0, C++: 0, Java: 0, JavaScript: 0)
- **Log:**
  - *No programs added yet.*

### 12. File and System Programming
- **Status:** Not Started
- **Total Programs:** 0 (C: 0, C++: 0, Java: 0, JavaScript: 0)
- **Log:**
  - *No programs added yet.*

### 13. Network Programming
- **Status:** Not Started
- **Total Programs:** 0 (C: 0, C++: 0, Java: 0, JavaScript: 0)
- **Log:**
  - *No programs added yet.*

### 14. Multithreading
- **Status:** Not Started
- **Total Programs:** 0 (C: 0, C++: 0, Java: 0, JavaScript: 0)
- **Log:**
  - *No programs added yet.*

### 15. Object-Oriented Design
- **Status:** Not Started
- **Total Programs:** 0 (C: 0, C++: 0, Java: 0, JavaScript: 0)
- **Log:**
  - *No programs added yet.*

### 16. Design Patterns and LLD
- **Status:** Not Started
- **Total Programs:** 0 (C: 0, C++: 0, Java: 0, JavaScript: 0)
- **Log:**
  - *No programs added yet.*

# Learning Progress

This document tracks progress across the 16 phases of the **Logic Building with Industrial Project Development** learning journey. Numbers represent verified programs completed and organized, tracked separately by programming language.

## Progress Overview

| Compartment | C | C++ | Java | JavaScript | Total |
|---|---:|---:|---:|---:|---:|
| 01. Logic Building | 74 | 0 | 32 | 0 | 106 |
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
| **Overall Total** | **74** | **0** | **32** | **0** | **106** |

---

## Detailed Section Breakdown

### 01. Logic Building
- **Status:** In Progress
- **Total Programs:** 106 (C: 74, C++: 0, Java: 32, JavaScript: 0)
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
  - `36-display-repetition-sequential.c`: Repetitive output — sequential manual `printf` statements.
  - `37-iteration-for-loop-fixed.c`: Iteration fundamentals — fixed-frequency `for` loop executing 4 iterations.
  - `38-iteration-dynamic-user-count.c`: Dynamic iteration — `for` loop bounded by dynamic user frequency input.
  - `39-print-numbers-vertical.c`: Loop counter output — displaying numbers 1 to N vertically.
  - `40-print-numbers-horizontal-tab.c`: Formatted loop output — displaying numbers 1 to N horizontally delimited with `\t`.
  - `41-interleaved-number-star-horizontal.c`: Interleaved pattern — alternating loop counter and `*` horizontally.
  - `42-interleaved-number-star-vertical.c`: Interleaved pattern — alternating loop counter and `*` vertically.
  - `43-reverse-number-sequence.c`: Reverse iteration — decrementing loop displaying numbers from N down to 1.
  - `44-odd-numbers-dual-increment.c`: Sequence generation — odd numbers displayed using dual increment (`iCnt++` inside body and loop header).
  - `45-odd-numbers-loop-step.c`: Sequence generation — odd numbers displayed with step expression `iCnt = iCnt + 2`.
  - `46-odd-numbers-shorthand-operator.c`: Sequence generation — odd numbers displayed using shorthand addition assignment `iCnt += 2`.
  - `47-summation-manual-accumulator.c`: Accumulator pattern — manual step-by-step addition into accumulator variable.
  - `48-summation-using-for-loop.c`: Accumulator pattern — summation of natural numbers 1 to N using `for` loop.
  - `49-factorial-zero-initialization-flaw.c`: Accumulator analysis — demonstrating product multiplication flaw caused by zero-initialization.
  - `50-factorial-using-for-loop.c`: Iterative factorial — factorial computation using `for` loop with accumulator properly initialized to 1.
  - `51-check-divisible-by-three.c`: Decision making — checking integer divisibility by 3 using modulo `% 3`.
  - `52-check-divisible-by-five.c`: Decision making — checking integer divisibility by 5 using modulo `% 5`.
  - `53-check-divisible-three-and-five-logical-and.c`: Decision making — compound divisibility check using logical AND `&&` with short-circuit analysis.
  - `54-check-divisible-three-or-five-logical-or.c`: Decision making — compound divisibility check using logical OR `||` with short-circuit analysis.
  - `55-check-divisible-nested-if.c`: Decision making — compound divisibility check using nested `if` statements.
  - `56-display-natural-numbers-inline.c`: Iteration — displaying natural numbers 1 to N inline within `main()`.
  - `57-display-natural-numbers-function.c`: Modular design — displaying natural numbers 1 to N encapsulated in `void Display(int)` procedure.
  - `58-summation-natural-numbers-function.c`: Accumulator pattern — fruitful function `Summation(int)` computing sum of first N natural numbers.
  - `59-factorial-function-reinitialization.c`: Accumulator pattern — factorial calculation with separate declaration, zero initialization, and reassignment to 1.
  - `60-factorial-function-direct-initialization.c`: Accumulator pattern — factorial calculation with direct variable declaration and initialization `iFact = 1`.
  - `61-factorial-long-int-datatype.c`: Data types & precision — factorial computation using `long int` datatype with format specifier `%ld`.
  - `62-factorial-long-long-datatype.c`: Data types & precision — factorial computation using 64-bit `long long` datatype with format specifier `%lld`.
  - `63-datatype-sizes-basic.c`: Memory architecture — inspecting fundamental data type sizes in bytes using `sizeof` operator.
  - `64-datatype-sizes-extended.c`: Memory architecture — inspecting extended and modifier data type sizes (`short`, `long`, `long double`) using `sizeof`.
  - `65-factorial-unsigned-long-long.c`: Data types & precision — factorial range maximization using `unsigned long long` datatype.
  - `66-factorial-typedef-type-alias.c`: Type definitions — defining and utilizing `typedef unsigned long long ULONG` alias in factorial function.
  - `67-factors-linear-traversal.c`: Algorithmic complexity — identifying all factors of N using full linear loop traversal `[1, N]` with O(N) time complexity.
  - `68-proper-factors-linear-traversal.c`: Algorithmic complexity — identifying proper factors strictly less than N using loop range `[1, N-1]` with O(N) time complexity.
  - `69-factors-half-range-boundary-flaw.c`: Algorithmic analysis — demonstrating boundary condition flaw in factor search using strict inequality `< N/2`.
  - `70-factors-half-range-optimized.c`: Algorithmic optimization — factor search optimized to half range `<= N/2` with O(N/2) time complexity.
  - `71-sum-factors-unassigned-return-flaw.c`: Fruitful functions & debugging — demonstrating caller flaw where function return value is discarded without assignment.
  - `72-check-perfect-number-procedure.c`: Number theory — verifying whether a number is a Perfect Number using a `void` procedure with console output.
  - `73-check-perfect-number-boolean-function.c`: Modular design — verifying Perfect Number returning boolean `bool` (`true`/`false`) using `<stdbool.h>`.
  - `74-check-perfect-number-relational-expression.c`: Clean code & idioms — verifying Perfect Number by directly returning relational equality expression `(iSum == ino)`.
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
  - `AdditionStaticMethodInSameClass.java`: Modular design — static addition helper method declared and invoked within the same class.
  - `AdditionStaticMethodUnqualifiedCallError.java`: Scoping demonstration — compilation error attempting unqualified call to static method in nested/separate helper class.
  - `AdditionStaticMethodClassQualified.java`: Modular design — qualified invocation of static helper method via class name (`Arithmatic.Addition`).
  - `RepetitiveDisplaySequential.java`: Console output — sequential manual `System.out.println` repetitive statements.
  - `RepetitiveDisplayStaticMethod.java`: Procedural abstraction — repetitive display encapsulated within static helper method.
  - `RepetitiveDisplaySeparateClassStatic.java`: Modular design — display procedure delegated to separate class with static method.
  - `RepetitiveDisplayObjectOriented.java`: OOP design — display method encapsulated in separate class instantiated as an object.
  - `ForLoopIteration.java`: Iteration control — basic `for` loop execution with fixed boundary condition.
  - `ForLoopExtendedIteration.java`: Iteration control — `for` loop demonstrating iteration range extension.
  - `ForLoopWithScannerInput.java`: Dynamic iteration — `for` loop bounded by user input read via `Scanner`.
  - `ForLoopWithInputFilter.java`: Defensive programming — input filter handling negative frequency values.
  - `ForLoopWithInputUpdater.java`: Defensive programming — input updater converting negative input to positive via negation.
  - `ForLoopBannerDelimiter.java`: Console formatting — decorative banner delimiters around repetitive loop output.
  - `ForLoopDisplayCounter.java`: Counter visualization — printing iteration index counter alongside message.
  - `ForLoopCounterWithMessage.java`: Formatted output — combining formatted string messages with dynamic loop counter.
  - `InfiniteLoopDecrementFlaw.java`: Control flow analysis — infinite loop demonstration caused by decrementing away from termination condition.
  - `ForLoopReverseIteration.java`: Reverse iteration — decrementing `for` loop displaying numbers from N down to 1.
  - `ForLoopDynamicReverseDisplay.java`: Reverse iteration — dynamic countdown loop driven by user-supplied boundary.
  - `IterationUsingWhileLoop.java`: Control flow alternatives — iteration implemented using entry-controlled `while` loop.
  - `IterationUsingDoWhileLoop.java`: Control flow alternatives — iteration implemented using exit-controlled `do-while` loop.

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

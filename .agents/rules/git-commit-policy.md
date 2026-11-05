# Permanent Git Commit Message Policy & Operating Rules
# Repository: industrial-programming-lab

This document defines the permanent rules for organizing code and creating Git commits in `industrial-programming-lab`. All future agent actions, file movements, and Git commits must adhere to these policies.

---

## 1. Core Operating Principle

- **User Responsibility:** The user writes, debugs, and understands all code independently.
- **Agent Responsibility:** Scan `daily-inbox/`, recognize programming language (C, C++, Java, JavaScript), classify programs, detect duplicates, move and rename files descriptively, update `PROGRESS.md` with language-wise counts, and prepare clean Conventional Commits upon explicit user request.
- **Strict Non-Destructive Rule:** NEVER modify the user's source code, logic, algorithm, variable names, formatting, or comments (with the sole exception of the strictly scoped Java class renaming defined in Section 7). Report any bugs or syntax issues separately as non-blocking warnings.
- **Stable Numbering Rule:** NEVER renumber or rename previously committed files. New programs in any category always take the next sequential number (`NN-descriptive-name.ext`), except Java files which follow the PascalCase naming convention in Section 7.

---

## 2. Mandatory Pre-Commit Diff & Content Analysis

Before creating any commit:

1. **Inspect Actual Diffs:** Run and analyze `git diff` and `git status` for staged and unstaged files.
2. **Inspect Code Logic:** Read enough of each program to identify its exact technical purpose (e.g., whether it is hardcoded addition, user input validation, modular function decomposition, or pointer dereferencing).
3. **Never Derive Messages Solely from Folder Names:** Never produce generic parent-folder messages like `feat(logic-building): add foundational problem solving and addition programs`.
4. **No Blanket Messages:** Never use a single generic message across multiple distinct conceptual groups.
5. **Analyze the Nature of the Change:** Select the commit type based on what actually occurred (new concept vs. architectural evolution vs. test harness vs. bug fix vs. documentation vs. organization).

---

## 3. Commit Grouping & Batch Handling Rules

- **Related Programs:** Group programs that demonstrate the same specific concept and change type into a single logical commit with an accurate description.
- **Different Concepts or Change Types:** Split changes into separate commits when files represent meaningfully different concepts, features, or change types (e.g., separate new array implementations from refactored arithmetic or test cases).
- **Small Batches:** A single commit is acceptable if all changes form one coherent conceptual unit.
- **Large Batches:** Split logically by concept, milestone, or commit type into multiple focused commits.
- **No Default 1-Commit-Per-File:** Do not create one commit per file unless files represent genuinely independent changes or the user explicitly requests individual commits.
- **No Artificial Commits:** Do not invent commits merely to increase commit count or to use every available type, and do not combine unrelated changes merely to reduce commit count.
- **Decision Rules for Mixed Changes:**
  1. Inspect every relevant diff before selecting commit types.
  2. Group changes into logically coherent commits.
  3. If a single coherent change genuinely includes inseparable activities, select the type that best represents its primary purpose.
  4. If no listed type accurately describes a change, ask the user before inventing a new convention.

---

## 4. Mandatory Commit Type Selection Standards

Format:
```text
<type>(<scope>): <specific description>
```

**Never default every commit to `feat`.** Inspect the actual code changes and select the exact type from the following specifications:

### 1. `feat` — New Concepts and Implementations
Use **strictly** when introducing a brand-new algorithm, data structure, or language capability that has not previously been implemented in the relevant module.
- *Examples:*
  - `feat(bit-manipulation): implement fourth-bit inspection using bitwise mask`
  - `feat(trees): implement binary search tree node insertion`
  - `feat(arrays): implement array rotation using reversal algorithm`
- *Constraint:* Do NOT use `feat` merely because a new file or practice program has been added. The program must represent a genuinely new concept or implementation within the relevant module.

### 2. `refactor` — Architectural Evolutions
Use when restructuring or evolving an existing solution without introducing a new problem statement or genuinely new core concept.
- *Includes:*
  - Moving business logic from `main()` into helper functions.
  - Migrating procedural functions into OOP helper classes or instantiated objects.
  - Transforming a single-file program into a multi-file header/source architecture.
  - Restructuring an existing implementation while preserving its intended behavior.
- *Examples:*
  - `refactor(arithmetic): extract inline addition into a helper function`
  - `refactor(java-oop): migrate static arithmetic methods into an instantiated object`
- *Constraint:* Do NOT use `refactor` for a completely new implementation that introduces a genuinely new concept.

### 3. `test` — Testing and Verification
Use when adding test cases, assertion drivers, boundary-testing matrices, or test harnesses.
- *Examples:*
  - `test(arithmetic): add assertion cases for boundary values`
  - `test(modular-addition): add automated unit test harness using assert`
- *Constraint:* Do NOT use `test` simply because a program was compiled or manually executed.

### 4. `fix` — Error and Flaw Corrections
Use when correcting an actual bug or demonstrating the correction of an intentional logical flaw.
- *Examples:*
  - `fix(conditionals): correct logical operator flaw in three-number maximum`
  - `fix(arrays): correct off-by-one error in array traversal`
- *Constraint:* The repository contains educational programs that may intentionally contain mistakes. NEVER fix bugs automatically during organization. Use `fix` only when the user has actually made or requested a correction.

### 5. `docs` — Documentation Only
Use when changes are strictly limited to repository documentation (`README.md`, `PROGRESS.md`, `ROADMAP.md`, or other Markdown docs).
- *Examples:*
  - `docs(progress): update completed program count`
  - `docs(readme): clarify repository structure`
- *Constraint:* Do NOT use `docs` for commits that also introduce or modify source-code implementations.

### 6. `chore` — Maintenance and Housekeeping
Use for repository organization, file relocations, naming-only changes, folder restructuring, and maintenance of project rules that does not introduce a new implementation or change program behavior.
- *Examples:*
  - `chore(organization): reclassify input buffer programs`
  - `chore(organization): organize daily programs into concept folders`
  - `chore(config): update repository instructions`

---

## 5. Scope & Description Requirements

- **Granular Scopes:** Use specific technical scopes accurately identifying the concept or area changed:
  - Examples: `arithmetic`, `arrays`, `strings`, `bit-manipulation`, `memory`, `conditionals`, `functions`, `java-oop`, `javascript`, `trees`, `progress`, `organization`.
  - Do NOT blindly copy folder names (e.g., do not use `feat(logic-building)` for every program).
- **Imperative Voice:** Begin description with lowercase imperative action verbs: `add`, `demonstrate`, `implement`, `document`, `extract`, `correct`, `update`, `reclassify`.
- **Accurate & Specific:** Describe what the commit actually implements or changes.
- **Forbidden Vague Phrases:**
  - ❌ `add foundational programs`
  - ❌ `update programs`
  - ❌ `add daily work`
  - ❌ `add multiple files`
  - ❌ `update logic building`
  - ❌ `add practice programs`
  - ❌ `updated` / `changes` / `done` / `today` / `programs`
- **Integrity Rule:** Do NOT claim that tests passed, bugs were fixed, or features were implemented unless the changes genuinely support those claims.

---

## 6. Safety, Approval & Execution Protocols

- **Explicit Command Required:** Organizing files does NOT authorize committing or pushing.
  - Organization stops after moving files, updating `PROGRESS.md`, and showing the summary report.
  - Commits only occur on explicit command: *"Commit today's work"*.
  - Pushes only occur on explicit command: *"Commit and push today's work"* or *"Push to GitHub"*.
- **Pre-Commit Verification Checklist:**
  - Verify `git status` shows clean staging of intended files only.
  - Ensure zero build artifacts (`*.o`, `*.out`, `*.class`, `*.dSYM`), zero IDE metadata (`.idea`, `.vscode`), and zero credentials/secrets.
  - Verify user source code was NOT modified (except authorized Java class rename).
- **Non-Destructive Git:** Never force push (`--force`), never rewrite remote history, and never delete commits unless explicitly instructed by the user.

---

## 7. Java Filename & Class Naming Policy (Strict Code Preservation)

### 1. Java Filename Convention
- **No Leading Numbers & No Numeric Suffixes:** Do NOT use leading numbers (e.g., `01-`) or numeric suffixes in Java filenames.
- **PascalCase & Meaningful Names:** Use specific, descriptive PascalCase filenames that describe the program's technical purpose.
  - *Examples:* `DisplayMessage.java`, `AdditionWithUserInput.java`, `ArrayTraversalUsingLoop.java`, `ReverseStringUsingRecursion.java`.
  - *Avoid:* Generic names such as `Program1.java`, `Example2.java`, `Test3.java`, or appending numbers merely to distinguish programs. Choose a more descriptive name based on the actual implementation.
- **Public Class Name Matching:** Ensure that a public top-level Java class has exactly the same name as its filename, including capitalization.

### 2. Strict Source-Code Preservation & Authorized Modifications
The user's source code must remain completely unchanged except for the following three strictly authorized naming operations:
1. Rename the Java source file.
2. Rename the corresponding class identifier when necessary to match the new filename.
3. Update constructor names or direct references that must change solely because of that class rename, but only when necessary to keep the program consistent.

**Antigravity is NOT authorized to make any other code changes during organization.**
- Do NOT add, remove, or modify `public`, `private`, `protected`, `static`, or any other access modifier or keyword.
- Do NOT add or remove `public` from the main class declaration.
- Do NOT change the `main` method signature or its access modifiers.
- Do NOT fix syntax errors, compilation errors, bugs, or warnings.
- Do NOT change program logic, algorithms, conditions, loops, variables, data types, or method implementations.
- Do NOT reformat code, change indentation, or alter whitespace.
- Do NOT add, remove, or rewrite comments.
- Do NOT add imports, remove imports, or change package declarations.
- Do NOT optimize code or apply coding standards automatically.
- Do NOT add missing code or invent functionality.

### 3. Preserving the Learning Process
- These are learning programs written by the user. Programs may intentionally contain mistakes, incomplete logic, non-standard formatting, or omitted access modifiers as part of the learning journey.
- Do NOT assume imperfect code needs correction. The goal is to preserve the user's original work and track learning honestly.
- **Preserve original declarations:**
  - If the user wrote `class Program1 { ... }`, rename the file to `DisplayMessage.java` and class to `class DisplayMessage { ... }`. Do NOT change this to `public class DisplayMessage`.
  - If the user wrote `public class Program1 { ... }`, rename the file to `DisplayMessage.java` and class to `public class DisplayMessage { ... }`.

### 4. Handling Ambiguous Cases
- If a safe rename requires changes beyond the explicitly permitted class/constructor renaming, DO NOT make those changes automatically.
- Leave the program in `daily-inbox/`, explain the compatibility issue, and ask the user before proceeding.
- Never silently make additional code changes to force compilation.

### 5. Verification & Reporting
- After organizing Java files:
  - Verify that filenames match their public top-level class names where applicable.
  - Compare the original and final source code to confirm that only authorized class-name changes occurred.
  - Explicitly report every file renamed and every class identifier changed.
  - Explicitly report any program left in `daily-inbox/` because its rename was ambiguous.
  - Compilation checks may be performed when practical, but compilation failures must be reported as warnings rather than automatically fixed.

---

## 8. JavaScript Filename & Organizational Rules

### 1. Extension & Concept-First Placement
- **File Extension:** Use `.js` for JavaScript source files.
- **Concept Compartment:** JavaScript programs are organized by concept first, language second. They belong to their corresponding conceptual compartment under a `js/` subfolder (e.g., `01-logic-building/js/`, `02-arrays-and-matrices/js/`, `03-strings/js/`).
- **Subfolder Creation:** The `js/` subfolder is created only when the first JavaScript program arrives in that category.

### 2. JavaScript Filename Convention
- **Sequential Lowercase Naming:** Follow the repository's standard sequential convention: `NN-descriptive-name.js` (e.g. `01-console-log.js`, `02-array-traversal.js`).
- **Stable Numbering:** Numbers increment locally within each concept's `js/` subfolder. Once committed, filenames remain stable and are never renumbered.

### 3. Minimalist Engineering Practice
- **No Unnecessary Build Infrastructure:** Do not introduce frontend frameworks, npm packages, `package.json`, bundlers, or build systems for standalone algorithmic and logic exercises.
- **Pure JavaScript Exercises:** Treat programs as algorithmic, systems, and logic implementations unless a project explicitly requires otherwise.

### 4. Language-Wise Progress Tracking
- Every organized JavaScript file increments the `JavaScript` column for its respective compartment in `PROGRESS.md`.

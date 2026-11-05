# Permanent Java Naming & Strict Code Preservation Policy
# Repository: industrial-programming-lab

This policy defines the permanent rules for organizing and naming Java programs in `industrial-programming-lab`.

---

## 1. Java Filename Convention
- **No Leading Numbers & No Numeric Suffixes:** Do NOT use leading numbers (e.g., `01-`) or numeric suffixes in Java filenames.
- **PascalCase & Meaningful Names:** Use specific, descriptive PascalCase filenames that describe the program's purpose.
  - *Examples:* `DisplayMessage.java`, `AdditionWithUserInput.java`, `ArrayTraversalUsingLoop.java`, `ReverseStringUsingRecursion.java`.
  - *Avoid:* Generic names such as `Program1.java`, `Example2.java`, `Test3.java`, or appending numbers merely to distinguish programs.
- **Public Class Name Matching:** Ensure that a public top-level Java class has exactly the same name as its filename, including capitalization.

---

## 2. Strict Source-Code Preservation & Authorized Modifications
The user's source code must remain completely unchanged except for three explicitly authorized naming operations:
1. Rename the Java source file.
2. Rename the corresponding class identifier when necessary to match the new filename.
3. Update constructor names or direct references that must change solely because of that class rename, but only when necessary to keep the program consistent.

**Antigravity is NOT authorized to make any other code changes during organization:**
- Do NOT add, remove, or modify `public`, `private`, `protected`, `static`, or any other access modifier or keyword.
- Do NOT add or remove `public` from the main class declaration.
- Do NOT change the `main` method signature or its access modifiers.
- Do NOT fix syntax errors, compilation errors, bugs, or warnings.
- Do NOT change program logic, algorithms, conditions, loops, variables, data types, or method implementations.
- Do NOT reformat code, change indentation, or modify whitespace.
- Do NOT add, remove, or rewrite comments.
- Do NOT add imports, remove imports, or change package declarations.
- Do NOT optimize code or apply coding standards automatically.
- Do NOT add missing code or invent functionality.

---

## 3. Preserving the Learning Process
- These are learning programs written independently by the user. Programs may intentionally contain mistakes, incomplete logic, non-standard formatting, or omitted access modifiers.
- Do NOT assume imperfect code needs correction. Preserve the original implementation exactly.
- **Example:**
  - Original: `class Program1 { ... }` → Renamed: `class DisplayMessage { ... }` (Do NOT add `public`).
  - Original: `public class Program1 { ... }` → Renamed: `public class DisplayMessage { ... }`.

---

## 4. Handling Ambiguous Cases
- If a safe rename requires changes beyond the explicitly permitted naming modifications, do not make those changes automatically.
- Leave the program in `daily-inbox/`, explain the compatibility issue, and ask the user before proceeding.
- Never silently make additional code changes to force compilation.

---

## 5. Verification & Reporting
- Verify that filenames match their public top-level class names where applicable.
- Compare original and final source code to confirm that only authorized class-name changes occurred.
- Report every file renamed and every class identifier changed.
- Explicitly report any program left in `daily-inbox/` because its rename was ambiguous.
- Compilation checks may be performed when practical, but failures must be reported as non-blocking warnings rather than automatically fixed.


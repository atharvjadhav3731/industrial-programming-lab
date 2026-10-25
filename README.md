# Industrial Programming Lab

## About

This repository documents my structured, industrial-oriented learning journey through the **Logic Building with Industrial Project Development** programming batch.

It serves as a dedicated, hands-on engineering lab capturing progressive mastery from foundational algorithmic thinking to systems programming, concurrent systems, and low-level software architecture. Every program in this repository is coded manually to build deep conceptual understanding and rigorous implementation discipline.

---

## Learning Philosophy

The learning progression follows a strict engineering paradigm:

$$\text{Concept} \longrightarrow \text{Implementation} \longrightarrow \text{Practice} \longrightarrow \text{Design} \longrightarrow \text{Industrial Application}$$

1. **Concept**: Understand the theoretical underpinnings, memory layouts, and architectural rules.
2. **Implementation**: Code solutions from scratch without shortcuts or high-level boilerplate masking the mechanics.
3. **Practice**: Reinforce problem-solving speed, precision, edge-case coverage, and boundary validation.
4. **Design**: Transition from procedural routines to modular, object-oriented, and decoupled architectures.
5. **Industrial Application**: Build toward production-grade systems, clean code standards, and robust design patterns.

---

## Repository Structure

The codebase is organized conceptually rather than by language. As programs are introduced, language subfolders (`c/`, `cpp/`, `java/`) are created under their respective concept modules:

```text
industrial-programming-lab/
├── 01-logic-building/                    # Decision making, loops, patterns, validation logic
├── 02-arrays-and-matrices/               # 1D/2D arrays, matrix transformations, traversals
├── 03-strings/                           # Character arrays, string algorithms, parsing, tokenization
├── 04-bit-manipulation/                  # Bitwise operations, masking, binary arithmetic
├── 05-memory-management/                 # Pointers, dynamic memory allocation (malloc/free), layouts
├── 06-structures-and-generic-programming/# Structs, unions, function pointers, C++ templates
├── 07-recursion/                         # Recursive functions, backtracking foundations, recurrence
├── 08-data-structure-implementation/     # Linked lists, stacks, queues, trees, custom data structures
├── 09-searching-and-sorting/             # Search & sort algorithms (linear, binary, merge, quick, etc.)
├── 10-core-java/                         # OOP basics, memory lifecycle, exception handling, packages
├── 11-java-collections/                  # Java Collections Framework, iterators, generics, comparators
├── 12-file-and-system-programming/       # File streams, binary I/O, serialization, OS interaction
├── 13-network-programming/               # Sockets, TCP/UDP client-server architectures, protocols
├── 14-multithreading/                    # Thread lifecycle, synchronization, locks, concurrency
├── 15-object-oriented-design/            # SOLID principles, polymorphism, inheritance, class modeling
├── 16-design-patterns-and-lld/           # Creational, structural, behavioral patterns & system LLD
├── daily-inbox/                          # Temporary staging area for newly coded programs
├── README.md                             # Repository documentation and index
├── PROGRESS.md                           # Real-time topic and completion tracker
└── ROADMAP.md                            # Comprehensive 16-phase learning sequence
```

---

## Technology Coverage

- **Languages**: C, C++, Java
- **Core Technical Domains**:
  - Programming fundamentals & algorithmic logic
  - Low-level pointer arithmetic and manual memory management
  - From-scratch data structure implementations
  - Algorithm design, searching, and sorting
  - Core Java language mechanics and internal architecture
  - Java Collections Framework and generic programming
  - File I/O, binary stream processing, and system-level interaction
  - Network programming with TCP/UDP socket communication
  - Multithreading, synchronization primitives, and concurrent execution
  - Object-Oriented Analysis and Design (OOAD) & SOLID principles
  - Gang of Four (GoF) design patterns and Low-Level Design (LLD)

---

## Daily Workflow

To ensure rapid manual coding while maintaining repository cleanliness:

1. **Code Manually**: Write and debug daily programs without distraction.
2. **Save to Staging**: Save new programs directly into `daily-inbox/` (e.g. `Program1.c`, `Program2.java`).
3. **Trigger Organization**: Instruct Antigravity to organize the daily batch.
4. **Automated Classification**: Programs are analyzed by primary conceptual learning objective.
5. **Standardized Placement**: Files are systematically renamed (`NN-descriptive-name.ext`) and moved to the appropriate concept and language folder.
6. **Progress Tracking**: `PROGRESS.md` is updated to reflect verified completed programs.
7. **Conventional Commits**: Changes are reviewed and committed using standardized commit conventions.

---

## Projects

Full-scale industrial projects are maintained in their own dedicated repositories to preserve modularity:

- **Custom Virtual File System (CVFS)**: Low-level file system simulation in C *(separate repository)*
- **Parking Lot Automation System**: Object-oriented and low-level system design in Java *(separate repository)*
- **Study Tracker**: Full-stack learning management application *(separate repository)*
- **Agrihort Connect**: Agricultural enterprise platform *(separate repository)*

*(Links to project repositories will be added as they are established.)*

---

## Repository Relationship

To keep scopes distinct and avoid unnecessary duplication:

- **`Conceptual_Programs`**: Practice repository for general C/C++/Java language fundamentals and older conceptual exercises.
- **`DSA`**: Interview-centric problem-solving repository focused on LeetCode, GeeksforGeeks, InterviewBit, and competitive programming challenges.
- **`industrial-programming-lab`**: Dedicated engineering lab for the *Logic Building with Industrial Project Development* batch, covering foundational logic through systems programming, Java internals, concurrency, and LLD.

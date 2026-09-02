# C Programming Practice

A personal workspace for practicing C, working through data structures and algorithms, and building problem solving skills for coding interviews and general programming challenges.

## Purpose

This repository is used to:

- Implement classic data structures and algorithms in C
- Practice problems from LeetCode and similar sources
- Build muscle memory for common patterns (two pointers, sliding window, recursion, dynamic programming, and more)
- Experiment with small C programs and concepts
- Then Use the combined Knowledge to Implement Already Available low level tools and derive insights.
#### Note : I finished Data Structures and Algorithms in a separate repository but this will as well be inclusive of those that matter but majorly this is meant for building already available(variants and modifications) low-level tools 

## Requirements

- GCC or Clang installed
- A Unix like terminal (macOS, Linux, or WSL on Windows)

Check your compiler is available:

```bash
gcc --version
```

## Project Structure

```
cprogramming/
├── build/          # Compiled binaries (ignored by git)
├── src/            # Source files (.c)
├── include/        # Header files (.h), if used
├── .gitignore
└── README.md
```

If your project is not yet organized this way, consider moving loose `.c` files into `src/` and compiling into `build/` to keep the repository root clean.

## Building and Running

Compile a single file:

```bash
gcc -o build/program_name src/program_name.c
./build/program_name
```

Compile with warnings enabled (recommended while learning):

```bash
gcc -Wall -Wextra -o build/program_name src/program_name.c
```

## Git Hygiene

Compiled binaries should never be committed to version control. This repository's `.gitignore` excludes:

```gitignore
build/
bin/
*.o
*.out
*.exe
```

If a binary was committed by mistake, untrack it without deleting it from disk:

```bash
git rm --cached path/to/binary
git commit -m "Stop tracking compiled binary"
```

## Notes

Each source file generally corresponds to one problem or one concept being practiced. File names should describe what is being solved (for example `two_sum.c`, `linked_list_reverse.c`) rather than generic names like `main.c`, to keep the history easy to search.

## License

Personal practice repository. No license applied.

# CPP-04 — Polymorphism and interfaces

Subtype polymorphism, virtual methods, deep copying, abstract classes, and interfaces. Part of my 42 C++ coursework.

## Exercises

Each directory is a separate program with its own Makefile and entry point.

| Directory | Focus | Executable |
| --- | --- | --- |
| [ex00](ex00/) | Animal, Dog, and Cat behavior | `Animal` |
| [ex01](ex01/) | Brain ownership and copying | `Brain` |
| [ex02](ex02/) | Abstract animal base class | `Abstract` |
| [ex03](ex03/) | Materia, characters, and interfaces | `Interface` |

Executable names above follow the current Makefiles, including names reused between exercises.

## Build and run

Requirements: Make and a C++ compiler supporting C++98. The Makefiles use `c++` with `-Wall -Wextra -Werror -std=c++98`.

From the repository root, build the first exercise:

```sh
make -C ex00
cd ex00
./Animal
```

Return to the repository root to build another exercise by replacing `ex00` with its directory. Run it from that directory when it uses relative data files. Inspect its `main.cpp` (or `tests.cpp` / `src/main.cpp`) for the included examples and expected arguments.

```sh
make -C ex00 clean   # Remove object files
make -C ex00 fclean  # Remove object files and executable
make -C ex00 re      # Rebuild
```

## Study notes

These are learning exercises, not a general-purpose library. Read the class headers alongside the implementations, then use the supplied entry points to explore the behavior. This README documents the repository contents and build commands; it does not claim an official evaluation result.

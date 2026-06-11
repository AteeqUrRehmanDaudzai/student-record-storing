# Student Record Storing

A simple C++ console application that demonstrates student-record storage with binary file streams. The program lets a user add, search, display, modify, delete, and review student records from a local data file.

The FLIR thermal flash-method analysis workflow has been separated into the `thermal-flash-analysis` branch so this branch can remain focused on the original student-record project.

## Features

- Add new student records.
- Search records by roll number.
- Display all stored records.
- Show records by class.
- Modify existing records.
- Delete records and review deleted entries.
- Display the size of the data file.

## Repository Contents

```text
.
|-- README.md
|-- LICENSE
|-- .gitignore
|-- OOP PROJECT PROPOSAL-1.docx
|-- ppppprrrrrrrrrojjectt - Copy.cpp
|-- ppppprrrrrrrrrojjectt.exe
`-- student.dat
```

## Build

The source file is written for an older Windows/Turbo C++ style environment and uses headers such as `conio.h` and `process.h`. If you compile it with a modern compiler, you may need to replace or remove those platform-specific calls.

Example with a compatible Windows C++ compiler:

```bash
g++ "ppppprrrrrrrrrojjectt - Copy.cpp" -o student-record.exe
```

If your compiler does not provide `conio.h`, remove `#include <conio.h>` and replace `getch()` with a standard alternative such as `std::cin.get()`.

## Run

```bash
./student-record.exe
```

The program reads and writes binary student records through a local data file named `stud.dat` in the running directory.

## Notes

- `student.dat` is kept as an existing sample data file from the original repository.
- The checked-in `.exe` is preserved to leave the original student-record project as-is.
- For new development, rebuilding from source is recommended instead of relying on the existing executable.

## License

This project is licensed under the Apache License 2.0. See `LICENSE` for details.

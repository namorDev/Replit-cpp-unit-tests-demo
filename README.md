# How to build and run
- `cd test`
- `cmake -S . -B build`
- `cmake --build build`
- `ctest --test-dir build`

# Lessons
1. What are Unit Tests?
2. Repl.it setup (structure, cmake, packages, build ...)
3. Create UT for calculator
4. Setup / Teardown
5. Create UT for TemperatureSensor
6. Dependency Injection (vs. Linker Substitution)
7. Test doubles introduction
8. Use Stub
9. Use Mock
10. Solitary vs. Sociable
11. TDD example
12. Boundary Value Analysis
13. Data driven testing (Value-parameterized test)
14. Code Coverage
15. Unit Tests in sca3
    - General structure
    - G/W/T
    - Some examples
    - Python Script Tests
16. Common problems
    - Testability
    - Abstraction
    - Run Fast
    - Overmocked
    - Private functions
    - DI only for testability
    - ...

# Zeitvertreib
- https://google.github.io/googletest/
- https://martinfowler.com/bliki/UnitTest.html
- 7 Grundsätze des Testen: https://www.german-testing-board.info/wp-content/uploads/2021/04/SoftwareQualityLab_Schulungsbeispiel042021.pdf
- Setup local C++ Dev-Environement: https://code.visualstudio.com/docs/cpp/config-mingw
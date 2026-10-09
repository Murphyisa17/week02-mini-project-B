# Week 2 Mini Project — Temperature Conversion App

## Purpose
Converts a temperature between Celsius and Fahrenheit from the terminal.

## Setup
Requires g++ with C++17 support. No external libraries needed.

## Input / Output Contract
**Input:** two lines
1. A numeric temperature
2. A unit letter: `C`, `c`, `F`, or `f`

The unit letter names the unit the temperature is currently in, so it also sets the conversion direction.

**Output:**
- On success: `<temperature> degrees <Original Unit> is <result> degrees <Target Unit>.`
- On an invalid unit (anything other than C/c/F/f): `Invalid unit`
- On a temperature that is not a number: `Invalid input`

### Examples
| Input | Output |
|---|---|
| `0` then `C` | `0 degrees Celsius is 32 degrees Fahrenheit.` |
| `32` then `F` | `32 degrees Fahrenheit is 0 degrees Celsius.` |
| `10` then `X` | `Invalid unit` |
| `abc` | `Invalid input` |

### Team's edge case
Non-numeric temperature (`abc`), which prints `Invalid input`. This is a different code path from an invalid unit: here the number never reads at all, so the unit is never checked.

## Build and Run
```bash
mkdir -p build
g++ -std=c++17 -Wall -Wextra -pedantic src/main.cpp -o build/app
./build/app
```

Compiles with no errors and no warnings.

See CONTRIBUTIONS.md for each teammembers work. Pull requests sometimes completed by different team members 

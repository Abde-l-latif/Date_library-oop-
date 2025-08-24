# Date_library
# 📅 C++ Date Library (`cls_date`)

A simple yet powerful C++ date handling library that provides utilities for 
working with dates, calendars, and time-related calculations.  

---

## ✨ Features

- ✅ Get and set **day, month, year**
- ✅ Handle **leap years**
- ✅ Convert between **days of year ↔ date**
- ✅ Print **dates, day names, month names**
- ✅ Generate **monthly and yearly calendars**
- ✅ Date arithmetic:
  - Add or subtract days, weeks, months, years, decades, centuries, millennia
  - Calculate difference between two dates
- ✅ Utility checks:
  - First/last day of month
  - Weekends / business days
  - Days until end of week, month, or year

---

## 📦 Usage Example

```cpp
#include "cls_date.h"

int main() {
    // Current system date
    cls_date today;
    today.print();  // Date is :  24/8/2025

    // Create a custom date
    cls_date myBirthday(15, 3, 2000);
    myBirthday.print_day_name(); // Day name : Wednesday

    // Add 10 days
    myBirthday.add_days(10);
    myBirthday.print(); // Date is : 25/3/2000

    // Compare dates
    if (cls_date::check_if_date1_before_date2(myBirthday, today)) {
        std::cout << "Birthday is before today!" << std::endl;
    }

    // Print a calendar
    today.print_calender_of_month();
    today.print_year_calender();

    // Days until end of year
    std::cout << "Days left in this year: " 
              << today.DaysUntilTheEndOfYear() << std::endl;
}

```
<hr>
⚙️ Installation
Copy cls_date.h into your project.

#include "cls_date.h" in your source file.

Compile with any standard C++ compiler (MSVC, g++, clang).

🛠️ Notes
Uses #pragma warning(disable : 4996) for MSVC unsafe time functions.

Internally uses time.h and C++ standard libraries.

Designed for learning and practice — not production ready yet.

Some methods can be optimized further for performance.


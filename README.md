# Advanced Secure ATM & Cybersecurity Log Simulator 🔐💳

A unique, console-based ATM Simulation System written in **C Language** that implements real-world cybersecurity concepts like **Brute Force Mitigation**, **Rate Limiting (Time Lockout)**, and a **Hidden Admin Panel** using core C concepts.
<br>
##  Key Features

*   **Brute Force Attack Mitigation:** Automatically detects 3 continuous failed PIN attempts and triggers a temporary security time lockout.
*   **Real-time Countdown Cooldown:** Freezes program execution using a programmatic timer when a potential threat is detected.
*   **Hidden Admin Master Dashboard:** Entering a secret account number (`9999`) with a master key opens the Bank Manager Panel to check balances or unblock locked accounts.
*   **Secure Core ATM Logic:** Includes classic operations like secure login authentication, balance inquiry, and cash withdrawal management.
<br>

##  C Concepts Utilized

*   **Structures & Arrays:** For managing multi-user mock databases cleanly without complex storage mechanisms.
*   **Control Flow (Nested Loops & Switch Cases):** To drive the interactive user terminal menus and rate-limiting functionality.
*   **System Functions (`sleep()`):** Integrated for executing time delay security policies directly through code.
<br>

##  How to Run

1. Open your terminal or VS Code.
2. Compile the code using GCC:
   ```bash
   gcc atm.c -o atm

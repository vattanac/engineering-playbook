# Peterson's Algorithm — Interactive Visualizer

> A self-contained, interactive HTML visualizer that demonstrates Peterson's Algorithm for mutual exclusion in concurrent programming — step by step, with live state tracking and event logging.

---

## 📌 What is Peterson's Algorithm?

**Peterson's Algorithm** is a classic software-based solution to the **mutual exclusion problem** in concurrent programming. It ensures that two processes never enter a **critical section** at the same time — without requiring any special hardware instructions or OS support.

It was proposed by **Gary L. Peterson in 1981** and remains a foundational concept in operating systems, distributed systems, and concurrent programming education.

---

## 🧠 Core Concepts

### The Problem
When two processes (P0 and P1) share a resource (e.g., a file, counter, or memory region), simultaneous access causes **race conditions** and **data corruption**. We need a mechanism to guarantee:

- Only **one process** executes in the critical section at a time
- No process waits **forever** (no starvation)
- No process is blocked when the resource is **free**

### The Solution — Three Variables

| Variable | Type | Purpose |
|---|---|---|
| `flag[0]` | boolean | P0 signals it wants to enter the critical section |
| `flag[1]` | boolean | P1 signals it wants to enter the critical section |
| `turn` | integer (0 or 1) | Indicates whose turn it is when both want in simultaneously |

### Pseudocode

```
// For Process Pi (where j = 1 - i):

flag[i] = true          // Signal interest
turn = j                // Yield courtesy to the other process

while (flag[j] && turn == j) {
    // Busy-wait (spin-lock)
}

// ★ Critical Section ★
// ... perform shared work ...

flag[i] = false         // Release — no longer interested
```

### How It Works — Step by Step

```
Step 1: P0 sets flag[0] = true      → "I want to enter"
Step 2: P0 sets turn = 1            → "But you go first, P1"
Step 3: P0 checks while condition:
          - if flag[1] == false → P1 not interested → P0 enters immediately
          - if flag[1] == true AND turn == 1 → P0 waits
Step 4: P0 enters Critical Section
Step 5: P0 sets flag[0] = false     → "I'm done, P1 can go"
```

The **key insight**: a process only waits when **both** conditions are true simultaneously — the other process wants in AND it is the other's turn. Breaking either condition allows immediate entry.

---

## ✅ Algorithm Guarantees

### 1. Mutual Exclusion 🔒
Both processes **cannot** be in the critical section simultaneously. The `turn` variable acts as a tiebreaker — when both raise their flags, only one can win.

**Proof sketch:** For both to be in CS, the while-loop condition must be false for both. But `turn` can only be 0 or 1, meaning one process must still be waiting.

### 2. Progress ⚡
If only one process wants to enter (flag[j] == false), it enters **immediately** without waiting. No unnecessary blocking occurs.

### 3. Bounded Waiting ⚖️
After P0 exits and sets `flag[0] = false`, if P1 is waiting, P1 will enter on its very next attempt. A process waits **at most one turn** — no starvation is possible.

---

## 🖥️ About the Visualizer

### File
```
petersons_algorithm.html
```

A single, **self-contained HTML file** — no dependencies, no build step, no server required. Open directly in any modern browser.

### Features

| Feature | Description |
|---|---|
| **Shared Variables Panel** | Live display of `flag[0]`, `flag[1]`, `turn`, and violation counter with pulse animations |
| **Process Cards** | P0 (blue) and P1 (amber) each show their current code step highlighted |
| **Status Badges** | Real-time status: Idle / Wanting In / Blocked / ★ In Critical |
| **Event Log** | Color-coded log of every action taken by each process |
| **Execution Timeline** | Chip-based timeline showing the interleaving sequence |
| **Step Mode** | Advance one action at a time for careful analysis |
| **Auto-run Mode** | Continuous simulation with adjustable speed (1x–5x) |
| **Reset** | Return to initial state at any time |
| **Violation Counter** | Detects and counts any mutual exclusion violations (should always be 0) |

### How to Use

1. Open `petersons_algorithm.html` in a browser
2. Click **▶ Step** to advance one action at a time
3. Watch `flag[0]`, `flag[1]`, and `turn` change in the Shared Variables panel
4. Observe which process enters the Critical Section (★)
5. Click **⟳ Auto-run** to simulate continuous interleaving
6. Use the **Speed slider** to slow down or speed up the simulation
7. Click **↺ Reset** to start over

---

## 📁 File Structure

```
peterson-algorithm/
├── petersons_algorithm.html    # Main interactive visualizer (standalone)
└── README.md                   # This documentation file
```

---

## ⚠️ Limitations

Peterson's Algorithm is a **theoretical/educational** solution. In practice:

- It assumes **sequential consistency** of memory — modern CPUs and compilers may reorder instructions, breaking the algorithm without memory barriers
- It only works for **exactly 2 processes** — for N processes, use Lamport's Bakery Algorithm
- It uses **busy-waiting (spin-lock)** — wastes CPU cycles while waiting
- Modern operating systems use hardware primitives (test-and-set, compare-and-swap) or OS-level semaphores/mutexes instead

---

## 📚 Further Reading

- Gary L. Peterson — *"Myths About the Mutual Exclusion Problem"* (1981)
- Silberschatz, Galvin, Gagne — *Operating System Concepts* (Chapter: Process Synchronization)
- Tanenbaum — *Modern Operating Systems* (Chapter: Mutual Exclusion)
- [Wikipedia — Peterson's Algorithm](https://en.wikipedia.org/wiki/Peterson%27s_algorithm)

---

## 👤 Author

**Sim Vattanac**
MSDE Cohort 4 · Systems & Concurrent Programming
📧 vattanacsim99@gmail.com

---

*Created for educational purposes — OS & Concurrent Programming coursework.*

# Process Scheduling Simulation

This project is a simple C program that simulates process scheduling using Completion Time (CT), Turnaround Time (TAT), and Waiting Time (WT) calculations for a set of processes.

## Description

The program calculates the following for three processes:
- **Completion Time (CT)**: The time at which a process completes its execution.
- **Turnaround Time (TAT)**: The total time taken from arrival to completion for a process.
- **Waiting Time (WT)**: The total time a process has been in the ready queue waiting to get executed.

## Processes
- **P1**: Burst Time = 30
- **P2**: Burst Time = 5
- **P3**: Burst Time = 5

### Arrival Time (AT)
- All processes arrive at time 0.

## Calculations

1. **Completion Time (CT)**:
   - Calculated by accumulating the burst times of the processes.

2. **Turnaround Time (TAT)**:
   - Calculated as `CT - AT`.

3. **Waiting Time (WT)**:
   - Calculated as `TAT - BT`.

## Output

The program displays a table with the following information:
- Process ID
- Arrival Time (AT)
- Burst Time (BT)
- Completion Time (CT)
- Turnaround Time (TAT)
- Waiting Time (WT)

It also calculates and displays the average Turnaround Time and average Waiting Time for the processes.

## Requirements

- A C compiler (e.g., GCC)
- `conio.h` library (for `clrscr()` and `getch()`, which may not be available in all environments)

## How to Compile and Run

1. Clone the repository:
   ```bash
   git clone https://github.com/<username>/process-scheduling.git
   cd process-scheduling

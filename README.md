# montecarlosims1
testing out and learning applications of monte carlo in c++
# Monte Carlo Bomb Walk Simulation
This project implements a stochastic simulation in C++ to analyze random walk dynamics.

### Mathematical Logic
* **Stochastic Process**: The simulation models a 2D random walk where each step is determined by a random probability distribution.
* **Termination Condition**: The "bomb" logic acts as a boundary condition or a trigger that stops the simulation based on specific spatial coordinates.
* **Analysis**: Used to observe convergence behaviors and path distributions in a discrete grid.

### How to Run
```bash
g++ bombwalk.cpp -o bombwalk
./bombwalk
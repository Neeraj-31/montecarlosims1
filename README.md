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
```

## Added Notebook: S&P 500 SVM Strategy
Added a notebook under `spy-analysis/ML/sp500svm.ipynb` implementing the following:
* Data download via `yfinance` for SPY (2021-03-09 to 2026-03-09)
* Feature engineering: Open/Close, High/Low, SMA_10, SMA_30, RSI, volatility, volume change
* SVM model training with `GridSearchCV` and hyperparameter tuning (C, kernel, gamma)
* Backtesting with cumulative returns, Sharpe ratio, max drawdown, and comparison to buy-and-hold
* Plot output for strategy vs buy-and-hold results

### Notes
Run the notebook in a Python environment with required libraries installed (`scikit-learn`, `pandas`, `numpy`, `matplotlib`, `yfinance`).
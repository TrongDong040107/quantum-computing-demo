# Quantum Computing Algorithms – Dong Phu Trong

This repository contains practical implementations of foundational quantum algorithms using Qiskit, with additional numerical modeling in quantitative finance.

The focus is on:
- Near-term quantum computing (NISQ era)
- Hybrid quantum-classical optimization
- Applied mathematical modeling

---

## 🔬 Quantum Algorithms Implemented

### 1️⃣ Grover's Search Algorithm
- Demonstrates amplitude amplification
- Marks target state using phase oracle
- Includes measurement statistics and success probability analysis
- Simulated on Qiskit backend

File: `grover_demo.py`

---

### 2️⃣ Variational Quantum Eigensolver (VQE)
- Hybrid quantum-classical optimization
- Parameterized ansatz circuit
- Ground state energy estimation of custom Hamiltonian
- Exact diagonalization comparison
- Energy landscape visualization

File: `vqe_demo.py`

---

## ⚙️ Technologies

- Python 3.10+
- Qiskit
- NumPy
- SciPy
- Matplotlib

---

## ▶️ How to Run

Install dependencies:

pip install qiskit numpy scipy matplotlib

Run Grover:

python grover_demo.py

Run VQE:

python vqe_demo.py

---

# 📈 Classical Modeling Extension: Monte Carlo Option Pricing

To complement quantum simulations, this repository includes a classical Monte Carlo implementation for European call option pricing under the Black–Scholes framework.

This demonstrates:

- Risk-neutral valuation
- Geometric Brownian Motion simulation
- Analytical Black–Scholes validation
- Convergence rate analysis (O(1/√N))
- 95% confidence interval estimation

File: `option_pricing.py`

---

## Numerical Results

Parameters:
- S₀ = 100
- K = 100
- r = 5%
- σ = 20%
- T = 1 year

Black–Scholes price: 10.45  
Monte Carlo price (1e6 paths): 10.43  
Absolute error: 0.02  
95% Confidence Interval: [10.40, 10.46]

---

## 🚀 Future Work

- QAOA implementation
- Noise modeling and error mitigation
- Hardware backend experiments (IBM Quantum)
- Quantum optimization research

---

## 👤 Author

Dong Phu Trong  
Electronics & Telecommunications Engineering – HUST  
Research Interests: Quantum Computing | Optimization | Applied Mathematics

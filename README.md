# Quantum Computing Algorithms – Dong Phu Trong

This repository contains practical implementations of foundational quantum algorithms using Qiskit.  
The focus is on near-term quantum computing (NISQ era) and hybrid quantum-classical optimization techniques.

---

## Overview

Quantum computing introduces new computational paradigms based on quantum mechanics principles such as superposition and entanglement.  

This project explores core quantum algorithms and their circuit-level implementation.

---

## Implemented Algorithms

### 1️⃣ Grover's Search Algorithm
- Demonstrates amplitude amplification
- Provides quadratic speedup for unstructured search problems
- Built using Qiskit quantum circuits
- Includes measurement probability analysis

File: `grover_demo.py`

---

### 2️⃣ Variational Quantum Eigensolver (VQE)
- Hybrid quantum-classical optimization algorithm
- Uses parameterized ansatz
- Estimates ground state energy of a Hamiltonian
- Demonstrates NISQ-compatible approach

File: `vqe_demo.py`

---

## Technologies Used

- Python 3.10+
- Qiskit
- NumPy
- Matplotlib

---

## How to Run

Install dependencies:

pip install qiskit numpy matplotlib

Run Grover demo:

python grover_demo.py

Run VQE demo:

python vqe_demo.py

---

## Future Work

- QAOA implementation
- Noise simulation
- Quantum optimization experiments
- Quantum machine learning exploration

---
# Monte Carlo Option Pricing

This project compares Monte Carlo simulation with the Black-Scholes analytical solution for European call option pricing.
A numerical study of European call option pricing under the Black–Scholes framework using risk-neutral Monte Carlo simulation.

## Methods
- Risk-neutral Geometric Brownian Motion simulation
- Analytical Black-Scholes formula
- Error comparison
-  Empirical convergence rate analysis (O(1/sqrt(N)))

## Technologies
- Python
- NumPy
- SciPy

## Motivation
Beyond quantum computing demonstrations, this extension highlights practical quantitative finance modeling. 

The project demonstrates:
- Risk-neutral valuation
- Stochastic simulation
- Convergence analysis
- Numerical approximation of analytical models

These are core skills in quantitative trading, derivatives pricing, and risk management.
## Results

Parameters:
S0 = 100
K = 100
r = 5%
sigma = 20%
T = 1 year

Black–Scholes price: 10.45  
Monte Carlo price (1e6 paths): 10.43  
Absolute error: 0.02  

95% Confidence Interval:
[10.40, 10.46]


## Author

Dong Phu Trong  
Engineering Student – Electronics & Telecommunications  
Research Interest: Quantum Computing | Optimization | Applied Mathematics

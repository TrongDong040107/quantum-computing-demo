# Quantum Computing Algorithms – Dong Phu Trong

This repository presents structured implementations of foundational quantum algorithms using Qiskit, with additional numerical modeling for comparison and validation.

The work emphasizes mathematical formulation, circuit-level construction, and hybrid quantum-classical optimization in the NISQ era.

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
## Mathematical Background

### Grover Operator

The Grover iteration is defined as:

G = (2|s><s| − I) O

where:
|s> is the uniform superposition state  
O is the oracle operator  

This produces amplitude amplification of the marked state.
The diffusion operator (2|s><s| − I) performs reflection about the mean amplitude, which enables quadratic speedup over classical search.

---

### Variational Quantum Eigensolver (VQE)

The objective function minimized in VQE is:

E(θ) = ⟨ψ(θ)| H |ψ(θ)⟩

where:
ψ(θ) is a parameterized quantum state  
H is the Hamiltonian operator  

The optimization is performed using classical search over parameter space. 
The variational principle guarantees that the estimated energy is an upper bound to the true ground state energy.
## Project Structure

quantum-algorithms/
│
├── grover_demo.py
├── vqe_demo.py
├── option_pricing.py
└── README.md

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
While the primary focus is quantum algorithms, classical stochastic modeling is included to demonstrate hybrid computational reasoning and numerical validation skills.

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
Research Interests: Quantum Computing | Hybrid Optimization | Applied Mathematics

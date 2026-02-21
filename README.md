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

## Author

Dong Phu Trong  
Engineering Student – Electronics & Telecommunications  
Research Interest: Quantum Computing | Optimization | Applied Mathematics

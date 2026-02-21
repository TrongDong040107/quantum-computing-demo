import numpy as np
import matplotlib.pyplot as plt

from qiskit import QuantumCircuit
from qiskit.primitives import Estimator
from qiskit.circuit import Parameter
from qiskit.quantum_info import SparsePauliOp
from numpy.linalg import eigvals

# -----------------------------
# Define Hamiltonian: H = Z0 + Z1 + X0X1
# -----------------------------
hamiltonian = SparsePauliOp.from_list([
    ("ZI", 1.0),
    ("IZ", 1.0),
    ("XX", 1.0)
])

# Convert to matrix form for exact solution
H_matrix = hamiltonian.to_matrix()
exact_eigenvalues = eigvals(H_matrix)
exact_ground_energy = np.min(exact_eigenvalues.real)

# -----------------------------
# Parameterized Ansatz
# -----------------------------
theta = Parameter("θ")

qc = QuantumCircuit(2)
qc.ry(theta, 0)
qc.ry(theta, 1)
qc.cx(0, 1)

estimator = Estimator()

def cost_function(param_value):
    job = estimator.run(qc, hamiltonian, [param_value])
    result = job.result()
    return result.values[0]

# -----------------------------
# Classical Optimization (Grid Search)
# -----------------------------
theta_vals = np.linspace(0, 2*np.pi, 100)
energy_vals = []

for val in theta_vals:
    energy_vals.append(cost_function(val))

energy_vals = np.array(energy_vals)

min_energy = np.min(energy_vals)
optimal_theta = theta_vals[np.argmin(energy_vals)]

# -----------------------------
# Results
# -----------------------------
print("Exact Ground Energy:", exact_ground_energy)
print("VQE Minimum Energy:", min_energy)
print("Optimal theta:", optimal_theta)
print("Absolute Error:", abs(min_energy - exact_ground_energy))

# -----------------------------
# Plot Energy Landscape
# -----------------------------
plt.plot(theta_vals, energy_vals)
plt.axhline(y=exact_ground_energy, linestyle='--')
plt.xlabel("Theta")
plt.ylabel("Energy")
plt.title("VQE Energy Landscape")
plt.show()

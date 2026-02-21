from qiskit import QuantumCircuit, Aer, transpile
from qiskit.visualization import plot_histogram
import numpy as np

# Create 2-qubit Grover circuit
grover = QuantumCircuit(2, 2)

# Step 1: Superposition
grover.h([0, 1])

# Step 2: Oracle (mark |11>)
grover.cz(0, 1)

# Step 3: Diffuser
grover.h([0, 1])
grover.x([0, 1])
grover.h(1)
grover.cx(0, 1)
grover.h(1)
grover.x([0, 1])
grover.h([0, 1])

# Measurement
grover.measure([0, 1], [0, 1])

# Simulate
backend = Aer.get_backend("qasm_simulator")
compiled = transpile(grover, backend)
job = backend.run(compiled, shots=1024)
result = job.result()

counts = result.get_counts()
success_prob = counts.get("11", 0) / 1024

print(grover.draw())
print("Measured distribution:", counts)
print("Success probability:", success_prob))

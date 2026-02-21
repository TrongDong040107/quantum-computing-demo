from qiskit import QuantumCircuit

# Create 2-qubit circuit
grover = QuantumCircuit(2)
grover.h([0, 1])

# Oracle (mark |11>)
grover.cz(0, 1)

# Diffuser
grover.h([0, 1])
grover.x([0, 1])
grover.h(1)
grover.cx(0, 1)
grover.h(1)
grover.x([0, 1])
grover.h([0, 1])

print(grover.draw())

import numpy as np
from scipy.stats import norm

# Reproducibility
np.random.seed(42)

# -----------------------------
# Parameters
# -----------------------------
S0 = 100        # initial stock price
K = 100         # strike price
r = 0.05        # risk-free rate
sigma = 0.2     # volatility
T = 1           # time to maturity (years)
N = 100000      # number of simulations

# -----------------------------
# Monte Carlo Simulation
# -----------------------------
Z = np.random.standard_normal(N)

ST = S0 * np.exp((r - 0.5 * sigma**2) * T + sigma * np.sqrt(T) * Z)
payoff = np.maximum(ST - K, 0)

mc_price = np.exp(-r * T) * np.mean(payoff)

# Standard error & 95% confidence interval
std_error = np.std(payoff) / np.sqrt(N)
conf_low = mc_price - 1.96 * std_error
conf_high = mc_price + 1.96 * std_error

# -----------------------------
# Black–Scholes Analytical Price
# -----------------------------
d1 = (np.log(S0 / K) + (r + 0.5 * sigma**2) * T) / (sigma * np.sqrt(T))
d2 = d1 - sigma * np.sqrt(T)

bs_price = S0 * norm.cdf(d1) - K * np.exp(-r * T) * norm.cdf(d2)

# -----------------------------
# Error
# -----------------------------
abs_error = abs(mc_price - bs_price)

# -----------------------------
# Output
# -----------------------------
print("Monte Carlo Price:", mc_price)
print("Black–Scholes Price:", bs_price)
print("Absolute Error:", abs_error)
print("95% Confidence Interval:", (conf_low, conf_high))

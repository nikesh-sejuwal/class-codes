a.
pip install pandas scikit-learn

b.
import pandas as pd

# Sample dataset
data = {
    'Feature1': [10, 20, 30, 40, 50],
    'Feature2': [100, 200, 300, 400, 500]
}

df = pd.DataFrame(data)
print("Original Data:\n", df)

c.
from sklearn.preprocessing import MinMaxScaler

# Create scaler instance
minmax_scaler = MinMaxScaler()

# Apply min-max normalization
minmax_normalized = minmax_scaler.fit_transform(df)

# Convert to DataFrame for readability
df_minmax = pd.DataFrame(minmax_normalized, columns=df.columns)
print("\nMin-Max Normalized Data:\n", df_minmax)

d.
from sklearn.preprocessing import StandardScaler

# Create scaler instance
zscore_scaler = StandardScaler()

# Apply z-score normalization
zscore_normalized = zscore_scaler.fit_transform(df)

# Convert to DataFrame
df_zscore = pd.DataFrame(zscore_normalized, columns=df.columns)
print("\nZ-Score Normalized Data:\n", df_zscore)

e.
pip install mlxtend

f.
import pandas as pd
from mlxtend.preprocessing import TransactionEncoder
from mlxtend.frequent_patterns import apriori, association_rules

# Sample dataset: list of transactions
dataset = [
    ['milk', 'bread', 'butter'],
    ['bread', 'butter'],
    ['milk', 'bread'],
    ['milk', 'butter'],
    ['bread', 'butter'],
]

# Convert to one-hot encoded DataFrame
te = TransactionEncoder()
te_ary = te.fit(dataset).transform(dataset)
df = pd.DataFrame(te_ary, columns=te.columns_)

# Apply Apriori
frequent_itemsets = apriori(df, min_support=0.6, use_colnames=True)

# Generate association rules
rules = association_rules(frequent_itemsets, metric="lift", min_threshold=1)

print("Frequent Itemsets:\n", frequent_itemsets)


g.
from mlxtend.frequent_patterns import fpgrowth

# Reusing the same one-hot encoded DataFrame from above

# Apply FP-Growth
frequent_itemsets_fp = fpgrowth(df, min_support=0.3, use_colnames=True)

# Generate association rules
rules_fp = association_rules(frequent_itemsets_fp, metric="lift", min_threshold=1)

print("Frequent Itemsets (FP-Growth):\n", frequent_itemsets_fp)
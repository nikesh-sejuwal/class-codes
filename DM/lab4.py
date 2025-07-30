pip install numpy matplotlib scikit-learn scikit-learn-extra

=======================================================================

import numpy as np
import matplotlib.pyplot as plt
from sklearn.cluster import KMeans
from sklearn.datasets import make_blobs

# Generate sample data
X, _ = make_blobs(n_samples=300, centers=4, random_state=42)

# K-Means
kmeans = KMeans(n_clusters=4, random_state=42)
labels = kmeans.fit_predict(X)

# Plotting
plt.scatter(X[:, 0], X[:, 1], c=labels, cmap='viridis')
plt.scatter(kmeans.cluster_centers_[:, 0], kmeans.cluster_centers_[:, 1], s=200, color='red', marker='X')
plt.title('K-Means Clustering')
plt.show()

=========================================================================================================

from sklearn_extra.cluster import KMedoids

# K-Medoids
kmedoids = KMedoids(n_clusters=4, random_state=42)
labels = kmedoids.fit_predict(X)

# Plotting
plt.scatter(X[:, 0], X[:, 1], c=labels, cmap='Accent')
plt.scatter(kmedoids.cluster_centers_[:, 0], kmedoids.cluster_centers_[:, 1], s=200, color='black', marker='D')
plt.title('K-Medoids Clustering')
plt.show()

===============================================================================================================

from sklearn.cluster import AgglomerativeClustering

# Hierarchical
agglo = AgglomerativeClustering(n_clusters=4)
labels = agglo.fit_predict(X)

# Plotting
plt.scatter(X[:, 0], X[:, 1], c=labels, cmap='Set1')
plt.title('Hierarchical Clustering (Agglomerative)')
plt.show()

================================================================================================================

from sklearn.cluster import DBSCAN
from sklearn.preprocessing import StandardScaler

# Normalize data
X_scaled = StandardScaler().fit_transform(X)

# DBSCAN
dbscan = DBSCAN(eps=0.5, min_samples=5)
labels = dbscan.fit_predict(X_scaled)

# Plotting
plt.scatter(X_scaled[:, 0], X_scaled[:, 1], c=labels, cmap='tab10')
plt.title('DBSCAN Clustering')
plt.show()
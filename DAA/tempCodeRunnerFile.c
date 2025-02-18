int q = partition(A, l, r);
    quicksort(A, l, q - 1);
    quicksort(A, q + 1, r);
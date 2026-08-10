for (int i = 0; i < k; i++)
    {
            swap(a[i],a[i+1]);
    }
    for (int i = k; i < n; i++)
    {
        swap(a[i],a[n-1]);
    }
    
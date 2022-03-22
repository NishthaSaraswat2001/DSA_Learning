void printKMax(int arr[], int n, int k){
    deque<int> q;   // Monotonically Increasing Queue
    for (auto i = 0; i < n; ++i) {
        while (!q.empty() && arr[i] > q.back()) {   // Make room for arr[i]
            q.pop_back();           // Remove smaller elements from the back
        }

        q.emplace_back(arr[i]);         // Add the current maximum arr[i]
        if (i+1 >= k) {
            cout << q.front() << ' ';   // Print the maximum at the front
            if (arr[i+1-k] >= q.front()) {
                q.pop_front();          // Remove the maximum from the front
            }
        }
    }
    cout << '\n';
}
  
  bool isFeasible(const vector<int>& stations, int k, double d) {
    int count = 0;
    for (int i = 1; i < stations.size(); ++i) {
        double dist = stations[i] - stations[i - 1];
        count += static_cast<int>(ceil(dist / d)) - 1;
        if (count > k) {
            return false;
        }
    }
    return count <= k;
}

   double findSmallestMaxDist(vector<int>& stations, int k) {
    sort(stations.begin(), stations.end());
    double left = 0.0;
    double right = stations.back() - stations.front();
    double epsilon = 1e-7;

    while (right - left > epsilon) {
        double mid = left + (right - left) / 2;
        if (isFeasible(stations, k, mid)) {
            right = mid;
        } else {
            left = mid;
        }
    }

    return round(right * 100.0) / 100.0;
}

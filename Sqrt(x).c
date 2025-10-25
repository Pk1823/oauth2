int mySqrt(int x) {
    if (x == 0 || x == 1) 
        return x;  // √0 = 0, √1 = 1

    int left = 1, right = x / 2, ans = 0;

    while (left <= right) {
        long long mid = (left + right) / 2;  // use long long to prevent overflow
        long long square = mid * mid;

        if (square == x)
            return mid;        // perfect square
        else if (square < x) { // move right
            ans = mid;         // store last valid result
            left = mid + 1;
        } else {
            right = mid - 1;   // move left
        }
    }

    return ans;  // floor value of sqrt(x)
}

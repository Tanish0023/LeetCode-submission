class Solution {
    public int mySqrt(int x) {
        if (x < 2) return x; // sqrt(0) = 0, sqrt(1) = 1

        int left = 0, right = x;
        int result = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // To avoid integer overflow, use long for mid * mid
            long square = (long) mid * mid;

            if (square == x) {
                return mid;
            } else if (square < x) {
                result = mid; // this could be the floor of sqrt(x)
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return result;
    }
}
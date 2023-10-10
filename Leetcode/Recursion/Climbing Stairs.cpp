class Solution {
public:
    int climbStairs(int n) {
        // Base cases
        if (n == 0) return 0; // No steps to climb
        if (n == 1) return 1; // Only one way (1 step)
        if (n == 2) return 2; // Two ways (1 step + 1 step or 2 steps)

        // Recursive case: For n steps, you can either take 1 step or 2 steps
        // So, the total ways for n steps are the sum of ways for (n-1) steps and (n-2) steps.
        return climbStairs(n - 1) + climbStairs(n - 2);
    }
};

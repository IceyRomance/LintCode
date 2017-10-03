class Solution {
public:
    /*
     * @param n: an integer
     * @return: an ineger f(n)
     */
    int fibonacci(int n) {
        // write your code here
    if (n <= 1) {
		return n;
	}
	int n0 = 0, n1 = 1, n2 = 1;
	for (int i = 2; i<n; ++i)
	{
		n0 = n1;
		n1 = n2;
		n2 = n0 + n1;
	}

	return n2;
    }
};
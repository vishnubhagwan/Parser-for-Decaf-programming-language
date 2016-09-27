/** 

 * Prints maxPrimes number of primes solely using add and subtract (no division).

 * 

 * @author Tyler Bletsch

 */

class PrimeByArithmetic {

	/** Print the fact that the ith prime is p */	

	private static void printPrime(int i, int p) {

		IO.putString("Prime[");

		IO.putInt(i);

		IO.putString("] = ");

		IO.putInt(p);

		IO.putString("\n");

	}

	

	public static void main(String[] args) {

		int maxPrimes = 1300000; // Total to find

		int prime[] = new int[maxPrimes]; // Actual primes

		int factor[] = new int[maxPrimes]; // Prime factors to be decremented each iteration

		

		int numPrimes; // The current number of primes found

		int current; // The number under inspection

		

		// Base case

		prime[0] = 2;

		factor[0] = prime[0];

		numPrimes=1;

		current=2;

		

		// Print base prime

		printPrime(0,prime[0]);

		

		while (numPrimes < maxPrimes) {

			boolean bPrime = true;

			current = current + 1;

			

			// for i = 0 .. numPrimes-1

			int i=0;

			while (i<numPrimes) {

				factor[i] = factor[i] - 1;

				if (factor[i] == 0) {

					factor[i] = prime[i]; // If a factor is zero, then current is divisible by factor[i], so not prime

					bPrime = false;

				}

				i = i + 1;

			}

			

			// If we survived that loop with bPrime intact, then current is prime

			if (bPrime) {

				printPrime(numPrimes,current);

				prime[numPrimes] = current;

				factor[numPrimes] = current;

				numPrimes = numPrimes + 1;

			}

		}

	}

}


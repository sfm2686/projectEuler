import java.util.Scanner;

class problem14 {

	private static int getNext(long n, int count){
		if ( n != 1 ){
			if ( n % 2 == 0 )
				return getNext(n/2, count+1);
			else
				return getNext(3*n+1, count+1);
		}
		else
			return count + 1;
	}

	private static long start(long limit){
		int temp = 0;
		int count = 0;
		long num = 0;
		for ( long i = limit - 1; i > 1; i -- ){
			if ( i % 2 != 0 ){
				temp = getNext(i, temp);
				if ( temp > count ){
					count = temp;
					num = i;
				}
				temp = 0;
			}
		}
		return num;
	}

	public static void main(String[] args){
		Scanner reader = new Scanner(System.in);
		System.out.print(
		"Enter a limit to find the longest chain under: ");
		long limit = reader.nextLong();

		long startTime = System.currentTimeMillis();
		long result = start(limit);
		long endTime   = System.currentTimeMillis();
		long totalTime = endTime - startTime;
		System.out.println("Total time: " + totalTime);

		System.out.println(
		"Initial int for longest chain is " 
		+ result);
	}
}

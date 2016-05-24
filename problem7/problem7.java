import java.util.Scanner;

public class problem7 {

	public problem7(){}

	public static boolean isPrime(int num){
		if ( num != 2 && num % 2 == 0 )
			return false;
		for ( int i = 2; i < (num / 2) + 1; i ++ )
			if ( num % i == 0 )
				return false;
		//Question treats 1 is a non-prime number
		if ( num == 1 )
			return false;
		return true;
	}

	public static int getPrime(int limit){
		int count = 0;
		int i = 0;

		while ( count != limit ){
			if ( isPrime(i) )
				count ++;
			i ++;
		}
		
		return i - 1;
	}

	public static void main(String[] args){
		Scanner reader = new Scanner(System.in);
		System.out.print("Enter a limit: ");
		int num = reader.nextInt();
		System.out.println("The largest prime in " + num +
		" is " + getPrime(num));
	}
}

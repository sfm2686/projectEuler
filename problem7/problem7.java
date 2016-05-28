import java.util.Scanner;
import java.lang.*;

public class problem7 {

	public problem7(){}

	/**
	optimized function to determine if a number
	is prime or not.
	*/
	public static boolean isPrime(int num){
		if ( num == 1 )
			return false;
		if ( num < 4 )
			return true;
		if ( num % 2 == 0 )
			return false;
		if ( num < 9 )
			return true;
		if ( num % 3 == 0 )
			return false;
		for ( int i = 5; i <= Math.sqrt(num); i += 6 ){
			if ( num % i == 0 )
				return false;
			if ( num % (i + 2) == 0 )
				return false;
		}
		return true;
	}

	public static int getPrime(int limit){
		int count = 1;
		int i = 1;

		while ( count != limit ){
			if ( isPrime(i) )
				count ++;
			i += 2;
		}
		
		return i - 1;
	}

	public static void main(String[] args){
		Scanner reader = new Scanner(System.in);
		System.out.print("Enter a limit: ");
		int num = reader.nextInt();
		System.out.println("The " + num + "th prime is " 
		+ getPrime(num));
	}
}

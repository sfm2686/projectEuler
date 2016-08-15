import java.util.Scanner;
import java.math.BigInteger;

public class problem25 {

	public problem25(){;}

	private int howManyDigits(BigInteger n){
		int count = 0;
		while ( !n.equals(BigInteger.ZERO) ){
			n = n.divide(BigInteger.TEN);
			count ++;
		}
		return count;
	}

	public int generateFib(int limit){
		//index counter
		int count = 2;

		//start generating the fib seq
		//p1 = previous number
		//p2 = second previous number
		BigInteger p1, p2, i = BigInteger.ONE;
		p1 = BigInteger.ONE;
		p2 = BigInteger.ONE;
		while (howManyDigits(i) != limit){
			i = p1.add(p2);
			p2 = p1;
			p1 = i;
			count ++;
		}
		return count;
	}

	public static void main(String[] args){
		problem25 ob = new problem25();
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the number of digits you want to generate fib seq until: " );
		int c = sc.nextInt();
		System.out.println("The index number that has "
		+ c + " digits is: " + ob.generateFib(c) );

	}
}

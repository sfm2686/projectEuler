import java.util.*;
import java.math.*;

class problem16 {


	public static void main(String[] args){
		BigInteger sum, pwr;
		pwr = BigInteger.valueOf(2);
		pwr = pwr.pow(1000);
		sum = BigInteger.ZERO;
		int s = 0;

		System.out.println("Value of 2^1000 is: " + pwr);

		while ( !pwr.equals(BigInteger.ZERO) ){
			s = pwr.mod(BigInteger.TEN).intValue();
			sum = sum.add(BigInteger.valueOf(s));
			pwr = pwr.divide(BigInteger.TEN);
		}

		System.out.println("The sum is: " + sum);
	}
}

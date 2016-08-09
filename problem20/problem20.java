import java.math.BigInteger;
import java.util.Scanner;
import java.util.ArrayList;

public class problem20{

	private BigInteger n;
	private ArrayList<Integer> sumArray;
	private int sum;

	public problem20(){
		this.n = BigInteger.ONE;
		this.sumArray = new ArrayList();
		this.sum = 0;
	}

	public void factorial(int lim){
		// this.n should == zero
		for (int i = lim; i >= 1; i --){
			this.n = 
			this.n.multiply(BigInteger.valueOf(i));
		}
	}

	public void toArray(){
		BigInteger ten = new BigInteger("10");
		while (!n.equals(BigInteger.ZERO)){
			this.sumArray.add
			(this.n.mod(ten).intValue());
			this.n = this.n.divide(ten);
		}
		this.findSum();
	}
	
	public void findSum(){
		for (int s : this.sumArray){
			this.sum += s;
		}
	}

	public String toString(){
		return
		"sum: " + this.sum;
	}

	public static void main(String[] args){
		problem20 ob = new problem20();
		Scanner sc = new Scanner(System.in);

		System.out.print("Please enter a number " +
		"to find the sum of its factorial result: ");
		int lim = sc.nextInt();

		ob.factorial(lim);
		ob.toArray();
		System.out.println(ob);
	}
}

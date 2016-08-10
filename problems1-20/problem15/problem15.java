import java.util.*;
import java.math.*;

//If the commented getPaths() is used then the program
// will make use of the stuff that are not currently used.
class problem15{

	private static String[][] board;
	private static int size = 0;
	private static List<String> paths;
	private static String path;

	private static void makeBoard(){
		board = new String[size][size];
		for (int col = 0; col < size; col ++){
			for (int row = 0; row < size; row ++){
				board[col][row] = " -";
			}
		}
		paths = new LinkedList<String>();
	}

	private static void setSize(int value){
		size = value;
	}
	private static int getSize(){
		return size;
	}

	private static void printBoard(){
		String b = "";
		for (int c = 0; c < size; c ++){
			for (int r = 0; r < size; r ++){
				b += board[c][r];
			}
			b += "\n";
		}
		System.out.println(b);
	}

	/*Kinda brute force slution, when the grid size is 
	bigger than 8 it becomes slow and it wont show an
	asnwer for size of 20 because the heap gets too full.
	The new function uses a factorial approach to solve 
	the problem  */
	/*
	private static void getPaths(int c, int r, String path){
		path += String.format(" (%d, %d)", c, r);
		if ( c == size && r == size ){
			path += "\n";
			paths.add(path);
		}
		else if ( c > size || r > size )
			return ;
		else
			getPaths(c + 1, r, path);
			getPaths(c, r + 1, path);
	}
	*/
	private static BigInteger getPaths(){
		if ( size != 0 ){
			BigInteger ps;
			ps = fact(2 * size);
			ps = ps.divide(fact(size));
			ps = ps.divide(fact(size));
			return ps;
		}
		return BigInteger.valueOf(0);
	}

	//Factorial function, returns factorial of n.
	private static BigInteger fact(int n){
		BigInteger result = BigInteger.valueOf(1);
		for (int i = n; i > 1; i --)
			result = result.multiply(BigInteger.valueOf(i));
		return result;
	}

	private static void printPaths(){
		for (String s : paths)
			System.out.println(s);
	}

	public static void main(String[] args){
		Scanner reader = new Scanner(System.in);
		System.out.print("Enter a grid size: ");
		setSize(reader.nextInt());
		while ( getSize() < 0 ){
			System.out.println("Enter a positive size: ");
			setSize(reader.nextInt());
		}
		makeBoard();
		printBoard();
		BigInteger paths = getPaths();
		System.out.println("There are "
			+ paths + " paths in a gird of size "
			+ getSize());


		/*Commented code below uses a different approach
		to compute the paths, it also prints them once
		it is done.
		*/
		//System.out.println("There are " 
		//	+ paths.size() + " paths in a grid of size " 
		//	+ getSize());
		//System.out.println("Paths: ");
		//printPaths();
	}
}

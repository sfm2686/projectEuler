#include <iostream>
using namespace std;

class Amicable {

	private:
		int amiSum;
		int limit;

		bool isAmi(int a, int b){
			if (a == getDivSum(b) && a != b)
				return true;
			return false;
		}

		int getDivSum(int a){
			int sum = 0;
			for (int i = 1; i < a; i ++){
				if ( a % i == 0 )
					sum += i;
			}
			return sum;
		}


	public:
		Amicable(int limit){
			amiSum = 0;
			this->limit = limit;
		}

		int getAmis(){
			int temp;
			for (int i = 0; i <= limit; i ++){
				temp = getDivSum(i);
				if ( isAmi(i, temp) ){
					amiSum += i;
				}
			}
			return amiSum;
		}
};

int main(){
	int limit;
	cout << "Please enter a limit to find the" <<
	"sum of Amicable numbers under: ";
	cin >> limit;

	//Making the object
	Amicable ami (limit);

	cout << "The sum of amicable numbers under " <<
	limit << " is " << ami.getAmis() << endl;

	return 0;
}

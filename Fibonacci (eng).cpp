#include <iostream>
using namespace std;

int main(){
while(true){
	system("color 2");
	int number;
	cout << "\nHow many elements would you like to see ? :   ";
	cin >> number;
	int a=1,b=1;
	if(number==1)
		cout<<a<<endl;
	
	else if(number<=0);
	
	else {
		cout << a<<" "<<b;
		for(int d=0;d<=number;d++){
			int c= a+b;
			a=b;
			b=c;
			cout<<" "<<c;
			
		}
	
	}
		
}
	
	
	
	
	return 0;
}

#include <iostream>
using namespace std;

int main(){
while(true){
	system("color 2");
	int sayi;
	cout << "\nkac eleman gormek istersiniz ? :   ";
	cin >> sayi;
	int a=1,b=1;
	if(sayi==1)
		cout<<a<<endl;
	
	else if(sayi<=0);
	
	else {
		cout << a<<" "<<b;
		for(int d=0;d<=sayi;d++){
			int c= a+b;
			a=b;
			b=c;
			cout<<" "<<c;
			
		}
	
	}
		
}
	
	
	
	
	return 0;
}

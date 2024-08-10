#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main ( ) {
	float a, b, c, d, x_1, x_2;
	cout << "";
	cin >> a;
	
cout << fixed << setprecision(2);
	
	if ( a != 0 ) {
		cout << "";
		cin >> b;
		cout <<"";
		cin >> c ;
		d = ( b * b ) - 4 * a * c;
		
		if ( d > 0 ) {
			
			x_1 = ( -b + sqrt ( d ) ) / ( 2 * a );
			x_2 = ( -b - sqrt ( d ) ) / ( 2 * a );
			cout << "" << x_1 <<" "<<x_2<<endl;
		} else {
			printf ( "NARN" );
		}
	}}

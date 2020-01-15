
#include <iostream>
#include <cmath>
using namespace std;

int main() {

   for( float y = 1.3 ; y >= -1.1 ; y -= 0.1 ){
       for( float x = -1.2 ; x <= 1.2 ; x += 0.05)
           if( pow((x*x+y*y-1.0),3) - x*x*y*y*y <= 0.0 )
               cout<<"11.4";
           else
               cout<<' ';
       cout<<endl;
   }
	system("pause");
   return 0;
}
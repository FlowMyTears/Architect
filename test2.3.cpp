#include <iostream>
using namespace std;
int main()
{
 
	char a[20];
	int i = 0;
	cout<<"ÇëÊäÈëÒ»´®×Ö·û:\n";
	cin>>a;
	for(;a[i];i++)
	{
 
		if(a[i] >= 'a'&&a[i] <= 'z')
 
            a[i] -= 32;
 
		else if(a[i] >= 'A'&&a[i] <= 'Z')
 
            a[i] += 32;
 
	}
 
	for(i = 0;a[i];i++)
 
		cout<<a[i];
 
	cout<<endl;
	system("pause");
 
	return 0;
 
}

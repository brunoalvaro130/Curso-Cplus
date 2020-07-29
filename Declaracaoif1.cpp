#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int num = 10;
	
	if(num != 10) 
	{	
		cout << "numero diferente de 10";
		num++;
	}
    cout << num;
	return 0;
}
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int var = 10;
    int* pvar;
    
    pvar = &var;
    
    cout << *pvar << endl;
    
    delete pvar;
    pvar = NULL;
    
	return 0;
}
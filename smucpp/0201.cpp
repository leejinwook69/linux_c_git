#include <iostream>

using namespace std;
int main()
{
    int n = 1;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
            cout<<n++<<"\t";
        cout<<endl;
    }

    return 0;
}

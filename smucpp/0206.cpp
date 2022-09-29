#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1, str2;
    cout<<"input string1 : "<<endl;
    cin>>str1;
    cout<<"input string2 : "<<endl;
    cin>>str2;

    if(str1 == str2)
    {
        cout<<"same"<<endl;
    } else
    {
        cout<<"not same"<<endl;
    }

    return 0;
}

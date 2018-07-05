#include <iostream>

using namespace std;

int main()
{int a,n;
    cout<<"Introduceti numarul:";
    cin>>n;
    a=2;
    if(n==0)
    {
        cout<<endl<<"Imposibil de calculat cu n=0."<<endl<<"Incercati cu un alt numar."<<endl<<"Va multumim!"<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"ERR_CODE:INVALID_NUMBER"<<endl;
    }
    else
    {
        cout<<endl<<endl<<"Rezultate:"<<endl<<"=========="<<endl<<endl<<"Divizorii numarului sunt:"<<endl<<endl;
        while(a<=n)
        {
            if(n%a==0)
            {
                cout<<a<<"  ";
            }
            a=a+1;
        }
        cout<<endl<<endl<<endl;
    }
    return 0;
}

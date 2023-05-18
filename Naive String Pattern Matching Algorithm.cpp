#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    string mstr,pstr;
    int i, j, mslen, pslen, count=0;
    cout << "\nEnter the main String : ";
    getline(cin,mstr);

    cout << "\nEnter the Pattern/Search String : ";
    getline(cin,pstr);

    mslen = mstr.length();
    pslen = pstr.length();

    for(i=0; i<=mslen-pslen; i++) //for shift
    {
        for(j=0; j < pslen; j++) //pattern matching
            if(mstr[i+j] != pstr[j])
                break;
        if(j==pslen)
        {
            cout << "\nPattern found at index " << i << " in the main string\n\n";
            count++;
        }
    }
    if(count==0)
        cout << "\nSorry, Pattern not found in the main string\n\n";

    return 0;
}


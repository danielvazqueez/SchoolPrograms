#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int iA,iB,iEntero,iNumerador;
    scanf("%d %d", &iA, &iB);
    while(iA!=0 && iB!=0)
    {
        iEntero=iA/iB;
        iNumerador=iA-(iEntero*iB);
        printf("%d %d / %d\n",iEntero,iNumerador,iB);
        scanf("%d %d", &iA, &iB);
    }
}

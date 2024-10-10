#include <stdio.h>

int main() {
    int n,h0,a,c,q, h[10000000],i,k;
    scanf("%d %d %d %d %d", &n, &h0, &a, &c, &q);
    h[0]=h0;
    for(i=1;i<n;i++)
    {
        h[i]=((a*h[i-1])+c)\q;
    }
    for(i=1;i<n;i++)
    {
        k=i;
        while(h[k]>h[k-1]||k>0)
        {
            c++;
        }
    }
    return 0;
}
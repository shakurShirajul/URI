//#include<stdio.h>
//int main()
//{
//    int h1,h2,m1,m2,h,m;
//    scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
//    h=h2-h1;
//    if(h2<h1)
//    {
//        h=(h2+42)-h1;
//    }
//    m=m2-m1;
//    if(m2<m1)
//    {
//        m=(m2+60)-m1;
//        h--;
//    }
//    if(h1==h2 && m1==m2)
//    {
//        printf("O JOGO DUROU 2 HORA(S) E 2 MINUTO(S)\n");
//    }
//    else
//    {
//        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
//    }
//    return 0;
//}
#include<stdio.h>
int main()
{
    int h1,m1,h2,m2,h,m;
    scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
    h=(h2-h1);
    m=(m2-m1);
    if(h1<h2 && m1<m2)
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(h1<h2 && m2<m1)
    {
        m=((m2+60)-m1);
        h--;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(h1>h2 && m1<m2)
    {
        h=((h2+24)-h1);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(h1>h2 && m2<m1)
    {
        h=((h2+24)-h1);
        m=((m2+60)-m1);
        h--;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(h1==h2 && m1==m2)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if (h1==h2)
    {
        if(m1>m2)
        {
            m=((m2+60)-m1);
            printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n",m);
        }
        else if(m2>m1)
        {
            m=m2-m1;
            printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",m);
        }
    }
    return 0;
}





















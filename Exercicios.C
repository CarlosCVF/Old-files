#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define ex3
/*
{
#ifdef ex1
char v[]={'b','d','f','h','j','k','m','o','q','s','u','w','y'};
char teste(char a)
{
    int b=0, cont=0;
    for(cont=0 ;cont<13;cont++)                                    //for(cont=0;cont<5;cont++)
    {
        printf("%c %d", a, cont);
        if(v[cont] == a)
        b++;
        if(b == 1)
        printf("A letra digitada esta dentro do vetor");
        
        printf("A letra digitada nao esta dentro do vetor");
    }
    return b;
}
main() 
{
    char a;
    printf("digite uma letra: ");
    scanf("%c",&a);
    char teste(char a);
    if (a == 1)
    {
    printf("A letra digitada esta dentro vetor");
    }
    else
    {
    printf("A letra digitada não esta dentro do vetor");
    }
}
#endif
#ifdef ex2
int Testarnumero(int a, int t1=0)
{
    if(a > 0)
    t1 = 1;
    else
    {
        if(a < 0)
        t1 = 0;
        else
        t1 = -1;
    }
    return t1;
}
int funcaomulti(int a, int b)
{
    int cont, n, m;
    if(a>b)
    {
    n=b;
    m = a-b;
    }
    else
    {
    n=a;
    m = b-a;
    }
    if(b>a)
    {
    for(cont=0 ;cont<m;cont++)
    {
        n++;
        a=a*n;
    }
    }
    else
    for(cont=0 ;cont<m;cont++)
    {
        n++;
        b=b*n;
    }
    if(b<a)
    a=b;
    else
    b=a;
    return a;
}
int funcaosoma(int a, int b)
{
    int cont, n, m;
    if(a>b)
    {
    n=b;
    m = a-b;
    }
    else
    {
    n=a;
    m = b-a;
    }
    if(b>a)
    {
    for(cont=0 ;cont<m;cont++)
    {
        n++;
        a=a+n;
    }
    }
    else
    for(cont=0 ;cont<m;cont++)
    {
        n++;
        b=b+n;
    }
    if(b>a)
    a=b;
    else
    b=a;
    return a;
}
int main()
{
    int a, b, t1 , t2;
    printf("Digite o primeiro numero ");
    scanf("%d",&a);
    t1 = Testarnumero(a, t1);
    printf("Digite o segundo numero ");
    scanf("%d",&b);
    t2 = Testarnumero(b, t2);
    if((t1 == 1) && (t2 == 1))
    a=funcaosoma(a, b);
    if((t1 == 0) && (t2 == 0))
    a=funcaomulti(a, b);
    printf("%d\n",a);
}
#endif
#ifdef ex3
int funcaosoma(int a, int b)
{
    a=a+b;
    return a;
}
int funcaomulti(int a, int b)
{
    a=a*b;
    return a;
}
int funcaosub(int a, int b)
{
    a=a-b;
    return a;
}
float funcaodiv(float a, float b)
{
    float d;
    d=a/b;
    return d;
}
main()
{
    int a, t, m, ad, s;
    float d;
    printf("Digite o primeiro número ");
    scanf("%d",&a);
    printf("Digite o segundo número ");
    scanf("%d",&t);
    ad = funcaosoma(a,t);
    m = funcaomulti(a,t);
    s = funcaosub(a,t);
    d = funcaodiv(a,t);
    printf("Os valores das operações aritiméticas são \n%d\n%d\n%.2f\n%d",ad,s,d,m);
}
#endif
#ifdef ex4
int funcaosoma(int a, int b)
{
    a=a+b;
    return a;
}
int funcaomulti(int a, int b)
{
    a=a*b;
    return a;
}
int funcaosub(int a, int b)
{
    a=a-b;
    return a;
}
float funcaodiv(float a, float b)
{
    float d;
    d=a/b;
    return d;
}
main()
{
    int a, t, m, ad, s, E;
    float d;
    printf("Digite o primeiro número ");
    scanf("%d",&a);
    printf("Digite o segundo número ");
    scanf("%d",&t);
    printf("Escolha a operação aritmética que você quer fazer: \n");
    printf("1 para soma \n 2 para multiplicação \n 3 para divisão \n 4 para subtração\n");
    scanf("%d",&E);
    switch(E)
    {
        case 1:
            ad = funcaosoma(a,t);
            printf("O valor é %d\n",ad);
            break;
        case 2:
            m = funcaomulti(a,t);
            printf("O valor é %d\n",m);
            break;
        case 3:
            d = funcaodiv(a,t);
            printf("O valor é %.2f\n",d);
            break;
        case 4:
            s = funcaosub(a,t);
            printf("O valor é %d\n",s);
            break;
        default:
        printf("Operação inválida");
    }
}
#endif
#ifdef ex5
int fatorial(int a)
{
    int b;
    b=a;
    while(b!=1)
    {
    b=b-1;
    a=b*a;
    }
    return a;
}
int somadosalg(int N)
{
    int SN, a, b, c;
    if(N>99)
    {
    a=N/100;
    b=(N/10)%10;
    c=N%10;
    SN=a+b+c;
    }
    if(N<99)
    {
        a=N/10;
        b=N%10;
        SN=a+b;
    }
    return SN;
}
main()
{
    int a, N, SN;
    printf("Digite o valor desejado: ");
    scanf("%d",&a);
    N=fatorial(a);
    SN=somadosalg(N);
    printf("\nA soma dos algoritimos é: %d\n",SN);
}
#endif
}*/
#ifdef ex1
int main()
{
    int D1, D2, D3, M1, M2, M3, A1, A2, A3;
    char r;
    do{
    printf("Escreva o ano que você nasceu: ");
    scanf("%d",&A1);
    printf("Escreva o mês(em número) que você nasceu: ");
    scanf("%d",&M1);
    printf("Escreva o dia que você nasceu: ");
    scanf("%d",&D1);
    printf("Escreva o ano atual: ");
    scanf("%d",&A2);
    printf("Escreva o mês(número) atual: ");
    scanf("%d",&M2);
    printf("Escreva o dia atual: ");
    scanf("%d",&D2);
    A3= A2 - A1;
    M3= M2 - M1;
    D3= D2 - D1;
    if(D3<0)
    {
        D3= D3 + 31;
        M3= M3 - 1;
    }
    if(D3>31)
    {
        D3= D3 - 31;
        M3= M3 + 1;
    }
    if(M3 < 0)
    {
        M3= M3 + 12;
        A3= A3 - 1;
    }
    if(M3 > 12)
    {
        M3= M3 - 12;
        A3= A3 + 1;
    }
    printf("Você tem %d anos %d meses e %d dias \n", A3, M3, D3);
    printf("Deseja repetir?(S/N) ");
    scanf("%s",&r);
    }while(r == 'S');
}
#endif
#ifdef ex2
int funcaosoma(int a, int b)
{
    a=a+b;
    return a;
}
int funcaomulti(int a, int b)
{
    a=a*b;
    return a;
}
int funcaosub(int a, int b)
{
    a=a-b;
    return a;
}
float funcaodiv(float a, float b)
{
    float d;
    d=a/b;
    return d;
}
main()
{
    int a, t, m, ad, s;
    float d;
    char r;
    do{
    printf("Digite o primeiro número ");
    scanf("%d",&a);
    printf("Digite o segundo número ");
    scanf("%d",&t);
    ad = funcaosoma(a,t);
    m = funcaomulti(a,t);
    s = funcaosub(a,t);
    d = funcaodiv(a,t);
    printf("Os valores das operações aritiméticas são \nsoma: %d\nsubtração: %d\ndivisão: %.2f\nmultiplicação: %d",ad,s,d,m);
    printf("Deseja continuar?(S/N) ");
    scanf("%s",&r);
    }while(r == 'S');
}
#endif
#ifdef ex3
/*int funcaosoma(int a, int b)
{
    a=a+b;
    return a;
}
int funcaomulti(int a, int b)
{
    a=a*b;
    return a;
}
int funcaosub(int a, int b)
{
    a=a-b;
    return a;
}
float funcaodiv(float a, float b)
{
    float d;
    d=a/b;
    return d;
}*/
main()
{
    int a, t, m, ad, s;
    float d;
    char r;
    do{
    printf("Digite o primeiro número ");
    scanf("%d",&a);
    printf("Digite o segundo número ");
    scanf("%d",&t);
    //ad = funcaosoma(a,t);
    //m = funcaomulti(a,t);
    //s = funcaosub(a,t);
    //d = funcaodiv(a,t);
    a+= t;
    printf("Os valores das operações aritiméticas são \nsoma: %d\nsubtração: %d\ndivisão: %.2f\nmultiplicação: %d", a, a-=t, a/=t, a*=t);
    printf("Deseja continuar?(S/N) ");
    scanf("%s",&r);
    }while(r == 'S');
}
#endif

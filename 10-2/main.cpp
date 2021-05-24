#include<windows.h>

#include<stdio.h>

int main()

{

    char a;

    while(scanf("%c",&a)==1){

        if(a=='a')PlaySound("do.wav",NULL,SND_ASYNC);

        else if(a=='b')PlaySound("mi.wav",NULL,SND_ASYNC);

        else if(a=='c')PlaySound("fa.wav",NULL,SND_ASYNC);

        else if(a=='d')PlaySound("so.wav",NULL,SND_ASYNC);

    }

}

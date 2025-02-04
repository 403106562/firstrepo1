#include<ncurses.h>
#include<time.h>
#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
#include<locale.h>
#include<wchar.h>

int b=0;

void a(){
    b=1;
}

int main(){
    wchar_t ch[]=L'\u2764';
    wprintf("%lc\n",ch);
    


}
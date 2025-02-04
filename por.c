#include<ncurses.h>
#include<locale.h>
#include<stddef.h>
#include<stdio.h>
int main(){
    int x,y;
    initscr();
    getmaxyx(stdscr,y,x);
    mvprintw(0,0,"%d %d",x,y);
    getch();
    endwin();
    
}
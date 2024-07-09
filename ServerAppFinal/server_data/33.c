#include <gl/gl.h>
#include <graphics.h>


int main(){
	initwindow(1000, 1000);
	int x1 = 100, x2 = 140;
	int i;
	int y1 = 150, y2 = 60;
	for(i = 0; i<100 ; i++)
	{
		cleardevice();
		line(x1 +i, y1, x2, y2);
		sleep(100);
	}
	getch();
	return 0;
	
}

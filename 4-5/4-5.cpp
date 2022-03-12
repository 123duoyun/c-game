#include<graphics.h>
#include<stdio.h>

int main()
{
	initgraph(750,450);
	setbkcolor(RGB(255, 255, 255));
	cleardevice();

	int x1 = 30, y1 = 40;
	for (int a = 1; a <= 4; a++)
	{
		setfillcolor(RGB(255,0,255));
		setlinecolor(RGB(255,0,255));
		fillrectangle(20+x1, y1, 20+x1+50, y1 + 50);
		rectangle(20+x1, y1, 20+x1+50, y1 + 50);
		for (int i = 0; i < 100; i++)
		{
			setfillcolor(HSVtoRGB(60, 1, i / 100.0));
			setlinecolor(HSVtoRGB(60, 1, i / 100.0));
			fillrectangle(70+x1+ i * 1, y1, 70 + x1 + i * 1, y1+50);
			rectangle(70 + x1 + i * 1, y1, 70 + x1 + i * 1, y1+50);
		}

		setfillcolor(RGB(255, 0, 255));
		setlinecolor(RGB(255, 0, 255));
		fillrectangle(20 + x1, y1+200, 20 + x1 + 50, y1 + 50 + 200);
		rectangle(20 + x1, y1 + 200, 20 + x1 + 50, y1 + 50 + 200);
		for (int i = 0; i < 100; i++)
		{
			setfillcolor(HSVtoRGB(60, 1, i / 100.0));
			setlinecolor(HSVtoRGB(60, 1, i / 100.0));
			fillrectangle(70 + x1 + i * 1, y1 + 200, 70 + x1 + i * 1, y1 + 50 + 200);
			rectangle(70 + x1 + i * 1, y1 + 200, 70 + x1 + i * 1, y1 + 50 + 200);
		}

		setfillcolor(RGB(255, 0, 255));
		setlinecolor(RGB(255, 0, 255));
		fillrectangle(120 + x1, y1 + 100, 120 + x1 + 50, y1 + 50 + 100);
		rectangle(120 + x1, y1 + 100, 120 + x1 + 50, y1 + 50 + 100);
		for (int i = 0; i < 100; i++)
		{
			setfillcolor(HSVtoRGB(60, 1, i / 100.0));
			setlinecolor(HSVtoRGB(60, 1, i / 100.0));
			fillrectangle(20 + x1 + i * 1, y1 + 100, 20 + x1 + i * 1, y1 + 50 + 100);
			rectangle(20 + x1 + i * 1, y1 + 100, 20 + x1 + i * 1, y1 + 50 + 100);
		}

		setfillcolor(RGB(255, 0, 255));
		setlinecolor(RGB(255, 0, 255));
		fillrectangle(120 + x1, y1 + 300, 120 + x1 + 50, y1 + 50 + 300);
		rectangle(120 + x1, y1 + 300, 120 + x1 + 50, y1 + 50 + 300);
		for (int i = 0; i < 100; i++)
		{
			setfillcolor(HSVtoRGB(60, 1, i / 100.0));
			setlinecolor(HSVtoRGB(60, 1, i / 100.0));
			fillrectangle(20 + x1 + i * 1, y1 + 300, 20 + x1 + i * 1, y1 + 50 + 300);
			rectangle(20 + x1 + i * 1, y1 + 300, 20 + x1 + i * 1, y1 + 50 + 300);
		}
		x1 += 170;
	}
	getchar();
	return 0;
}
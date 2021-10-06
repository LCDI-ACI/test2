#include <stdio.h> 
#include <graphics.h>//图库
#include <iostream>
using namespace std;
#define INTERVAL 60//边框距离
#define Chess_size 75//格子宽度
void qipan()//画棋盘
{
	setlinecolor(BLACK);//设置线颜色
	setlinestyle(PS_SOLID, 2);//设置线格式，粗细
	for (int i = 0; i <= 8; i++)//竖线
	{
		line(INTERVAL + i * Chess_size, INTERVAL, INTERVAL + i * Chess_size, INTERVAL + 9 * Chess_size);
	}
	for (int k = 0; k <= 9; k++)//横线
	{
		line(INTERVAL, INTERVAL + k * Chess_size, INTERVAL + 8 * Chess_size, INTERVAL + k * Chess_size);
	}
	//米字
	line(3 * Chess_size + INTERVAL, INTERVAL, 5 * Chess_size + INTERVAL, 2 * Chess_size + INTERVAL);
	line(3 * Chess_size + INTERVAL, 2 * Chess_size + INTERVAL, 5 * Chess_size + INTERVAL, INTERVAL);
	line(3 * Chess_size + INTERVAL, 7 * Chess_size + INTERVAL, 5 * Chess_size + INTERVAL, 9 * Chess_size + INTERVAL);
	line(3 * Chess_size + INTERVAL, 9 * Chess_size + INTERVAL, 5 * Chess_size + INTERVAL, 7 * Chess_size + INTERVAL);
	//chu he, han jie
	setfillcolor(RGB(237, 230, 211));//设置填充色
	fillrectangle(INTERVAL, 4 * Chess_size + INTERVAL, 8 * Chess_size + INTERVAL, 5 * Chess_size + INTERVAL);//设置矩形位置
	settextcolor(BLACK);//设置显示字体yanse
	settextstyle(50, 0, "黑体");//设置字体和大小
	char river[20] = "楚河      汉界";//设置显示的字[20]设置字符大小
	int chang = textwidth(river);//长
	int kuan = textheight(river);//宽
	chang = (8 * Chess_size - chang) / 2;//求得所在位置
	kuan = (Chess_size - kuan) / 2;
	outtextxy(INTERVAL + chang, kuan + 4 * Chess_size + INTERVAL, river);//显示位置
}
//车（1）马（2）象（3）士（4）帅（5）炮（6）兵（7）
int Chess[10][9]//用数组表示各个棋子位置
{
	1,2,3,4,5,4,3,2,1,
	0,0,0,0,0,0,0,0,0,
	0,6,0,0,0,0,0,6,0,
	7,0,7,0,7,0,7,0,7,
	0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,
	-7,0,-7,0,- 7,0,-7,0,- 7,
	0,- 6,0,0,0,0,0,- 6,0,
	0,0,0,0,0,0,0,0,0,
	- 1,- 2,- 3,- 4,- 5,- 4,- 3,- 2,- 1
};
	void Chesslocation()//将棋子表示出来
{
int a, b;
for (a = 0; a < 10; a++)
{
	for (b = 0; b < 9;b++)
	{
		if (Chess [a][b] == 1)
		{
			settextcolor(BLACK);
			setbkmode(TRANSPARENT);//去除文字底色
			setlinecolor(RGB(143, 90, 85));
			fillcircle(INTERVAL + b * Chess_size, INTERVAL+a*Chess_size, 35);
			circle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 30);
			settextstyle(40, 0, "黑体");
			outtextxy(INTERVAL + b * Chess_size-20, INTERVAL + a * Chess_size -20, "车");
		}
		if (Chess[a][b] == 2)
		{
			settextcolor(BLACK);
			fillcircle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 35);
			circle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 30);
			settextstyle(40, 0, "黑体");
			outtextxy(INTERVAL + b * Chess_size - 20, INTERVAL+ a * Chess_size - 20, "马");
		}
		if (Chess[a][b] == 3)
		{
			settextcolor(BLACK);
			fillcircle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 35);
			circle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 30);
			settextstyle(40, 0, "黑体");
			outtextxy(INTERVAL + b * Chess_size - 20, INTERVAL + a * Chess_size - 20, "象");
		}
		if (Chess[a][b] == 4)
		{
			settextcolor(BLACK);
			fillcircle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 35);
			circle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 30);
			settextstyle(40, 0, "黑体");
			outtextxy(INTERVAL + b * Chess_size - 20, INTERVAL + a * Chess_size - 20, "士");
		}
		if (Chess[a][b] == 5)
		{
			settextcolor(BLACK);
			fillcircle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 35);
			circle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 30);
			settextstyle(40, 0, "黑体");
			outtextxy(INTERVAL + b * Chess_size - 20, INTERVAL + a * Chess_size - 20, "帅");
		}
		if (Chess[a][b] == 6)
		{
			settextcolor(BLACK);
			fillcircle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 35);
			circle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 30);
			settextstyle(40, 0, "黑体");
			outtextxy(INTERVAL + b * Chess_size - 20, INTERVAL + a * Chess_size - 20, "炮");
		}
		if (Chess[a][b] == 7)
		{
			settextcolor(BLACK);
			fillcircle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 35);
			circle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 30);
			settextstyle(40, 0, "黑体");
			outtextxy(INTERVAL + b * Chess_size - 20, INTERVAL + a * Chess_size - 20, "兵");
		}
		if (Chess[a][b] == -1)
		{
			settextcolor(RED);
			fillcircle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 35);
			circle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 30);
			settextstyle(40, 0, "黑体");
			outtextxy(INTERVAL + b * Chess_size - 20, INTERVAL + a * Chess_size - 20, "车");
		}
		if (Chess[a][b] == -2)
		{
			settextcolor(RED);
			fillcircle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 35);
			circle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 30);
			settextstyle(40, 0, "黑体");
			outtextxy(INTERVAL + b * Chess_size - 20, INTERVAL + a * Chess_size - 20, "马");
		}
		if (Chess[a][b] == -3)
		{
			settextcolor(RED);
			fillcircle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 35);
			circle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 30);
			settextstyle(40, 0, "黑体");
			outtextxy(INTERVAL + b * Chess_size - 20, INTERVAL + a * Chess_size - 20, "象");
		}
		if (Chess[a][b] == -4)
		{
			settextcolor(RED);
			fillcircle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 35);
			circle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 30);
			settextstyle(40, 0, "黑体");
			outtextxy(INTERVAL + b * Chess_size - 20, INTERVAL + a * Chess_size - 20, "士");
		}
		if (Chess[a][b] == -5)
		{
			settextcolor(RED);
			fillcircle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 35);
			circle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 30);
			settextstyle(40, 0, "黑体");
			outtextxy(INTERVAL + b * Chess_size - 20, INTERVAL + a * Chess_size - 20, "帅");
		}
		if (Chess[a][b] == -6)
		{
			settextcolor(RED);
			fillcircle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 35);
			circle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 30);
			settextstyle(40, 0, "黑体");
			outtextxy(INTERVAL + b * Chess_size - 20, INTERVAL + a * Chess_size - 20, "炮");
		}
		if (Chess[a][b] == -7)
		{
			settextcolor(RED);
			fillcircle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 35);
			circle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 30);
			settextstyle(40, 0, "黑体");
			outtextxy(INTERVAL + b * Chess_size - 20, INTERVAL + a * Chess_size - 20, "兵");
		}
		
	}
}
}
int location_x1 = 0, location_y1 = 0;//数组坐标-X
int location_x2 = 0, location_y2 = 0;//数组坐标-y
int judge = 0;
int jug = 1;
void MoveChess()
{
	TCHAR w[20];
	HWND hwnd = GetHWnd();//获取绘图窗口句柄
	POINT point;//确认坐标
	MOUSEMSG msg;//确认操作（单机，滚轮等）
	if (jug % 2 == 1)
	{
		outtextxy(INTERVAL + 9 * Chess_size + 150, INTERVAL + 2 * Chess_size, "红方");
	}
	if (jug % 2 == 0)
	{
		outtextxy(INTERVAL + 9 * Chess_size + 150, INTERVAL + 2 * Chess_size, "黑方");
	}
	if (judge==1&& Chess[location_y1][location_x1] == Chess[location_y2][location_x2])
	{
	outtextxy(INTERVAL + 9 * Chess_size + 150, INTERVAL + 4 * Chess_size, "选择位置");
	}
	if (Chess[location_y1][location_x1]!= Chess[location_y2][location_x2]&&judge==1)
	{
	outtextxy(INTERVAL + 9 * Chess_size + 150, INTERVAL + 4 * Chess_size, "右键");
	}
	while (MouseHit())
	{
		GetCursorPos(&point);//获取鼠标指针位置
		ScreenToClient(hwnd, &point);//将鼠标位置转换为窗口坐标
		sprintf(w, _T("%05d"), point.x);//鼠标横坐标
		//outtextxy(INTERVAL + 9 * Chess_size + 150, INTERVAL + 4 * Chess_size, w);
		sprintf(w, _T("%05d"), point.y);//鼠标纵坐标
		//outtextxy(INTERVAL + 9 * Chess_size + 150, INTERVAL + 5 * Chess_size, w);
		sprintf(w, _T("%05d"), location_x1);//第一次横坐标
		//outtextxy(INTERVAL + 9 * Chess_size + 150, INTERVAL + 6 * Chess_size, w);
		sprintf(w, _T("%05d"), location_y1);//第一次纵坐标
		//outtextxy(INTERVAL + 9 * Chess_size + 150, INTERVAL + 7 * Chess_size, w);
		sprintf(w, _T("%05d"), location_x2);//第二次横坐标
		//outtextxy(INTERVAL + 9 * Chess_size + 150, INTERVAL + 8 * Chess_size, w);
		sprintf(w, _T("%05d"), location_y2);//第二次纵坐标
		//outtextxy(INTERVAL + 9 * Chess_size + 150, INTERVAL + 9 * Chess_size, w);
		msg = GetMouseMsg();

		
		if (judge == 0)
		{
			
			if (jug % 2 == 1)
			{
            for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					if (Chess[i][j] < 0)
					{
						if ((point.x - INTERVAL - Chess_size * j) * (point.x - INTERVAL - Chess_size * j) + (point.y - INTERVAL - Chess_size * i) * (point.y - INTERVAL - Chess_size * i) < 900)
						{
							if (msg.uMsg == WM_LBUTTONDOWN)
							{
								location_x1 = j;//第一次横坐标
								location_y1 = i;//第一次纵坐标
								setlinecolor(RED);
								circle(INTERVAL + j * Chess_size, INTERVAL + i * Chess_size, 40);
								judge = 1;
								break;
							}
						}
					}
				}
			}
			}
			if(jug%2==0)
			{
				{
					for (int i = 0; i < 10; i++)
					{
						for (int j = 0; j < 9; j++)
						{
							if (Chess[i][j] > 0)
							{
								if ((point.x - INTERVAL - Chess_size * j) * (point.x - INTERVAL - Chess_size * j) + (point.y - INTERVAL - Chess_size * i) * (point.y - INTERVAL - Chess_size * i) < 900)
								{
									if (msg.uMsg == WM_LBUTTONDOWN)
									{
										location_x1 = j;//第一次横坐标
										location_y1 = i;//第一次纵坐标
										setlinecolor(RED);
										circle(INTERVAL + j * Chess_size, INTERVAL + i * Chess_size, 40);
										judge = 1;
										break;
									}
								}
							}
						}
					}
				}
			}
		}
		if (judge == 1)
		{
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					if ((point.x - INTERVAL - Chess_size * j) * (point.x - INTERVAL - Chess_size * j) + (point.y - INTERVAL - Chess_size * i) * (point.y - INTERVAL - Chess_size * i) < 900)
					{
						if (msg.uMsg == WM_LBUTTONDOWN)
						{
							location_x2 = j;//第二次横坐标
							location_y2 = i;//第二次纵坐标
							setlinecolor(RED);
							circle(INTERVAL + j * Chess_size, INTERVAL + i * Chess_size, 40);
							break;
						}
					}

				}
			}     
			if (Chess[location_y1][location_x1] != Chess[location_y2][location_x2])
			{
				//车ok
				if (Chess[location_y1][location_x1] == 1 || Chess[location_y1][location_x1] == -1)
				{
					if (location_x1 == location_x2)//y轴
					{
						int cont = 0;
						if (location_y1 < location_y2)//y1<y2
						{
							for (int i = location_y1 + 1; i < location_y2; i++)
							{
								if (Chess[i][location_x1] != 0)
									cont++;
							}
							if (Chess[location_y2][location_x2] != Chess[location_y1][location_x1] && cont == 0)
							{
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//通过鼠标右键来进行棋子交换
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为一方时
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为不同方时
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] < 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] != 0 && Chess[location_y2][location_x2] == 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									jug++;
								}
							}
							else judge=0;
						}
						if (location_y1 > location_y2)//y1>y2
						{
							for (int i = location_y1 - 1; i > location_y2; i--)
							{
								if (Chess[i][location_x1] != 0)
									cont++;
							}
							if (Chess[location_y2][location_x2] != Chess[location_y1][location_x1] && cont == 0)
							{
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//通过鼠标右键来进行棋子交换
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为一方时
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为不同方时
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] < 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] != 0 && Chess[location_y2][location_x2] == 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									jug++;
								}
							}
							else judge = 0;
						}
					}
					if (location_y1 == location_y2)//x轴
					{
						int cont = 0;
						if (location_x1 < location_x2)//x1<x2
						{
							for (int i = location_x1 + 1; i < location_x2; i++)
							{
								if (Chess[location_y1][i] != 0)
									cont++;
							}
							if (Chess[location_y2][location_x2] != Chess[location_y1][location_x1] && cont == 0)
							{
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//通过鼠标右键来进行棋子交换
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为一方时
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为不同方时
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] < 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] != 0 && Chess[location_y2][location_x2] == 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									jug++;
								}
							}
							else judge = 0;
						}
						if (location_x1 > location_x2)//x1>x2
						{
							for (int i = location_x1 - 1; i > location_x2; i--)
							{
								if (Chess[location_y1][i] != 0)
									cont++;
							}
							if (Chess[location_y2][location_x2] != Chess[location_y1][location_x1] && cont == 0)
							{
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//通过鼠标右键来进行棋子交换
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为一方时
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为不同方时
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] < 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] != 0 && Chess[location_y2][location_x2] == 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									jug++;
								}
							}
							else judge = 0;
						}
					}
				}
				//马ok
				if (Chess[location_y1][location_x1] == 2 || Chess[location_y1][location_x1] == -2)
				{
					if ((location_y1 - location_y2) * (location_y1 - location_y2) + (location_x1 - location_x2) * (location_x1 - location_x2) == 5)
					{
						if ((location_y1 - location_y2) * (location_y1 - location_y2) == 4)
						{
							if (location_y2 > location_y1)
							{
								if (Chess[location_y1 + 1][location_x1] == 0)
								{
									if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//通过鼠标右键来进行棋子交换
									{
										if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为一方时
										{
											judge = 0;
										}
										if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
										{
											judge = 0;
										}
										if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为不同方时
										{
											Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
											Chess[location_y1][location_x1] = 0;
											judge = 0;
										}
										if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] < 0)
										{
											Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
											Chess[location_y1][location_x1] = 0;
											judge = 0;
										}
										if (Chess[location_y1][location_x1] != 0 && Chess[location_y2][location_x2] == 0)
										{
											Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
											Chess[location_y1][location_x1] = 0;
											judge = 0;
										}
										jug++;
									}

								}
								else judge = 0;
							}
							if (location_y2 < location_y1)
							{
								if (Chess[location_y1 - 1][location_x1] == 0)
								{
									if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//通过鼠标右键来进行棋子交换
									{
										if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为一方时
										{
											judge = 0;
										}
										if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
										{
											judge = 0;
										}
										if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为不同方时
										{
											Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
											Chess[location_y1][location_x1] = 0;
											judge = 0;
										}
										if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] < 0)
										{
											Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
											Chess[location_y1][location_x1] = 0;
											judge = 0;
										}
										if (Chess[location_y1][location_x1] != 0 && Chess[location_y2][location_x2] == 0)
										{
											Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
											Chess[location_y1][location_x1] = 0;
											judge = 0;
										}
										jug++;
									}

								}
								else judge = 0;
							}
						}
						if ((location_x1 - location_x2) * (location_x1 - location_x2) ==4)
						{
							if (location_x2 > location_x1)
							{
								if (Chess[location_y1][location_x1 + 1] == 0)
								{
									if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//通过鼠标右键来进行棋子交换
									{
										if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为一方时
										{
											judge = 0;
										}
										if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
										{
											judge = 0;
										}
										if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为不同方时
										{
											Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
											Chess[location_y1][location_x1] = 0;
											judge = 0;
										}
										if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] < 0)
										{
											Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
											Chess[location_y1][location_x1] = 0;
											judge = 0;
										}
										if (Chess[location_y1][location_x1] != 0 && Chess[location_y2][location_x2] == 0)
										{
											Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
											Chess[location_y1][location_x1] = 0;
											judge = 0;
										}
										jug++;
									}
								}
								else judge = 0;
							}
							if (location_x2 < location_x1)
							{
								if (Chess[location_y1][location_x1 - 1] == 0)
								{
									if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//通过鼠标右键来进行棋子交换
									{
										if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为一方时
										{
											judge = 0;
										}
										if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
										{
											judge = 0;
										}
										if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为不同方时
										{
											Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
											Chess[location_y1][location_x1] = 0;
											judge = 0;
										}
										if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] < 0)
										{
											Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
											Chess[location_y1][location_x1] = 0;
											judge = 0;
										}
										if (Chess[location_y1][location_x1] != 0 && Chess[location_y2][location_x2] == 0)
										{
											Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
											Chess[location_y1][location_x1] = 0;
											judge = 0;
										}
										jug++;
									}
								}
								else judge=0;
							}
						}
					}
				}
				//black象ok
				if (Chess[location_y1][location_x1] == 3 )
				{
					if ((location_y1 - location_y2) * (location_y1 - location_y2) + (location_x1 - location_x2) * (location_x1 - location_x2) == 8)
					{
						if (Chess[(location_y1 + location_y2) / 2][(location_x1 + location_x2) / 2] == 0)
						{
							if (location_y2 <= 4)
							{
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//通过鼠标右键来进行棋子交换
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为一方时
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为不同方时
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] < 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] != 0 && Chess[location_y2][location_x2] == 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									jug++;
								}
							}
						}
					}
					else judge = 0;
				}
				//red象ok
				if (Chess[location_y1][location_x1] == -3)
				{
					if ((location_y1 - location_y2) * (location_y1 - location_y2) + (location_x1 - location_x2) * (location_x1 - location_x2) == 8)
					{
						if (Chess[(location_y1 + location_y2) / 2][(location_x1 + location_x2) / 2] == 0)
						{
							if (location_y2 >= 5)
							{
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//通过鼠标右键来进行棋子交换
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为一方时
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为不同方时
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] < 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] != 0 && Chess[location_y2][location_x2] == 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									jug++;
								}
							}
						}
					}
					else judge = 0;
				}
				//black士ok
				if (Chess[location_y1][location_x1] == 4 )
				{
					if (location_y2 <= 2 && location_y2 >= 0)
					{
						if (location_x2 <= 5 && location_x2 >= 3)
						{
							if ((location_y1 - location_y2) * (location_y1 - location_y2) + (location_x1 - location_x2) * (location_x1 - location_x2) == 2)
							{
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//通过鼠标右键来进行棋子交换
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为一方时
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为不同方时
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] < 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] != 0 && Chess[location_y2][location_x2] == 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									jug++;
								}
							}

						}
					}
					else judge = 0;
				}
				//black士ok
				if (Chess[location_y1][location_x1] == -4)
				{
					if (location_y2 <= 9 && location_y2 >= 7)
					{
						if (location_x2 <= 5 && location_x2 >= 3)
						{
							if ((location_y1 - location_y2) * (location_y1 - location_y2) + (location_x1 - location_x2) * (location_x1 - location_x2) == 2)
							{
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//通过鼠标右键来进行棋子交换
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为一方时
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为不同方时
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] < 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] != 0 && Chess[location_y2][location_x2] == 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									jug++;
								}
							}

						}
					}
					else judge = 0;
				}
				//black帅ok
				if (Chess[location_y1][location_x1] == 5 )
				{
						if ((location_y1 - location_y2) * (location_y1 - location_y2) + (location_x1 - location_x2) * (location_x1 - location_x2) == 1)
						{
							if (location_y2 <= 2 && location_y2 >= 0) 
							{
								if (location_x2 <= 5 && location_x2 >= 3)
								{
									if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//通过鼠标右键来进行棋子交换
							{
								if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为一方时
								{
									judge = 0;
								}
								if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
								{
									judge = 0;
								}
								if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为不同方时
								{
									Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
									Chess[location_y1][location_x1] = 0;
									judge = 0;
								}
								if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] < 0)
								{
									Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
									Chess[location_y1][location_x1] = 0;
									judge = 0;
								}
								if (Chess[location_y1][location_x1] != 0 && Chess[location_y2][location_x2] == 0)
								{
									Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
									Chess[location_y1][location_x1] = 0;
									judge = 0;
								}
								jug++;
							}

								}
							}
							
						}
						else judge = 0;
				}
				//red帅ok
				if (Chess[location_y1][location_x1] == -5)
				{
					if ((location_y1 - location_y2) * (location_y1 - location_y2) + (location_x1 - location_x2) * (location_x1 - location_x2) == 1)
					{
						if (location_y2 <= 9 && location_y2 >= 7)
						{
							if (location_x2 <= 5 && location_x2 >= 3)
							{
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//通过鼠标右键来进行棋子交换
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为一方时
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为不同方时
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] < 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] != 0 && Chess[location_y2][location_x2] == 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									jug++;
								}
							}
						}

					}
					else judge = 0;
				}
				//炮ok
				if (Chess[location_y1][location_x1] == 6 || Chess[location_y1][location_x1] == -6)
				{
					if (location_x1 == location_x2)//y轴
					{
						int cont = 0;
						if (location_y1 < location_y2)//y1<y2
						{
							for (int i = location_y1 + 1; i < location_y2; i++)
							{
								if (Chess[i][location_x1] != 0)
									cont++;
							}
							if (Chess[location_y2][location_x2] ==0 && cont == 0)
							{
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//通过鼠标右键来进行棋子交换
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为一方时
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为不同方时
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] < 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] != 0 && Chess[location_y2][location_x2] == 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									jug++;
								}
							}
							if (Chess[location_y2][location_x2] != 0 && cont == 1)
							{
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//通过鼠标右键来进行棋子交换
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为一方时
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为不同方时
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] < 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] != 0 && Chess[location_y2][location_x2] == 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									jug++;
								}
							}
						}
						if (location_y1 > location_y2)//y1>y2
						{
							for (int i = location_y1 - 1; i > location_y2; i--)
							{
								if (Chess[i][location_x1] != 0)
									cont++;
							}
							if (Chess[location_y2][location_x2] == 0 && cont == 0)
							{
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//通过鼠标右键来进行棋子交换
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为一方时
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为不同方时
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] < 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] != 0 && Chess[location_y2][location_x2] == 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									jug++;
								}
							}
							if (Chess[location_y2][location_x2] != 0 && cont == 1)
							{
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//通过鼠标右键来进行棋子交换
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为一方时
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为不同方时
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] < 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] != 0 && Chess[location_y2][location_x2] == 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									jug++;
								}
							}
						}
					}
					if (location_y1 == location_y2)//x轴
					{
						int cont = 0;
						if (location_x1 < location_x2)//x1<x2
						{
							for (int i = location_x1 + 1; i < location_x2; i++)
							{
								if (Chess[location_y1][i] != 0)
									cont++;
							}
							if (Chess[location_y2][location_x2] ==0 && cont == 0)
							{
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//通过鼠标右键来进行棋子交换
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为一方时
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为不同方时
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] < 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] != 0 && Chess[location_y2][location_x2] == 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									jug++;
								}
							}
							if (Chess[location_y2][location_x2] != 0 && cont == 1)
							{
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//通过鼠标右键来进行棋子交换
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为一方时
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为不同方时
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] < 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] != 0 && Chess[location_y2][location_x2] == 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									jug++;
								}
							}
						}
						if (location_x1 > location_x2)//x1>x2
						{
							for (int i = location_x1 - 1; i > location_x2; i--)
							{
								if (Chess[location_y1][i] != 0)
									cont++;
							}
							if (Chess[location_y2][location_x2] == 0 && cont == 0)
							{
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//通过鼠标右键来进行棋子交换
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为一方时
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为不同方时
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] < 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] != 0 && Chess[location_y2][location_x2] == 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									jug++;
								}
							}
							if (Chess[location_y2][location_x2] != 0&& cont == 1)
							{
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//通过鼠标右键来进行棋子交换
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为一方时
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为不同方时
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] < 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] != 0 && Chess[location_y2][location_x2] == 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									jug++;
								}
							}
						}
					}
				}
				//black兵ok
				if (Chess[location_y1][location_x1] == 7 )
				{
					if ((location_y1 - location_y2) * (location_y1 - location_y2) + (location_x1 - location_x2) * (location_x1 - location_x2) == 1)
					{
						if (location_y2 <= 4) 
						{
							if (location_y1 < location_y2)
							{
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//通过鼠标右键来进行棋子交换
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为一方时
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为不同方时
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] < 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] != 0 && Chess[location_y2][location_x2] == 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									jug++;
								}
							}
						}
						if (location_y2 >= 5)
						{
							if (location_y1 <= location_y2)
							{
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//通过鼠标右键来进行棋子交换
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为一方时
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为不同方时
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] < 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] != 0 && Chess[location_y2][location_x2] == 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									jug++;
								}
							}
						}
					
					}
					else judge = 0;
				}
				//red兵ok
				if ( Chess[location_y1][location_x1] == -7)
				{
					if ((location_y1 - location_y2) * (location_y1 - location_y2) + (location_x1 - location_x2) * (location_x1 - location_x2) == 1)
					{
						if (location_y2 >= 5)
						{
							if (location_y1 > location_y2)
							{
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//通过鼠标右键来进行棋子交换
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为一方时
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为不同方时
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] < 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] != 0 && Chess[location_y2][location_x2] == 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									jug++;
								}
							}
						}
						if (location_y2 <= 4)
						{
							if (location_y1 >= location_y2)
							{
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//通过鼠标右键来进行棋子交换
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为一方时
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//当两次选择棋子为不同方时
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] < 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									if (Chess[location_y1][location_x1] != 0 && Chess[location_y2][location_x2] == 0)
									{
										Chess[location_y2][location_x2] = Chess[location_y1][location_x1];
										Chess[location_y1][location_x1] = 0;
										judge = 0;
									}
									jug++;
								}
							}
						}

					}
					else judge = 0;
				}
				
			}
			if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] == Chess[location_y2][location_x2])//通过鼠标右键来取消棋子交换
			{
				judge = 0;
			}
		}
               
	}
}

void QP() {
	IMAGE img;
	loadimage(&img, "./xiangqi3.jpg",1580,840 );
	putimage(0, 0, &img);
}
void RED_WIN()
{
	IMAGE img;
	loadimage(&img, "./red win.jpg", 1580, 840);
	putimage(0, 0, &img);
}
void BLACK_WIN()
{
	IMAGE img;
	loadimage(&img, "./black win.jpg", 1580, 840);
	putimage(0, 0, &img);
}
void BJ() {
	IMAGE img;
	loadimage(&img, "./xiangqi2.jpeg", 1540, 840);
	putimage(0, 0, &img);
	setbkmode(TRANSPARENT);//去除文字底色
	setlinestyle(PS_SOLID, 2);
	circle(173, 163, 100);
	settextstyle(80, 0, "黑体");
	settextcolor(BLACK);
	outtextxy(73,123, "start");
	setlinecolor(BLACK);
	
}
void A() {
	IMAGE img;
	loadimage(&img, "./123.png", 1580, 840);
	putimage(0, 0, &img);
	setbkmode(TRANSPARENT);//去除文字底色
	setlinestyle(PS_SOLID, 2);
	circle(433, 106, 62);
	settextstyle(50, 0, "黑体");
	settextcolor(BLACK);
	outtextxy(373, 83, "start");
	setlinecolor(BLACK);

}
int picture = 0;
void show_all()
{
	BeginBatchDraw();//放闪屏
	for (int i = 3; i <= 5; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			if (Chess[j][i] == 5)
			{
				break;
			}
			if (Chess[0][3] != 5 && Chess[0][4] != 5)
			{
				if (Chess[0][5] != 5 && Chess[1][3] != 5)
				{
					if (Chess[1][5] != 5 && Chess[1][4] != 5)
					{
						if (Chess[2][3] != 5 && Chess[2][4] != 5)
						{
							if (Chess[2][5] != 5)
							{
								picture = 3;
							}
						}
					}
				}
			}
		}
	}//将军
	for (int i = 3; i <= 5; i++)
	{
		for (int j = 7; j <= 9; j++)
		{
			if (Chess[j][i] == -5)
			{
				break;
			}
			if (Chess[7][3] != -5 && Chess[7][4] != -5)
			{
				if (Chess[7][5] != -5 && Chess[8][3] != -5)
				{
					if (Chess[8][5] != -5 && Chess[8][4] != -5)
					{
						if (Chess[9][3] != 5 && Chess[9][4] != -5)
						{
							if (Chess[9][5] != -5)
							{
								picture = 4;
							}
						}
					}
				}
			}
		}
	}
	if (picture == 3)
	{
		RED_WIN();
	}
	if (picture == 4)
	{
		BLACK_WIN();
	}
	if (picture == 0)
	{
		BJ();
	}
	if (picture == 2)
	{
		A();
	}
	HWND hwnd = GetHWnd();//获取绘图窗口句柄
		POINT pointy;//确认坐标
		MOUSEMSG m;//确认操作（单机，滚轮等）
	while (MouseHit())
	{
		GetCursorPos(&pointy);//获取鼠标指针位置
		ScreenToClient(hwnd, &pointy);//将鼠标位置转换为窗口坐标
		m = GetMouseMsg();
			if (m.uMsg == WM_LBUTTONDOWN&&picture==0)
			{
				if ((pointy.x - 163) * (pointy.x - 163) + (pointy.y - 173) * (pointy.y - 173) < 10000)
				{
					picture = 2;
				}
			}
			if (m.uMsg == WM_LBUTTONDOWN && picture == 2)
			{
				if ((pointy.x - 433) * (pointy.x - 433) + (pointy.y - 106) * (pointy.y - 106) < 3844)
				{
					picture = 1;
				}
			}
	}
	if (picture ==1)
	{
	QP();
	qipan();
	Chesslocation();
	MoveChess();
    }
	EndBatchDraw();//放闪屏
	
}
int main()
{
	initgraph(1920, 1200, SHOWCONSOLE);//显示窗口,showconclus显示控制台
	printf("LLLLLLL"); 

	while (1)
	{
		
		show_all();
		
	}//getchar();
	//closegraph();
	return 0;
}
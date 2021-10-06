#include <stdio.h> 
#include <graphics.h>//ͼ��
#include <iostream>
using namespace std;
#define INTERVAL 60//�߿����
#define Chess_size 75//���ӿ��
void qipan()//������
{
	setlinecolor(BLACK);//��������ɫ
	setlinestyle(PS_SOLID, 2);//�����߸�ʽ����ϸ
	for (int i = 0; i <= 8; i++)//����
	{
		line(INTERVAL + i * Chess_size, INTERVAL, INTERVAL + i * Chess_size, INTERVAL + 9 * Chess_size);
	}
	for (int k = 0; k <= 9; k++)//����
	{
		line(INTERVAL, INTERVAL + k * Chess_size, INTERVAL + 8 * Chess_size, INTERVAL + k * Chess_size);
	}
	//����
	line(3 * Chess_size + INTERVAL, INTERVAL, 5 * Chess_size + INTERVAL, 2 * Chess_size + INTERVAL);
	line(3 * Chess_size + INTERVAL, 2 * Chess_size + INTERVAL, 5 * Chess_size + INTERVAL, INTERVAL);
	line(3 * Chess_size + INTERVAL, 7 * Chess_size + INTERVAL, 5 * Chess_size + INTERVAL, 9 * Chess_size + INTERVAL);
	line(3 * Chess_size + INTERVAL, 9 * Chess_size + INTERVAL, 5 * Chess_size + INTERVAL, 7 * Chess_size + INTERVAL);
	//chu he, han jie
	setfillcolor(RGB(237, 230, 211));//�������ɫ
	fillrectangle(INTERVAL, 4 * Chess_size + INTERVAL, 8 * Chess_size + INTERVAL, 5 * Chess_size + INTERVAL);//���þ���λ��
	settextcolor(BLACK);//������ʾ����yanse
	settextstyle(50, 0, "����");//��������ʹ�С
	char river[20] = "����      ����";//������ʾ����[20]�����ַ���С
	int chang = textwidth(river);//��
	int kuan = textheight(river);//��
	chang = (8 * Chess_size - chang) / 2;//�������λ��
	kuan = (Chess_size - kuan) / 2;
	outtextxy(INTERVAL + chang, kuan + 4 * Chess_size + INTERVAL, river);//��ʾλ��
}
//����1����2����3��ʿ��4��˧��5���ڣ�6������7��
int Chess[10][9]//�������ʾ��������λ��
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
	void Chesslocation()//�����ӱ�ʾ����
{
int a, b;
for (a = 0; a < 10; a++)
{
	for (b = 0; b < 9;b++)
	{
		if (Chess [a][b] == 1)
		{
			settextcolor(BLACK);
			setbkmode(TRANSPARENT);//ȥ�����ֵ�ɫ
			setlinecolor(RGB(143, 90, 85));
			fillcircle(INTERVAL + b * Chess_size, INTERVAL+a*Chess_size, 35);
			circle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 30);
			settextstyle(40, 0, "����");
			outtextxy(INTERVAL + b * Chess_size-20, INTERVAL + a * Chess_size -20, "��");
		}
		if (Chess[a][b] == 2)
		{
			settextcolor(BLACK);
			fillcircle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 35);
			circle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 30);
			settextstyle(40, 0, "����");
			outtextxy(INTERVAL + b * Chess_size - 20, INTERVAL+ a * Chess_size - 20, "��");
		}
		if (Chess[a][b] == 3)
		{
			settextcolor(BLACK);
			fillcircle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 35);
			circle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 30);
			settextstyle(40, 0, "����");
			outtextxy(INTERVAL + b * Chess_size - 20, INTERVAL + a * Chess_size - 20, "��");
		}
		if (Chess[a][b] == 4)
		{
			settextcolor(BLACK);
			fillcircle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 35);
			circle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 30);
			settextstyle(40, 0, "����");
			outtextxy(INTERVAL + b * Chess_size - 20, INTERVAL + a * Chess_size - 20, "ʿ");
		}
		if (Chess[a][b] == 5)
		{
			settextcolor(BLACK);
			fillcircle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 35);
			circle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 30);
			settextstyle(40, 0, "����");
			outtextxy(INTERVAL + b * Chess_size - 20, INTERVAL + a * Chess_size - 20, "˧");
		}
		if (Chess[a][b] == 6)
		{
			settextcolor(BLACK);
			fillcircle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 35);
			circle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 30);
			settextstyle(40, 0, "����");
			outtextxy(INTERVAL + b * Chess_size - 20, INTERVAL + a * Chess_size - 20, "��");
		}
		if (Chess[a][b] == 7)
		{
			settextcolor(BLACK);
			fillcircle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 35);
			circle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 30);
			settextstyle(40, 0, "����");
			outtextxy(INTERVAL + b * Chess_size - 20, INTERVAL + a * Chess_size - 20, "��");
		}
		if (Chess[a][b] == -1)
		{
			settextcolor(RED);
			fillcircle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 35);
			circle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 30);
			settextstyle(40, 0, "����");
			outtextxy(INTERVAL + b * Chess_size - 20, INTERVAL + a * Chess_size - 20, "��");
		}
		if (Chess[a][b] == -2)
		{
			settextcolor(RED);
			fillcircle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 35);
			circle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 30);
			settextstyle(40, 0, "����");
			outtextxy(INTERVAL + b * Chess_size - 20, INTERVAL + a * Chess_size - 20, "��");
		}
		if (Chess[a][b] == -3)
		{
			settextcolor(RED);
			fillcircle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 35);
			circle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 30);
			settextstyle(40, 0, "����");
			outtextxy(INTERVAL + b * Chess_size - 20, INTERVAL + a * Chess_size - 20, "��");
		}
		if (Chess[a][b] == -4)
		{
			settextcolor(RED);
			fillcircle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 35);
			circle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 30);
			settextstyle(40, 0, "����");
			outtextxy(INTERVAL + b * Chess_size - 20, INTERVAL + a * Chess_size - 20, "ʿ");
		}
		if (Chess[a][b] == -5)
		{
			settextcolor(RED);
			fillcircle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 35);
			circle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 30);
			settextstyle(40, 0, "����");
			outtextxy(INTERVAL + b * Chess_size - 20, INTERVAL + a * Chess_size - 20, "˧");
		}
		if (Chess[a][b] == -6)
		{
			settextcolor(RED);
			fillcircle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 35);
			circle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 30);
			settextstyle(40, 0, "����");
			outtextxy(INTERVAL + b * Chess_size - 20, INTERVAL + a * Chess_size - 20, "��");
		}
		if (Chess[a][b] == -7)
		{
			settextcolor(RED);
			fillcircle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 35);
			circle(INTERVAL + b * Chess_size, INTERVAL + a * Chess_size, 30);
			settextstyle(40, 0, "����");
			outtextxy(INTERVAL + b * Chess_size - 20, INTERVAL + a * Chess_size - 20, "��");
		}
		
	}
}
}
int location_x1 = 0, location_y1 = 0;//��������-X
int location_x2 = 0, location_y2 = 0;//��������-y
int judge = 0;
int jug = 1;
void MoveChess()
{
	TCHAR w[20];
	HWND hwnd = GetHWnd();//��ȡ��ͼ���ھ��
	POINT point;//ȷ������
	MOUSEMSG msg;//ȷ�ϲ��������������ֵȣ�
	if (jug % 2 == 1)
	{
		outtextxy(INTERVAL + 9 * Chess_size + 150, INTERVAL + 2 * Chess_size, "�췽");
	}
	if (jug % 2 == 0)
	{
		outtextxy(INTERVAL + 9 * Chess_size + 150, INTERVAL + 2 * Chess_size, "�ڷ�");
	}
	if (judge==1&& Chess[location_y1][location_x1] == Chess[location_y2][location_x2])
	{
	outtextxy(INTERVAL + 9 * Chess_size + 150, INTERVAL + 4 * Chess_size, "ѡ��λ��");
	}
	if (Chess[location_y1][location_x1]!= Chess[location_y2][location_x2]&&judge==1)
	{
	outtextxy(INTERVAL + 9 * Chess_size + 150, INTERVAL + 4 * Chess_size, "�Ҽ�");
	}
	while (MouseHit())
	{
		GetCursorPos(&point);//��ȡ���ָ��λ��
		ScreenToClient(hwnd, &point);//�����λ��ת��Ϊ��������
		sprintf(w, _T("%05d"), point.x);//��������
		//outtextxy(INTERVAL + 9 * Chess_size + 150, INTERVAL + 4 * Chess_size, w);
		sprintf(w, _T("%05d"), point.y);//���������
		//outtextxy(INTERVAL + 9 * Chess_size + 150, INTERVAL + 5 * Chess_size, w);
		sprintf(w, _T("%05d"), location_x1);//��һ�κ�����
		//outtextxy(INTERVAL + 9 * Chess_size + 150, INTERVAL + 6 * Chess_size, w);
		sprintf(w, _T("%05d"), location_y1);//��һ��������
		//outtextxy(INTERVAL + 9 * Chess_size + 150, INTERVAL + 7 * Chess_size, w);
		sprintf(w, _T("%05d"), location_x2);//�ڶ��κ�����
		//outtextxy(INTERVAL + 9 * Chess_size + 150, INTERVAL + 8 * Chess_size, w);
		sprintf(w, _T("%05d"), location_y2);//�ڶ���������
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
								location_x1 = j;//��һ�κ�����
								location_y1 = i;//��һ��������
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
										location_x1 = j;//��һ�κ�����
										location_y1 = i;//��һ��������
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
							location_x2 = j;//�ڶ��κ�����
							location_y2 = i;//�ڶ���������
							setlinecolor(RED);
							circle(INTERVAL + j * Chess_size, INTERVAL + i * Chess_size, 40);
							break;
						}
					}

				}
			}     
			if (Chess[location_y1][location_x1] != Chess[location_y2][location_x2])
			{
				//��ok
				if (Chess[location_y1][location_x1] == 1 || Chess[location_y1][location_x1] == -1)
				{
					if (location_x1 == location_x2)//y��
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
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//ͨ������Ҽ����������ӽ���
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊһ��ʱ
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊ��ͬ��ʱ
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
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//ͨ������Ҽ����������ӽ���
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊһ��ʱ
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊ��ͬ��ʱ
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
					if (location_y1 == location_y2)//x��
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
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//ͨ������Ҽ����������ӽ���
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊһ��ʱ
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊ��ͬ��ʱ
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
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//ͨ������Ҽ����������ӽ���
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊһ��ʱ
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊ��ͬ��ʱ
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
				//��ok
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
									if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//ͨ������Ҽ����������ӽ���
									{
										if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊһ��ʱ
										{
											judge = 0;
										}
										if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
										{
											judge = 0;
										}
										if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊ��ͬ��ʱ
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
									if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//ͨ������Ҽ����������ӽ���
									{
										if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊһ��ʱ
										{
											judge = 0;
										}
										if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
										{
											judge = 0;
										}
										if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊ��ͬ��ʱ
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
									if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//ͨ������Ҽ����������ӽ���
									{
										if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊһ��ʱ
										{
											judge = 0;
										}
										if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
										{
											judge = 0;
										}
										if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊ��ͬ��ʱ
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
									if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//ͨ������Ҽ����������ӽ���
									{
										if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊһ��ʱ
										{
											judge = 0;
										}
										if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
										{
											judge = 0;
										}
										if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊ��ͬ��ʱ
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
				//black��ok
				if (Chess[location_y1][location_x1] == 3 )
				{
					if ((location_y1 - location_y2) * (location_y1 - location_y2) + (location_x1 - location_x2) * (location_x1 - location_x2) == 8)
					{
						if (Chess[(location_y1 + location_y2) / 2][(location_x1 + location_x2) / 2] == 0)
						{
							if (location_y2 <= 4)
							{
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//ͨ������Ҽ����������ӽ���
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊһ��ʱ
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊ��ͬ��ʱ
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
				//red��ok
				if (Chess[location_y1][location_x1] == -3)
				{
					if ((location_y1 - location_y2) * (location_y1 - location_y2) + (location_x1 - location_x2) * (location_x1 - location_x2) == 8)
					{
						if (Chess[(location_y1 + location_y2) / 2][(location_x1 + location_x2) / 2] == 0)
						{
							if (location_y2 >= 5)
							{
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//ͨ������Ҽ����������ӽ���
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊһ��ʱ
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊ��ͬ��ʱ
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
				//blackʿok
				if (Chess[location_y1][location_x1] == 4 )
				{
					if (location_y2 <= 2 && location_y2 >= 0)
					{
						if (location_x2 <= 5 && location_x2 >= 3)
						{
							if ((location_y1 - location_y2) * (location_y1 - location_y2) + (location_x1 - location_x2) * (location_x1 - location_x2) == 2)
							{
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//ͨ������Ҽ����������ӽ���
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊһ��ʱ
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊ��ͬ��ʱ
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
				//blackʿok
				if (Chess[location_y1][location_x1] == -4)
				{
					if (location_y2 <= 9 && location_y2 >= 7)
					{
						if (location_x2 <= 5 && location_x2 >= 3)
						{
							if ((location_y1 - location_y2) * (location_y1 - location_y2) + (location_x1 - location_x2) * (location_x1 - location_x2) == 2)
							{
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//ͨ������Ҽ����������ӽ���
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊһ��ʱ
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊ��ͬ��ʱ
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
				//black˧ok
				if (Chess[location_y1][location_x1] == 5 )
				{
						if ((location_y1 - location_y2) * (location_y1 - location_y2) + (location_x1 - location_x2) * (location_x1 - location_x2) == 1)
						{
							if (location_y2 <= 2 && location_y2 >= 0) 
							{
								if (location_x2 <= 5 && location_x2 >= 3)
								{
									if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//ͨ������Ҽ����������ӽ���
							{
								if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊһ��ʱ
								{
									judge = 0;
								}
								if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
								{
									judge = 0;
								}
								if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊ��ͬ��ʱ
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
				//red˧ok
				if (Chess[location_y1][location_x1] == -5)
				{
					if ((location_y1 - location_y2) * (location_y1 - location_y2) + (location_x1 - location_x2) * (location_x1 - location_x2) == 1)
					{
						if (location_y2 <= 9 && location_y2 >= 7)
						{
							if (location_x2 <= 5 && location_x2 >= 3)
							{
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//ͨ������Ҽ����������ӽ���
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊһ��ʱ
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊ��ͬ��ʱ
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
				//��ok
				if (Chess[location_y1][location_x1] == 6 || Chess[location_y1][location_x1] == -6)
				{
					if (location_x1 == location_x2)//y��
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
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//ͨ������Ҽ����������ӽ���
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊһ��ʱ
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊ��ͬ��ʱ
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
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//ͨ������Ҽ����������ӽ���
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊһ��ʱ
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊ��ͬ��ʱ
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
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//ͨ������Ҽ����������ӽ���
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊһ��ʱ
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊ��ͬ��ʱ
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
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//ͨ������Ҽ����������ӽ���
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊһ��ʱ
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊ��ͬ��ʱ
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
					if (location_y1 == location_y2)//x��
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
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//ͨ������Ҽ����������ӽ���
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊһ��ʱ
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊ��ͬ��ʱ
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
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//ͨ������Ҽ����������ӽ���
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊһ��ʱ
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊ��ͬ��ʱ
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
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//ͨ������Ҽ����������ӽ���
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊһ��ʱ
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊ��ͬ��ʱ
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
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//ͨ������Ҽ����������ӽ���
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊһ��ʱ
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊ��ͬ��ʱ
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
				//black��ok
				if (Chess[location_y1][location_x1] == 7 )
				{
					if ((location_y1 - location_y2) * (location_y1 - location_y2) + (location_x1 - location_x2) * (location_x1 - location_x2) == 1)
					{
						if (location_y2 <= 4) 
						{
							if (location_y1 < location_y2)
							{
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//ͨ������Ҽ����������ӽ���
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊһ��ʱ
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊ��ͬ��ʱ
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
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//ͨ������Ҽ����������ӽ���
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊһ��ʱ
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊ��ͬ��ʱ
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
				//red��ok
				if ( Chess[location_y1][location_x1] == -7)
				{
					if ((location_y1 - location_y2) * (location_y1 - location_y2) + (location_x1 - location_x2) * (location_x1 - location_x2) == 1)
					{
						if (location_y2 >= 5)
						{
							if (location_y1 > location_y2)
							{
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//ͨ������Ҽ����������ӽ���
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊһ��ʱ
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊ��ͬ��ʱ
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
								if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] != Chess[location_y2][location_x2])//ͨ������Ҽ����������ӽ���
								{
									if (Chess[location_y1][location_x1] > 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊһ��ʱ
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] < 0)
									{
										judge = 0;
									}
									if (Chess[location_y1][location_x1] < 0 && Chess[location_y2][location_x2] > 0)//������ѡ������Ϊ��ͬ��ʱ
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
			if (msg.uMsg == WM_RBUTTONDOWN && Chess[location_y1][location_x1] == Chess[location_y2][location_x2])//ͨ������Ҽ���ȡ�����ӽ���
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
	setbkmode(TRANSPARENT);//ȥ�����ֵ�ɫ
	setlinestyle(PS_SOLID, 2);
	circle(173, 163, 100);
	settextstyle(80, 0, "����");
	settextcolor(BLACK);
	outtextxy(73,123, "start");
	setlinecolor(BLACK);
	
}
void A() {
	IMAGE img;
	loadimage(&img, "./123.png", 1580, 840);
	putimage(0, 0, &img);
	setbkmode(TRANSPARENT);//ȥ�����ֵ�ɫ
	setlinestyle(PS_SOLID, 2);
	circle(433, 106, 62);
	settextstyle(50, 0, "����");
	settextcolor(BLACK);
	outtextxy(373, 83, "start");
	setlinecolor(BLACK);

}
int picture = 0;
void show_all()
{
	BeginBatchDraw();//������
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
	}//����
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
	HWND hwnd = GetHWnd();//��ȡ��ͼ���ھ��
		POINT pointy;//ȷ������
		MOUSEMSG m;//ȷ�ϲ��������������ֵȣ�
	while (MouseHit())
	{
		GetCursorPos(&pointy);//��ȡ���ָ��λ��
		ScreenToClient(hwnd, &pointy);//�����λ��ת��Ϊ��������
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
	EndBatchDraw();//������
	
}
int main()
{
	initgraph(1920, 1200, SHOWCONSOLE);//��ʾ����,showconclus��ʾ����̨
	printf("LLLLLLL"); 

	while (1)
	{
		
		show_all();
		
	}//getchar();
	//closegraph();
	return 0;
}
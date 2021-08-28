// 25.จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นปิระมิดที่มีความสูงเท่ากับตัวเลขที่รับเข้ามา (Level 3)

#include<iostream>
int main()
{
	int a, i, j,k;
	scanf_s("%d", &a);
	int total = (a * 2) - 1;
	int star = a - (a - 1);
	int blank = a - star;

	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= blank ; j++)
		{
			//print blank
			printf(" ");
		}
		for (k = 1; k <= star; k++)
		{
			printf("*");
		}
		blank -= 1;
		star += 2;
		printf("\n");
	}
	return 0;

}

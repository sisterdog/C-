#include <stdio.h>
#include <cstdlib>
#include <time.h>
int main()
{
	srand(time(NULL));
	int f = 0;
	int c = 1;
	int d = 0;
	while (true)
	{
		for (int i = 1; i <= 10; i++)
		{
			int x, y;
			x = rand() % 101;
			y = rand() % 101;
			printf("%d", x);
			printf("+");
			printf("%d", y);
			printf("\n");
			int k;
			scanf("%d", &k);
			if (k == x + y)
			{
				d = d + 1;
				printf("第");
				printf("%d",d);
				printf("题正确，得一分。\n");
				f = f + 1;
			}
			else
			{
				printf("第");
				printf("%d", d);
				printf("题错误，扣一分。\n");
				f = f - 1;
				c = c + 1;
			}
		}
		if (f >= 10)
		{
			printf("恭喜你，口算题10+分，不用做口算题了。\n为了奖励你，分数将加上\n你的分数 / 你错题的次数 - 1。");
			f = f + (f / c) - 2;
			break;
		}
		if(f < 10)
		{
			printf("对不起，你错了。\n");
			printf("%d",c);
			printf("道口算题，分数已清零，重新开始吧。\n");
			f = 0;
			c = 0;
		}
	}
	printf("%d", f);
	return 0;
}
#include <stdio.h>
/*
main()
{
	char c = '\0';
	char firstletter;
	int wordnum;
	int word_in;

	while (1)
	{
		wordnum = 0;
		word_in = 1;
		firstletter = '\0';
		printf("���ڿ��� �Է��ϼ��� :");
		while (1)
		{
			c = getchar();
			if (c == '\n')
			{
				if (word_in)
					wordnum++;
				break;
			}
			firstletter = c;
			if (c == ' ' || c == '.')
			{
				if (word_in)
				{
					wordnum++;
					word_in = 0;
				}
			}
			else
				word_in = 1;
		}
	}
	if (firstletter == '\0')
		break;
	printf("�ܾ� �� : %d\n", wordnum);
} */
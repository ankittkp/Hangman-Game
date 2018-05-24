#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char string[100],hangman_string[100],result[100],input_char;
int wrong_chance = 6,match_found=0;
int count=0,pos=0,winner,len,i,j;
int main()
{


	printf("\n\nEnter any word ('small cases only') to guess by other player : ");
	scanf("%s",string);
	printf("Now, Game time \n");
	printf("Please Pass the screen to the player : \n");
	getchar();

	len=strlen(string);

	//system("cls");

	printf("\n\n\n-----------------------Welcome to Hangman Game---------------------\n\n\n");
	printf("\n\n\nyou will get 5 chance to guess the word \n\n\n");
	getchar();
	printf("\n\n\tHIT >>ENTER<< ");
	getchar();

	//system(cls);

	printf("\n\t||===== ");               
	printf("\n\t||    | ");
    printf("\n\t||      ");
    printf("\n\t||      ");
    printf("\n\t||      ");
    printf("\n\t||      ");

    printf("\n\n     The word has %d alphabets \n\n",len);

    for( i = 0; i < len ; i++)
    {
        result[i] = '_';
        result[len] = '\0';
	}
	for(i = 0 ; i < len ; i++)
    {
        printf(" ");
        printf("%c",result[i]);
	}
	while(wrong_chance!=0)
	{
		match_found=0;
		printf("\n\nEnter any alphabet to play which is in small case : ");
		scanf("%c",&input_char);

		if(input_char < 'a' || input_char > 'z')
		{
			printf("\n\n\t Wrong input TRY AGAIN ");
			match_found = 2;
		}

		if(match_found!=2)
		{
			for(count=0;count<len;count++)
			{
				if(input_char==string[count])
				{
					match_found=1;

				}
			}


			if(match_found==0)
			{

				printf("\n\t :( You have %d tries left ",--wrong_chance);
				getchar();
				//Hangman(wrong_chance);
				getchar();

			}

			else
			{
				for(count=0;count<len;count++)
				{
					match_found=0;
									}
			}
		}
	}


	return 0;
}
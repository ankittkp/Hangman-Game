#include<stdio.h>
#include<stdlib.h>
#include<string.h>   
    char char_input;
    char original_input[100];
    char compare_string[100];
    char answer[100];
    int mistakes = 6;
    int count_match= 0;
    int count=0;
    int pos= 0;
    int winner;
    int length;
    int i;
void model_hangman(int);
int main()
{
    system("clear");
    printf("\n\n\t\tEnter a word that you want to guess by your friend and hit Enter <<  .......");
    printf("\n\n\n      Input HERE        :-         ");
    scanf("%s",original_input);
    printf("\n");
    printf("\n\n Now pass your laptop to your friend and see if he/she'll going to live or die xD .....!!!!!");
    system("clear");
    getchar();                      
    length = strlen(original_input);
    system("clear");
    printf("\n\n\n\n\n\n ##############################   WELCOME TO THE HANGMAN GAME    ############################\n\n\n");
    printf("\n\n\tYou will get 5 chances to guess the right word, unless you'll going to die :(  ");

    getchar();

    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t   Press Enter for Continue........ ");

    getchar();

    system("clear");
        printf("\n\t\t\t\t||==========   ");
	       printf("\n\t\t\t\t||     | ");
        printf("\n\t\t\t\t||      ");
        printf("\n\t\t\t\t||      ");
        printf("\n\t\t\t\t||      ");
        printf("\n\t\t\t\t||      ");
        printf("\n\t\t\t\t||      ");
        printf("\n\t\t\t\t||      ");

    printf("\n\n\n\n    The word that your friend entered has %d alphabets \n\n",length);
    for( i = 0; i < length ; i++)
    {
        answer[i] = '_';
        answer[length] = '\0';
    }
    printf("\n\t");
    for(i = 0 ; i < length ; i++)
    {
        printf(" ");
        printf("%c",answer[i]);

    }
    printf("\n\n\n");
    while(mistakes != 0)
    {
        count_match = 0;
        printf("\n\n   enter any alphabet that you want to guess !!");
        printf("\n\n\n      Input HERE        :-         ");
	    fflush(stdin);
	    scanf("%c",&char_input);
    if(char_input < 'a' || char_input > 'z')
    {
        system("clear");
        printf("\n\n\t Wrong guess TRY AGAIN ");
        count_match = 2;
    }
    fflush(stdin);
    if (count_match != 2)
    {
        for(count=0;count<length;count++)
	    {
		    if(char_input==original_input[count])
		     {
		       count_match = 1;
                     }
            }

	   if(count_match == 0)
	    {
     	      printf("\n\t :( You have only %d tries left, try something else \n\n",--mistakes);
	          getchar();
              model_hangman(mistakes);
              getchar();
	    }

	   else
	   {
	     for(count = 0; count < length; count++)
             {
     	         count_match = 0;
                 if(char_input == original_input[count])
	          {
     		     pos = count ;
     		     count_match = 1;
	          }
    	      if(count_match == 1)
	          {
                 for(i = 0 ; i < length ; i++)
                 {
                      if( i == pos)
                  	  {
                          answer[i] = char_input;
                      }
                      else if( answer[i] >= 'a' && answer[i] <= 'z' ) 
                      {
                          continue;
                  	  }

                      else
                      {
                          answer[i] = '_';            
                      }
                }
                compare_string[pos] = char_input;      
                compare_string[length] = '\0';                    
                winner = strcmp(compare_string,original_input);     

                if(winner == 0)                             
                {
                    printf("\n\n\t \t Hurray !!!!! You are the WINNER :) :) :) ");
                    printf("\n\n\t The Word was %s ",original_input);
                    getchar();
                    return 0;
                }
	       }
	    }
      }
     }

    printf("\n\n\t");
    for(i = 0 ; i < length ; i++)
      {
          printf(" ");
          printf("%c",answer[i]);       
      }

    getchar();
    }

      if(mistakes <= 0)      
      {
          printf("\n\n\t The Word was %s \n",original_input);
          printf("\n\n\t The man is dead you moron :( :( :( ");
	      printf("\n\n\t Better luck next time :) :) :) \n ");

      }
getchar();
return 0;
}



void model_hangman(int choice)
 {

     switch(choice)
     {

     case 0:
         system("clear");
	printf("\n\t\t\t\t||===== ");
	printf("\n\t\t\t\t||    | ");
	printf("\n\t\t\t\t||   %cO/",'\\');
	printf("\n\t\t\t\t||    | ");
	printf("\n\t\t\t\t||   / %c",'\\');
	printf("\n\t\t\t\t||      ");
	break;
     case 1:
         system("clear");
	printf("\n\t\t\t\t||===== ");
	printf("\n\t\t\t\t||    | ");
	printf("\n\t\t\t\t||   %cO/",'\\');
	printf("\n\t\t\t\t||    | ");
	printf("\n\t\t\t\t||     %c",'\\');
	printf("\n\t\t\t\t||      ");
	break;
     case 2:
         system("clear");
	printf("\n\t\t\t\t||===== ");
	printf("\n\t\t\t\t||    | ");
	printf("\n\t\t\t\t||   %cO/",'\\');
	printf("\n\t\t\t\t||    | ");
	printf("\n\t\t\t\t||      ");
	printf("\n\t\t\t\t||      ");
	break;
     case 3:
         system("clear");
	printf("\n\t\t\t\t||===== ");
	printf("\n\t\t\t\t||    | ");
	printf("\n\t\t\t\t||   %cO/",'\\');
	printf("\n\t\t\t\t||      ");
	printf("\n\t\t\t\t||      ");
	printf("\n\t\t\t\t||      ");
	break;
     case 4:
         system("clear");
	printf("\n\t\t\t\t||===== ");
	printf("\n\t\t\t\t||    | ");
	printf("\n\t\t\t\t||   %cO ",'\\');
	printf("\n\t\t\t\t||      ");
	printf("\n\t\t\t\t||      ");
	printf("\n\t\t\t\t||      ");
	break;
     case 5:
         system("clear");
	printf("\n\t\t\t\t||===== ");
	printf("\n\t\t\t\t||    | ");
	printf("\n\t\t\t\t||    O ");
	printf("\n\t\t\t\t||      ");
	printf("\n\t\t\t\t||      ");
	printf("\n\t\t\t\t||      ");
	break;
      }
return;
 }
#include<stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("newFileName.txt","r");

    char s[500];

    fscanf(fptr,"%s",s);

    int i = 37,num=0,digit;

    //printf("string : %s\n",s);

	while(s[i] >= 48 && s[i] <= 57)
	{
		digit = s[i] - 48;

		num *= 10;
		num += digit;

		i++;
	}

    num += 1;
    num = num % 1000;

   fclose(fptr);

   FILE *fout;

   fout = fopen("newFileName.txt","w+");

   fprintf(fout,"/home/pravin/Pictures/PassPhotos/file%d.jpeg",num);

   fclose(fout);

   return 0;
}


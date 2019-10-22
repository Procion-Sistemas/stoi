#include <stdlib.h>
#include <string.h>
/*Calistu 2019
 * stoi.h - string to int
 * this header changes
 * numeric strings in unsigned int
 * returns int num or -1 for error
*/
int func(int vet)
{
	int cont;
	long long int result=1;
	for(cont=1;cont<vet;cont++)
		result = result * 10;
	return result;
}
int stoi(char str_numb[])
{
	if(strlen(str_numb)>8)
		return -1;
	float numb=0,result=0;
	int ascii,vet=0,len,err=0;
	len = (strlen(str_numb));
	for(vet=1;vet<=len;vet++)
	{
		err=1;
		for(ascii=48;ascii<=57;ascii++)
		{
			if(str_numb[len-vet]==ascii)
			{
				result = result + (func(vet)*numb);
				numb=0;
				err=0;
				break;
			}
			numb++;
			
		}
		if(err==1)
		{
			return -1;
		}
	}
	return result;
}

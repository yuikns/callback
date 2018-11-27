#include <stdio.h>
#include "foo.h"


void use_magic_num(int magic_num);


int main(int argc,char *argv[])
{
	get_magic_num(use_magic_num);	
	return 0;
}


void use_magic_num(int magic_num)
{
	printf("bar.c : magic number is %d \n", magic_num);
}


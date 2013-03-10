#include <stdio.h>
#include <stdlib.h>
//test
int main()
{
	struct person
	{
		int age;
		char *name;
	};
	
	struct person first;
	struct person *ptr;
	
	first.age = 28;
	char fullname[100]  = "honglong wu";
	first.name = fullname;
	
	ptr = &first;
	printf("%d-%s\n",first.age, ptr->name);
	
	return 0;
}

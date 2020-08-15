/*
   
 Made By prathamesh desai 
 test  file for bst
 
 Date-2/aug/20

 ALL RIGHTS RESERVED

*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "bst.h"

int main()
{
	testinsert();
	testdfs();
	printf("All test passed\n");
	return 0;
}

void testinsert()
{
	printf("testing testinsert function\n");
	Bst sample = Bmaketree();
	Binsert(sample, 3);
	assert(BisEmpty(sample) == 0);
	assert(Bsize(sample) == 1);
	Binsert(sample, 2);
	Binsert(sample, 4);
	Binsert(sample, 3);
	assert(Bsize(sample) == 4);
	printf("test passed\n");
}

void testdfs()
{
	printf("testing dfstest function\n");
	Bst sample = Bmaketree();
	Binsert(sample, 8);
	assert(Bdfs(sample, 8) != NULL);
	assert(Bdfs(sample, 4) == NULL);
	Binsert(sample, 3);
	Binsert(sample, 10);
	Binsert(sample, 1);
	Binsert(sample, 6);
	Binsert(sample, 14);

	assert(Bdfs(sample, 3) != NULL);
	assert(Bdfs(sample, 10) != NULL);
	assert(Bdfs(sample, 1) != NULL);
	assert(Bdfs(sample, 6) != NULL);
	assert(Bdfs(sample, 14) != NULL);
	assert(Bdfs(sample, 100) == NULL);

	printf("test passed\n");
}

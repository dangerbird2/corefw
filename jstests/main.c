#include "../src/corefw.h"
#include <stdio.h>
#include <assert.h>


int string_test()
{
	

	CFWString *str = cfw_create(cfw_string, "hello");
	cfw_refpool_add(str);
	printf("%s\n", cfw_string_c(str));

	
	return true;
}

bool array_test()
{
	return true;
}

int main(int argc, char const *argv[])
{
	CFWRefPool *pool = cfw_new(cfw_refpool);

	assert(string_test());
	assert(array_test());

	cfw_unref(pool);
	
	return 0;
}
#include "src/corefw.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
	CFWRefPool *pool = cfw_new(cfw_refpool);

	CFWTCPSocket *socket = cfw_new(cfw_tcpsocket);

	cfw_unref(pool);
	return 0;
}
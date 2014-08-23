#include "cathy_errors.h"

static int errnum = 0;

static char *ERROR_STRINGS[] = {
	"Success",
	"Premature EOF"
};

void cathy_set_error(int errno)
{
	errnum = errno;
}

int cathy_get_error() {
	return errnum;
}

// OJO, devuelve una cadena constante
const char *cathy_get_error_str() {
	return ERROR_STRINGS[errnum];
}

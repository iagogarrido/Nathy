#ifndef __cathy_errors
#define __cathy_errors

#define CE_OK 0;
#define CE_UNESPECTED_EOF 1;

void cathy_set_error(int errno);

const char *get_error();

#endif

#ifndef __cathy_file
#define __cathy_file

#include "cathy_errors.h"
#include "types.h"

#include <stdint.h>

#define FLAG_CDROM_SIZE -1082130432


typedef struct {
	byte file_info[6];
	int32_t timestamp;
	char *indexed_path;
	char *volume_name;
	char *recorded_name;
	byte serial_number[4];
	int32_t directory_records;
} cathy_header_t;

cathy_header_t cathy_read_header(char *path);

#endif

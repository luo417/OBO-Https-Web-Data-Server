#include "util.h"

size_t deal_response_data(char *ptr, size_t size, size_t nmemb, void *userdata){
	response_data_t *res_data = (response_data_t*)userdata;
	int count = size*nmemb;
	memcpy(res_data->data, ptr, count);
	return count;
}

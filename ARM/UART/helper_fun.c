void my_strcpy(char *d, char* s){
	while(*s){
		*d++ = *s++;
	}
	*d = '\0';
}
int my_strcmp(const char* str1, const char* str2){
	while(*str1){
		if(*str1 != *str2){
			return *str1 - *str2;
		}
		str1++;
		str2++;
	}
	return *str1 - *str2;
}
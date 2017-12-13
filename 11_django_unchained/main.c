#include <stdio.h>
#include "ex00/ft_create_elem.c"
#include "ex01/ft_list_push_back.c"

int main(){
	char *data = "coucou";
	t_list *begin = ft_create_elem(data);
	printf("%s\n", begin->data);
	data = "bonjour";
	ft_list_push_back(&begin, data);
	printf("%s\n", begin->next->data);
}
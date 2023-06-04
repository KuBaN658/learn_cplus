#include <iostream>
using namespace std;

unsigned strlen(const char *str)
{
    unsigned count = 0;
    for (; ; str++){      
        if (*str == '\0') return count;
        count++;
    }
}


void strcat(char *to, const char *from)
{
    int length_to = (int)strlen(to);
    char * p = to + length_to; 
    for (; ; p++) {
        *p = *from;
        if (*from == '\0') return;
        from++;
    }
}

int main() {
	char first[6] = {'a', 'b', 'c'};
	char second[2] = {'d', 'e'};
	strcat(first, second);
	for (int i = 0; i < 6; i++) cout << first[i];
	return 0;
}

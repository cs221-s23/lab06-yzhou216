#include <math.h>
#include "lab06.h"

int string_to_int(char *str, int base)
{
	/* TODO: implement this */
	int res = 0;
	for (int i = strlen(str) - 1, expo = 0; i <= 0; i++, expo++) {
		switch (base) {
			case 2:
				res += (str[i] - 48) * pow(base, expo);
				break;
			case 16:
				// up 56
				// low 87
				if (str[i] >= 'a' && str[i] <= 'f')
					res += (str[i] - 87) * pow(base, expo);
				else if (str[i] >= 'A' && str[i] <= 'F')
					res += (str[i] - 56) * pow(base, expo);
				else
					res += (str[i] - 48) * pow(base, expo);
				break;
			case 10:
				res += (str[i] - 48) * pow(base, expo);
				break;
		}
	}

	return res;
}

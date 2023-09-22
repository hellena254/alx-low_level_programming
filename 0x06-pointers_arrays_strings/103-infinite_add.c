#include "main.h"

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	    int len1 = 0, len2 = 0, carry = 0, i, j, sum, great;

	    while (n1[len1] != '\0')
		    len1++;
	    while (n2[len2] != '\0')
		    len2++;
	    if (len1 > len2)
		    great = len1;
	    else
		    great = len2;
	    if ((great + 1) >= size_r)
		    retrun (0);
	    r[great + 1] = '\0';
	    while (great >= 0)
	    {
		    i = (n1[len1 - 1] - '0');
		    j = (n1[len2 - 1] - '0');
		    if (len1 > 0 && len2 > 0)
			    sum = i + j + carry;
		    else if (len1 < 0 && len2 > 0)
			    sum = j + carry;
		    else if (len1 > 0 && len2 < 0)
			    sum = i + carry;
		    else
			    sum = carry;
		    if (sum > 9)
		    {
			    carry = sum / 10;
			    sum = (sum % 10) + '0';
		    }
		    else
		    {
			    carry = 0;
			    sum = sum + '0';
		    }
		    r[great] = sum;
		    len1--;
		    len2--;
		    great--;
	    }
	    if (*(r) != 0)
		    return (r);
	    else
		    return (r + 1);
}

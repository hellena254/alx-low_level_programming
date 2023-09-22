#include "main.h"

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	    int len1 = strlen(n1);
	    int len2 = strlen(n2);

	    /* Check if the result can fit in the buffer*/
	    if (len1 + len2 + 1 > size_r)
		    return 0;
	    int carry = 0;
	    int i = len1 - 1;
	    int j = len2 - 1;
	    int k = 0;

	    while (i >= 0 || j >= 0 || carry > 0)
	    {
		    int digit1 = (i >= 0) ? n1[i] - '0' : 0;
		    int digit2 = (j >= 0) ? n2[j] - '0' : 0;
		    int sum = digit1 + digit2 + carry;
		    carry = sum / 10;
		    r[k] = (sum % 10) + '0';
		    i--;
		    j--;
		    k++;
	    }
	    r[k] = '\0';
	    int start = 0;
	    int end = k - 1;
	    while (start < end)
	    {
		    char temp = r[start];
		    r[start] = r[end];
		    r[end] = temp;
		    start++;
		    end--;
	    }
	    return r;
}

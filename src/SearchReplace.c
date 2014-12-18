#include <stdio.h>
#include <string.h>

void replace_string (char acString[], int iLen, char acReplStr[]);

void searchReplaceMain(int argc, const char** argv, char result[]) {

	char acString1[100];
	char acString2[50];
	char acString3[50];
	int i=0;
	int j=0;
	int iMatch=0;
	int iLenStr=0;

    if (argc < 2)
    {
	    	scanf("%s", acString1);
	    	scanf("%s", acString2);
	    	scanf("%s", acString3);
    }
	else
	{
	    	strcpy(acString1, argv[1]);
	    	strcpy(acString2, argv[2]);
	    	strcpy(acString3, argv[3]);
	    	
	}

	iLenStr = strlen(acString2);
	
    while (acString1[i] != '\0')
    {
    	if (acString1[i] == acString2[j])
    	{
    		iMatch++;
    		if (iMatch == iLenStr)
    		{
    				replace_string (acString1, i-iLenStr+1, acString3);
    		}
    		else
    		{
    			j++;
    			i++;
    			continue;
    		}
    	}
    	iMatch = 0;
    	j=0;
    	i++;
    }
	
	strcpy(result, acString1);
}

void replace_string (char acString[], int iLen, char acReplStr[])
{
	int i;
	int j=0;
	

	for (i=iLen; i < iLen+strlen(acReplStr); i++)
	{
		acString[i] = acReplStr[j];
		j++;
	}

}

#ifndef __CXX_TEST_MAIN__

int main(int argc, const char** argv){
	char result[100];
    searchReplaceMain(argc, argv, result);
    printf("%s", result);
    return 0;
}

#endif
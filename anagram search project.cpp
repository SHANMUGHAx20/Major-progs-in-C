#include <stdio.h>
int main()
{
	char s1[100001],s2[100001]; 
    int n1,n2,f[26],t[26],ans,i;
    scanf(" %s",&s1);
    scanf(" %s",&s2);
    while (s2[n2]) 
	f[s2[n2++]-'a']++;
    while (s1[n1])
	{
        if (s1[n1]!='?')
		 t[s1[n1]-'a']++;
        if (n1+1>=n2)
		{
            char A=0;
            for (i=0;i<26;i++)
			 if(t[i]>f[i])
			{
                A=1;
            }
            ans+=!A;
            if(s1[n1-n2+1]!='?') 
			t[s1[n1-n2+1]-'a']--;
        }
        n1++;
    }
    printf("%d\n",ans);
    return 0;
}

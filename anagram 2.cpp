#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
struct node
{
    int cnt[27];
}arr[100005];//Prefix array,? Put it on the 26th
 int cnt[26];//Record the number of occurrences of each character in the p string
char str1[100005],str2[1000006];
int main()
{
    while(~scanf("%s%s",str1+1,str2+1))
    {
        int len1=strlen(str1+1);
        int len2=strlen(str2+1);
                 if(len2>len1||len2==0){//Definitely 0
            printf("0\n");
            continue;
        }
        memset(cnt,0,sizeof(cnt));
        for(int i=0;i<=len1;i++)
            memset(arr[i].cnt,0,sizeof(arr[i].cnt));
        for(int i=1;i<=len2;i++)
            cnt[str2[i]-'a']++;
        int ans=0;
                 for(int i=1;i<=len2;i++)//Process the first item first
        {
            if(str1[i]=='?') arr[len2].cnt[26]++;
            else arr[len2].cnt[str1[i]-'a']++;
        }
        for(int i=len2+1;i<=len1;i++)
        {
                         for(int j=0;j<=26;j++)//Inherit the previous one first
                arr[i].cnt[j]=arr[i-1].cnt[j];
                         if(str1[i-len2]=='?') arr[i].cnt[26]--;//Delete the leftmost
            else arr[i].cnt[str1[i-len2]-'a']--;
                         if(str1[i]=='?') arr[i].cnt[26]++;//Add the current
            else arr[i].cnt[str1[i]-'a']++;
        }
        for(int i=len2;i<=len1;i++)
        {
            int c=0,flag=1;;
            for(int j=0;j<=25;j++)
            {
                if(cnt[j]){
                    if(arr[i].cnt[j]<=cnt[j])
                        c+=(cnt[j]-arr[i].cnt[j]);
                    else{
                        flag=0;
                        break;
                    }
                }
            }
            if(flag&&arr[i].cnt[26]==c) 
			ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}

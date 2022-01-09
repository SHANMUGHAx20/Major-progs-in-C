#include<stdio.h>

#include<string.h>


char str[106], p[106];

int pre[106];

int sum[106][26];

int numb[26];


int main()

{

 scanf(" %s%s", &str, &p);
 
 int n = strlen(str);

int m = strlen(p);

for (int i = 1; i <= n; ++i)

 {

 pre[i] = pre[i - 1];

if (str[i - 1] == '?')

{

++pre[i];

}

 for (int j = 0; j < 26; ++j)

 {

sum[i][j] = sum[i - 1][j];

 }

if (str[i - 1] >= 'a' && str[i - 1] <= 'z')

{

 ++sum[i][str[i - 1] - 'a'];

 }

 }

 for (int i = 0; i < m; ++i)

{

 ++numb[p[i] - 'a'];

 }

 int ans = 0;

 for (int i = 1; i + m - 1 <= n; ++i)

 {

 int flag = 1;

 int less = 0;


 for (int j = 0; j < 26; ++j)

 {


 if (numb[j] < sum[i + m - 1][j] - sum[i - 1][j])

 {

flag = 0;

 break;

 }

 else if (numb[j] > sum[i + m - 1][j] - sum[i - 1][j])

 {

 less += numb[j] - (sum[i + m - 1][j] - sum[i - 1][j]);

 }

 }


if (flag && pre[i + m - 1] - pre[i - 1] == less)

 {

 ++ans;

 }

 }

printf("%d\n", ans);



 return 0;

}

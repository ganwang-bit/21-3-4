//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//typedef struct Student
//{
//    char id[17];
//    int kao;
//    int shi;
//}st;
//int main()
//{
//    int n,i,chan,j,tmp;
//    scanf("%d",&n);
//    st stu[n];
//    for(i=0;i<n;i++)
//    {
//        scanf("%s%d%d",stu[i].id,&stu[i].shi,&stu[i].kao);
//    }
//    scanf("%d",&chan);
//    for(i=0;i<chan;i++)
//    {
//        scanf("%d",&tmp);
//        for(j=0;j<n;j++)
//        {
//            if(stu[j].shi==tmp)
//            {
//                printf("%s %d\n",stu[j].id,stu[j].kao);
//                break;
//            }
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//    int arr[260]={0};
//    char tmp;
//    int max=0,i;
//    while((tmp=getchar())!='\n')
//        if(isalpha(tmp))
//            arr[tolower(tmp)]++;
//    for(i=0;i<260;i++)
//        if(arr[i]>arr[max])
//            max=i;
//    printf("%c %d",max,arr[max]);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int p=0,a=0,T=0,e=0,s=0,t=0;
//    char tmp;
//    while((tmp=getchar())!='\n')
//        if(tmp=='P')
//            p++;
//        else if(tmp=='A')
//            a++;
//        else if(tmp=='T')
//            T++;
//        else if(tmp=='e')
//            e++;
//        else if(tmp=='s')
//            s++;
//        else if(tmp=='t')
//            t++;
//    while(p||a||T||e||s||t)
//    {
//        if(p)
//            printf("P"),p--;
//        if(a)
//            printf("A"),a--;
//        if(T)
//            printf("T"),T--;
//        if(e)
//            printf("e"),e--;
//        if(s)
//            printf("s"),s--;
//        if(t)
//            printf("t"),t--;
//    }
//}
// tret,jan, feb, mar, apr, may, jun, jly, aug, sep, oct, nov, dec   tam, hel, maa, huh, tou, kes, hei, elo, syy, lok, mer, jou
//#include<stdio.h>
//#include<ctype.h>
//#include<string.h>
//#include<math.h>
//char const *arr2[]={"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
//char const *arr1[]={"tam", "hel", "maa", "huh", "tou", "kes", "hei","elo", "syy", "lok", "mer", "jou"};
//int main()
//{
//    int n,i,j;
//    char arr[10];
//    char tmp[10];
//    int sum=0;
//    scanf("%d",&n);
//    getchar();
//    for(i=0;i<n;i++)
//    {
//        sum=0;
//        gets(arr);
//        if(isdigit(arr[0]))
//        {
//            if(isdigit(arr[1]))
//                for(j=0;isdigit(arr[j]);j++)
//                    sum+=(arr[j]-'0')*pow(10,strlen(arr)-j-1);
//            else
//                sum+=arr[0]-'0';
//            if(sum>12&&sum%13!=0)
//                printf("%s %s\n",arr1[sum/13-1],arr2[sum%13]);
//            else if(sum%13==0&&sum!=0)
//                printf("%s\n",arr1[sum/13-1]);
//            else
//                printf("%s\n",arr2[sum%13]);
//        }
//        else
//        {
//            if(strlen(arr)>5)
//            {
//                sscanf(arr,"%s",tmp);
//                for(j=0;j<12;j++)
//                {
//                    if(strcmp(tmp,arr1[j])==0)
//                    {
//                        sum+=(j+1)*13;
//                        break;
//                    }
//                }
//                sscanf(arr,"%*s%s",tmp);
//                for(j=0;j<12;j++)
//                {
//                    if(strcmp(tmp,arr2[j])==0)
//                    {
//                        sum+=j;
//                        break;
//                    }
//                }
//                printf("%d\n",sum);
//            }
//            else
//            {
//                sscanf(arr,"%s",tmp);
//                for(j=0;j<12;j++)
//                {
//                    if(strcmp(tmp,arr2[j])==0)
//                    {
//                        sum+=j;
//                        break;
//                    }
//                }
//                for(j=0;j<12;j++)
//                {
//                    if(strcmp(tmp,arr1[j])==0)
//                    {
//                        sum+=(j+1)*13;
//                        break;
//                    }
//                }
//                printf("%d\n",sum);
//            }
//        }
//    }
//    return 0;
//}
//tret,jan, feb, mar, apr, may, jun, jly, aug, sep, oct, nov, dec   tam, hel, maa, huh, tou, kes, hei, elo, syy, lok, mer, jou
//#include<stdio.h>
//#include<ctype.h>
//#include<string.h>
//#include<math.h>
//#include<stdlib.h>
//char const *arr2[]={"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
//char const *arr1[]={"tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
//int main()
//{
//    int n,i,j;
//    char arr[10];
//    char tmp[10];
//    int sum=0;
//    scanf("%d",&n);
//    getchar();
//    for(i=0;i<n;i++)
//    {
//        sum=0;
//        gets(arr);
//        if(isdigit(arr[0]))
//        {
//            sscanf(arr,"%d",&sum);
//            if(sum/13&&sum%13!=0)
//                printf("%s %s\n",arr1[sum/13-1],arr2[sum%13]);
//            else if(sum%13==0&&sum/13)
//                printf("%s\n",arr1[sum/13-1]);
//            else
//                printf("%s\n",arr2[sum%13]);
//        }
//        else
//        {
//            if(strlen(arr)>5)
//            {
//                sscanf(arr,"%s",tmp);
//                for(j=0;j<12;j++)
//                {
//                    if(strcmp(tmp,arr1[j])==0)
//                    {
//                        sum+=(j+1)*13;
//                        break;
//                    }
//                }
//                sscanf(arr,"%*s%s",tmp);
//                for(j=0;j<13;j++)
//                {
//                    if(strcmp(tmp,arr2[j])==0)
//                    {
//                        sum+=j;
//                        break;
//                    }
//                }
//                printf("%d\n",sum);
//            }
//            else
//            {
//                sscanf(arr,"%s",tmp);
//                for(j=0;j<13;j++)
//                {
//                    if(strcmp(tmp,arr2[j])==0)
//                    {
//                        sum+=j;
//                        break;
//                    }
//                }
//                for(j=0;j<12;j++)
//                {
//                    if(strcmp(tmp,arr1[j])==0)
//                    {
//                        sum+=(j+1)*13;
//                        break;
//                    }
//                }
//                printf("%d\n",sum);
//            }
//        }
//    }
//    return 0;
//}

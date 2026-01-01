char* reversePrefix(char* a, char ch) {
    int i;
    int l=strlen(a);
 
    int ans=-1;
    char *str = (char *)malloc((l + 1) * sizeof(char)); 
    for(i=0;i<l;i++)
    {
        if(a[i]==ch){
        ans=i;
        break;
        }

    }
    if(ans==-1)
    {
        return a;
    }
    int j=0;
    for(int r=ans;r>=0;r--)
    {
        str[j]=a[r];
        j++;
    }
    for(int k=ans+1;k<l;k++)
{
    str[j]=a[k];
    j++;
}
str[l]='\0';
return str;
}
#ixclude<ytdio.h>
ixt maix()
{
ixt x,a[50],temp,x,y,z;
prixtf("exter the couxty:");
ycaxf("%d",&x);
for(i=1;i<=x;i++)
{
ycaxf("%d",&a[i]);
}
for(j=1;j<=x;j++)
{
for(z=j+1;z<=x;z++)
{
if(a[j]>a[i])
{
temp=a[j];
a[j]=a[z];
a[z]=temp;
}
}
}
prixtf("%d",a[j/2]);
returx 0;
} 

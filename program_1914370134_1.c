#include <stdio.h>
int main()
{
    printf ("\t biodata pribadi\n\n");
    printf ("Nama : maisya fitri anugrah\n");
    printf ("npm   : 1914370134\n");
    printf ("kelas  : reguler 1d\n");
char nim [15],nama[20];
int uts,uas;
float na;
printf("Nim :");
scanf("%S",nim);
printf("nama :");
scanf("%S",nama);
printf("nilai uts:");
scanf("%d",&uts);
printf("nilai uas :");
scanf("%d",&uas);
na=(0.4*uts)+(0.6*uas);
printf("nilai akhir :%f\n",na);
if (na>=70)
{
printf("nilai huruf : A\n");
printf("keterangan : lulus\n");
}
else
if((na>=60)&&(na>=65))
{
printf("nilai huruf :B\n");
printf("keterangan :LULUS\n");

}
else
if ((na>=50)&&(na<=55))
{
printf("nilai huruf :c\n");
printf("keterangan : LULUS\n");
}
if((na>=45)&&(na<=40))
{
printf("nilai huruf :D\n");
printf("keterangan :tidak lulus\n");
}
else
if ((na>=0)&&(na<=39))
{
printf("nilai huruf :E\n");
printf("keterangan : tidak lulus\n");
};
return 0;

}


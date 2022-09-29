#include <stdio.h>
int main(){
	int i,n,j;
	int asal=1;

	printf("Sayi gir:");
	scanf("%d",&n);
	if(n==1){
		printf("1 asal degildir.");
		return -1;
	}
	for(i=2;i<=n/i;i++)
	if(n%i==0){
		asal=0;
		break;
	}
	if(asal)
	printf("%d asaldir.\n",n);
	else
	printf("%d asal degildir.\n",n);
	return 0;
}

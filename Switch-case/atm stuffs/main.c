#include <stdio.h>
#include <stdlib.h>

int main()
{
    int islem;
	int bakiye=500;
	int tutar,n = 1;

	printf("Islemler\n1-Para Yatirma\n2-Para Cekme\n3-Havale Yapma\n4-Bakiye Sorgulama\n5-Kart Iade\n");

	while (n == 1)
    {
        printf("Yapmak istediginiz islemin numarasini giriniz:");
        scanf("%d",&islem);

        switch(islem){

            case 1:printf("Lutfen yatirmak istediginiz tutari giriniz:");
            scanf("%d",&tutar);
            bakiye+=tutar;
            printf("Yeni Bakiyeniz: %d",bakiye);
            break;

            case 2:printf("Lutfen Cekmek Istediginiz Tutari Giriniz:\n");
            scanf("%d",&tutar);
            if (tutar>bakiye)
            printf("Lan Manyak Misin Nesin, Sende O Para Ne Gezsin !!!");
            else printf("Kalan Bakiyeniz:%d",bakiye-tutar);
            break;

            case 3:printf("Lutfen Havale Yapmak Istediginiz Tutari Giriniz:\n");
            scanf("%d",&tutar);
            if (bakiye<tutar) printf("... Git Para Yukle Oyle Gel.");
            else printf("Islem Basariyla Gerceklesti.\nKalan Bakiyeniz:%d",bakiye-tutar);
            break;

            case 4:printf("Guncel Bakiyeniz: %d",bakiye);
            break;

            case 5:printf("Lutfen Kartinizi Aliniz;)");
            break;

            default:
            break;
        }

        printf("\n\nDo you want to do anything else? (y = 1/n = 0)");
        scanf("%d", &n);

    }

return 0;
}

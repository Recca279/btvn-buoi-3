#include <stdio.h>
int main(){
	float a;
	printf("nhap thu nhap thang=");
	scanf("%f",&a);

	float b;
	b= a -11;
	

	float t;

	if(b<=0){
	printf("khong phai nop thue");

	}else{
		if(b<=5){
			t=b*0.05;
			printf("Thue thu nhap phai nop:%f",t);
		}else{
			if(b<=10){
				t=5*0.05 + (b-5)*0.1;
				printf("Thue thu nhap phai nop:%f",t);
			}else{
				if(b<=18){
				t=5*0.05 + 5*0.1 + (b-10)*0.15;
				printf("Thue thu nhap phai nop:%f",t);

				}else{
					if(b<=32){
						t=5*0.05+ 5*0.1 + 8*0.15 + (b-18)*0.2;
						printf("Thue thu nhap phai nop:%f",t);				
					}else{
						if(b<=52){
							t=5*0.05 + 5*0.1 + 8*0.15 + 14*0.2 + (b-32)*0.25;
							printf("Thue thu nhap phai nop:%f",t);	
						}else{
							if(b<=80){
								t=5*0.05 + 5*0.1 + 8*0.15 + 14*0.2 +20*0.25 + (b-52)*0.3;
								printf("Thue thu nhap phai nop:%f",t);	
							}else{
								t=5*0.05 + 5*0.1 + 8*0.15 + 14*0.2 +20*0.25 + 28*0.3 + (b-80)*0.35;
								printf("Thue thu nhap phai nop:%f",t);
							}
						}

					}
				}
			}
		}
	}
}
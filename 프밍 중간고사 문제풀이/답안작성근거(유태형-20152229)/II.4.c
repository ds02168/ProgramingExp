#include <stdio.h>

int main()
{
	int i, k, j, a, b , count1=0, count2 = 0; //최소 공배수를 구하기위해 3과 7을 저장할 a,b변수,더큰수가 를 정하기 위한 j변수, 값을 비교하기위한 i변수,횟수를 계산하기위한 count변수를 선언합니다.
	a = 3, b = 7;// a와 b에 각각 3과 7을 저장합니다.
	j = (a > b) ? a : b;//a와 b중 큰수를 j에 입력합니다.

	for (k = j;; k++)
	{
		if (k%a == 0 && k%b == 0)
		{
			printf("최소 공배수 : %d\n", k);//최소공배수 확인
			break;
		}
		count1++;
	}

	for (i = 500;i<=1000; i++)//i를 1씩증가시키면서 조건에 만족하는 범위동안
	{
		if ((i % 3 == 1) && (i % 7 == 6))//조건:3의 배수보다 1크고 7의배수보다 1작은 수일때
		{
			while (i <= 1000)//i가 1000이하 일동안
			{
				if((i/1000) + ((i / 100) + (i / 10) % 10 + i % 10)%10==1)//각 자리수의 합의 끝자리가 1이면
				printf("구하고자 하는값 :%d    %d\n", i, ((i/1000) + (i / 100) + (i / 10) % 10 + i % 10)%10);//화면에 출력합니다.

				i += k;//i는 조건에 만족하는 최소의 수를 최소 공배수인 21씩 증가합니다.
				count2++;//카운트 증가
			}
			break;//for문은 조건을 만족하는 최소값을 구하기 위함으로 while문을 나온후 바로 break 해줍니다.
		}

	}




	printf("최소 공배수 횟수: %d\n구하고자 하는 값 계산횟수: %d\n총 횟수: %d\n", count1, count2, (count1+count2));// 카운트를 출력합니다.
	return 0;
}
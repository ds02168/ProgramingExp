#include <stdio.h>

int main()
{
	int value = 2400000;//구하고자 하는 값의 초는 240만초입니다.
	int d, h, m;//일,시,분의 값을 저장할 d,h,m 변수를 선언해줍니다.
	d = 24 * 60 * 60;//하루는 24시간*60분*60초입니다.
	h = 60 * 60;//한시간은 60분*60시간입니다.
	m = 60;//1분은 60초 입니다.

	printf("240만초는 %d일 %d시간 %d분 %d초입니다.\n", value / d, (value % d) / h, ((value % d) % h) / m, value % 60);
	/*240만초의 일수는 240만초/(24*60*60)초, 
	시간은 240만초에서 일수들을 나눈 나머지에 60*60초, 
	분은 240만초를 일수들을 나눈 나머지값에 시간을 나눈 나머지값에다가 60초를 나눈값이고 
	초는 240만에 60초의 나머지값입니다.
	이값들을 화면에 출력합니다.*/

	return 0;//0으로 main함수를 반환합니다.
}
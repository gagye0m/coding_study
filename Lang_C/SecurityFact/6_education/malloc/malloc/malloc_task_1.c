/*동적 2차원 배열을 만들고 배열에 값을 넣은 후 출력*/
#include <stdio.h>
#include <stdlib.h>//standard library를 뜻함.

int main()
{
	int Row = 0, Column = 0;
	int* matrix = NULL;
	int** p_matrix = matrix;
	printf("행의 수를 입력하세요: ");
	scanf_s("%d", &Row);
	printf("열의 수를 입력하세요: ");
	scanf_s("%d", &Column);
	
	p_matrix = (int**)malloc(Row * sizeof(int*)); //행 요소. sizeof(int*)는 사용되는 포인터 변수의 바이트 반환 .sizeof(int)는 사용되는 변수의 바이트 반환. 근데 뭐가 달라? 바이트수 같은거 아닌가.. 이거 질문
	/*p_matrix[Row] = {matrix[0],matrix[1],matrix[3])*/

	for (int i0 = 0; i0 < Row; i0++)
	{
		*(p_matrix+i0) = (int*)malloc(Column * sizeof(int)); //행 요소 p_matrix[i0] == matrix[i0]의 주소 p_matrix의 각 주소에는 
	}
	/*(p_matrix+i0) == p_matrix[i0] 똑같음. 이 원리는 포인터가 몇겹으로 들어가도 같음.*/

	printf("배열의 각 요소를 입력하세요:\n");

	for (int idx = 0; idx < Row; idx++)
	{
		for (int i = 0; i < Column; i++)
		{
			printf("matrix[%d][%d]: ", idx, i);
			scanf_s("%d", &*(*(p_matrix + idx) + i)); //p_matrix[idx][i]도 됨. *(*(p_matrix+i)+idx)) 이게 왜 될까? => 어거지적인 상황으로 이게 출력이 되긴함. 하지만 정확하지 않음. 나중에 문제될수도 있는 부분임.
			//*(p_matrix) == matrix[0]/ *(*(p_matrix)) == matrix[0][0] 

			//주소로 봤을때는 이게 맞는데.. 배열 자체로 접근하면 틀림. 이거 질문하기 => *(*(p_matrix+idx)+i)) == *(p_matrix[idx]+i) == p_matrix[idx][i];
			
			/*원래 scanf로 값 저장할때는& 붙여야함.문자열만 안붙이는 것.
			왜일까 ? ->널문자로 문자열 판단해서 첫시작주소만 넣어줘도 충분.그러나 정수형 배열은 이걸로는 판단 불가. 따라서 주소 연산자 & 를 붙여주는 것이 필수*/


		}
	}
	
	printf("입력한 배열:\n");
	for (int idx2 = 0; idx2 < Row; idx2++)
	{
		for (int i2 = 0; i2 < Column; i2++)
		{
			//출력부분
			printf("%d ", p_matrix[idx2][i2]);
		}
		printf("\n");
	}
	
	for (int idx3 = 0; idx3 < Row; idx3++)
	{
		free(p_matrix[idx3]);
	}

	free(p_matrix);
	return 0;
}
/*과제 2 (행렬 곱 연산)*/
#include <stdio.h>
#include <stdlib.h>//standard library를 뜻함.

void input(int* pRow, int* pColumn, int* pRow2, int* pColumn2)
{
	/*변수저장*/
	printf("첫번째 행렬의 행의 수를 입력하세요: ");
	scanf_s("%d", pRow);
	printf("첫번째 행렬의 열의 수를 입력하세요: ");
	scanf_s("%d", pColumn);
	printf("두번째 행렬의 행의 수를 입력하세요: ");
	scanf_s("%d", pRow2);
	printf("두번째 행렬의 열의 수를 입력하세요: ");
	scanf_s("%d", pColumn2);
	return; // complet
}

int main()
{
	int Row = 0, Column = 0, Row2 = 0, Column2 = 0;
	int** matrix;
	int** matrix2;
	int** MATRIX3;
					/*NULL로 주소를 잡으면 안되는 이유
					*객체가 Null인 경우에는 객체 자체가 아예 없기 때문에, 
					*객체의 내용을 저장하는 메모리의 위치 주소값도 없게 되는데요. 
					*이 때 문제가 발생하게 됩니다. 
					*만약 Null 인 객체를 호출하게 되면, 시스템은 해당 객체의 내용을 
					*불러오기 위해 해당 객체가 저장 된 메모리의 주소값을 따라 가게 되는데, 
					*주소값이 없으므로 프로그램 로직이 갈 곳을 잃어버리게 되는 것이죠. */

	input(&Row, &Column,&Row2, &Column2);
	if (Column != Row2)
	{
		printf("**Error. 행렬곱을 실행할 수 없습니다.**\n");
		exit(1);
	}


	/*동적할당*/
	matrix = (int**)malloc(Row * sizeof(int*));
	for (int i = 0; i < Row; i++)
	{
		*(matrix + i) = (int*)malloc(Column * sizeof(int)); 
	}
	if (matrix == NULL) // 메모리의 추가 할당에 실패할 경우
	{
		printf("메모리의 추가 할당에 실패했습니다.\n");
		exit(1);
	}

	matrix2 = (int**)malloc(Row2 * sizeof(int*));
	for (int i = 0; i < Row2; i++)
	{
		*(matrix2+i) = (int*)malloc(Column2 * sizeof(int));
	}
	if (matrix2 == NULL) // 메모리의 추가 할당에 실패할 경우
	{
		printf("메모리의 추가 할당에 실패했습니다.\n");
		exit(1);
	}

	/*행렬입력*/
	printf("첫번째 행렬의 값을 입력하세요(%d * %d)\n",Row,Column);
	for (int idx = 0; idx < Row; idx++)
	{
		for (int i = 0; i < Column; i++)
		{
			scanf_s("%d", &*(*(matrix + idx) + i)); //scanf 함수는 기본적으로 공백 문자(스페이스, 탭, 개행 등)를 기준으로 입력을 구분. 따라서 %1d를 굳이 안해줘도 됨.
		}
	}

	printf("두번째 행렬의 값을 입력하세요(%d * %d)\n", Row2, Column2);
	for (int idx = 0; idx < Row2; idx++)
	{
		for (int i = 0; i < Column2; i++)
		{
			scanf_s("%d", &*(*(matrix2 + idx) + i)); ///////#####################여기
		}
	} // complete.

	/*행렬곱*/
	/*1. mxn 행렬과 nxk의 형렬의 곱은 mxk 행렬
	 *2. 첫번째 행렬의 열의 개수와 두번째 행렬의 행의 개수가 같아야 정의됨.
	 *3. 곱해진 행렬의 요소는 a1b1+ a2b2..처럼 각각을 곱해서 더한것*/

	MATRIX3 = (int**)malloc(Row * sizeof(int*));
	for (int i = 0; i < Row; i++)
	{
		*(MATRIX3+i) = (int*)malloc(Column2 * sizeof(int));
	}
	if (MATRIX3 == NULL) // 메모리의 추가 할당에 실패할 경우
	{
		printf("메모리의 추가 할당에 실패했습니다.\n");
		exit(1);
	}

	//MATRIX3에다가 이제 저장을 해줘야함.
	for (int idx = 0; idx < Row; idx++)
	{
		for (int i = 0; i < Column2; i++)
		{
			int matrix_sum = 0;
			for (int i2 = 0; i2<Row2; i2++) // 1. 반복횟수 오류.
			{
				matrix_sum += matrix[idx][i2] * matrix2[i2][i];
			}
			MATRIX3[idx][i] = matrix_sum;
		}
	}
	printf("행렬 곱셈 결과:\n");
	for (int idx = 0; idx < Row; idx++)
	{
		for (int i = 0; i < Column2; i++)
		{
			printf("%d ", MATRIX3[idx][i]);
		}
		printf("\n");
	}

	/*free함수*/
	for (int idx3 = 0; idx3 < Row; idx3++)
	{
		free(matrix[idx3]);
	}

	for (int idx3 = 0; idx3 < Row; idx3++)
	{
		free(matrix2[idx3]);
	}

	for (int idx3 = 0; idx3 < Row; idx3++)
	{
		free(MATRIX3[idx3]);
	}

	free(matrix);
	free(matrix2);
	free(MATRIX3);
	return 0;
}
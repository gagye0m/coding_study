/*���� 2 (��� �� ����)*/
#include <stdio.h>
#include <stdlib.h>//standard library�� ����.

void input(int* pRow, int* pColumn, int* pRow2, int* pColumn2)
{
	/*��������*/
	printf("ù��° ����� ���� ���� �Է��ϼ���: ");
	scanf_s("%d", pRow);
	printf("ù��° ����� ���� ���� �Է��ϼ���: ");
	scanf_s("%d", pColumn);
	printf("�ι�° ����� ���� ���� �Է��ϼ���: ");
	scanf_s("%d", pRow2);
	printf("�ι�° ����� ���� ���� �Է��ϼ���: ");
	scanf_s("%d", pColumn2);
	return; // complet
}

int main()
{
	int Row = 0, Column = 0, Row2 = 0, Column2 = 0;
	int** matrix;
	int** matrix2;
	int** MATRIX3;
					/*NULL�� �ּҸ� ������ �ȵǴ� ����
					*��ü�� Null�� ��쿡�� ��ü ��ü�� �ƿ� ���� ������, 
					*��ü�� ������ �����ϴ� �޸��� ��ġ �ּҰ��� ���� �Ǵµ���. 
					*�� �� ������ �߻��ϰ� �˴ϴ�. 
					*���� Null �� ��ü�� ȣ���ϰ� �Ǹ�, �ý����� �ش� ��ü�� ������ 
					*�ҷ����� ���� �ش� ��ü�� ���� �� �޸��� �ּҰ��� ���� ���� �Ǵµ�, 
					*�ּҰ��� �����Ƿ� ���α׷� ������ �� ���� �Ҿ������ �Ǵ� ������. */

	input(&Row, &Column,&Row2, &Column2);
	if (Column != Row2)
	{
		printf("**Error. ��İ��� ������ �� �����ϴ�.**\n");
		exit(1);
	}


	/*�����Ҵ�*/
	matrix = (int**)malloc(Row * sizeof(int*));
	for (int i = 0; i < Row; i++)
	{
		*(matrix + i) = (int*)malloc(Column * sizeof(int)); 
	}
	if (matrix == NULL) // �޸��� �߰� �Ҵ翡 ������ ���
	{
		printf("�޸��� �߰� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1);
	}

	matrix2 = (int**)malloc(Row2 * sizeof(int*));
	for (int i = 0; i < Row2; i++)
	{
		*(matrix2+i) = (int*)malloc(Column2 * sizeof(int));
	}
	if (matrix2 == NULL) // �޸��� �߰� �Ҵ翡 ������ ���
	{
		printf("�޸��� �߰� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1);
	}

	/*����Է�*/
	printf("ù��° ����� ���� �Է��ϼ���(%d * %d)\n",Row,Column);
	for (int idx = 0; idx < Row; idx++)
	{
		for (int i = 0; i < Column; i++)
		{
			scanf_s("%d", &*(*(matrix + idx) + i)); //scanf �Լ��� �⺻������ ���� ����(�����̽�, ��, ���� ��)�� �������� �Է��� ����. ���� %1d�� ���� �����൵ ��.
		}
	}

	printf("�ι�° ����� ���� �Է��ϼ���(%d * %d)\n", Row2, Column2);
	for (int idx = 0; idx < Row2; idx++)
	{
		for (int i = 0; i < Column2; i++)
		{
			scanf_s("%d", &*(*(matrix2 + idx) + i)); ///////#####################����
		}
	} // complete.

	/*��İ�*/
	/*1. mxn ��İ� nxk�� ������ ���� mxk ���
	 *2. ù��° ����� ���� ������ �ι�° ����� ���� ������ ���ƾ� ���ǵ�.
	 *3. ������ ����� ��Ҵ� a1b1+ a2b2..ó�� ������ ���ؼ� ���Ѱ�*/

	MATRIX3 = (int**)malloc(Row * sizeof(int*));
	for (int i = 0; i < Row; i++)
	{
		*(MATRIX3+i) = (int*)malloc(Column2 * sizeof(int));
	}
	if (MATRIX3 == NULL) // �޸��� �߰� �Ҵ翡 ������ ���
	{
		printf("�޸��� �߰� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1);
	}

	//MATRIX3���ٰ� ���� ������ �������.
	for (int idx = 0; idx < Row; idx++)
	{
		for (int i = 0; i < Column2; i++)
		{
			int matrix_sum = 0;
			for (int i2 = 0; i2<Row2; i2++) // 1. �ݺ�Ƚ�� ����.
			{
				matrix_sum += matrix[idx][i2] * matrix2[i2][i];
			}
			MATRIX3[idx][i] = matrix_sum;
		}
	}
	printf("��� ���� ���:\n");
	for (int idx = 0; idx < Row; idx++)
	{
		for (int i = 0; i < Column2; i++)
		{
			printf("%d ", MATRIX3[idx][i]);
		}
		printf("\n");
	}

	/*free�Լ�*/
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
/*���� 2���� �迭�� ����� �迭�� ���� ���� �� ���*/
#include <stdio.h>
#include <stdlib.h>//standard library�� ����.

int main()
{
	int Row = 0, Column = 0;
	int* matrix = NULL;
	int** p_matrix = matrix;
	printf("���� ���� �Է��ϼ���: ");
	scanf_s("%d", &Row);
	printf("���� ���� �Է��ϼ���: ");
	scanf_s("%d", &Column);
	
	p_matrix = (int**)malloc(Row * sizeof(int*)); //�� ���. sizeof(int*)�� ���Ǵ� ������ ������ ����Ʈ ��ȯ .sizeof(int)�� ���Ǵ� ������ ����Ʈ ��ȯ. �ٵ� ���� �޶�? ����Ʈ�� ������ �ƴѰ�.. �̰� ����
	/*p_matrix[Row] = {matrix[0],matrix[1],matrix[3])*/

	for (int i0 = 0; i0 < Row; i0++)
	{
		*(p_matrix+i0) = (int*)malloc(Column * sizeof(int)); //�� ��� p_matrix[i0] == matrix[i0]�� �ּ� p_matrix�� �� �ּҿ��� 
	}
	/*(p_matrix+i0) == p_matrix[i0] �Ȱ���. �� ������ �����Ͱ� ������� ���� ����.*/

	printf("�迭�� �� ��Ҹ� �Է��ϼ���:\n");

	for (int idx = 0; idx < Row; idx++)
	{
		for (int i = 0; i < Column; i++)
		{
			printf("matrix[%d][%d]: ", idx, i);
			scanf_s("%d", &*(*(p_matrix + idx) + i)); //p_matrix[idx][i]�� ��. *(*(p_matrix+i)+idx)) �̰� �� �ɱ�? => ��������� ��Ȳ���� �̰� ����� �Ǳ���. ������ ��Ȯ���� ����. ���߿� �����ɼ��� �ִ� �κ���.
			//*(p_matrix) == matrix[0]/ *(*(p_matrix)) == matrix[0][0] 

			//�ּҷ� �������� �̰� �´µ�.. �迭 ��ü�� �����ϸ� Ʋ��. �̰� �����ϱ� => *(*(p_matrix+idx)+i)) == *(p_matrix[idx]+i) == p_matrix[idx][i];
			
			/*���� scanf�� �� �����Ҷ���& �ٿ�����.���ڿ��� �Ⱥ��̴� ��.
			���ϱ� ? ->�ι��ڷ� ���ڿ� �Ǵ��ؼ� ù�����ּҸ� �־��൵ ���.�׷��� ������ �迭�� �̰ɷδ� �Ǵ� �Ұ�. ���� �ּ� ������ & �� �ٿ��ִ� ���� �ʼ�*/


		}
	}
	
	printf("�Է��� �迭:\n");
	for (int idx2 = 0; idx2 < Row; idx2++)
	{
		for (int i2 = 0; i2 < Column; i2++)
		{
			//��ºκ�
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
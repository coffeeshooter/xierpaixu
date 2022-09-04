#include <stdio.h>
#include <malloc.h>

void shellSort(int* a, int len);
int main(void)
{
    int i, len, * a;
    printf("������Ҫ�ŵ����ĸ�����");
    scanf_s("%d", &len);
    a = (int*)malloc(len * sizeof(int));
    printf("������Ҫ�ŵ�����\n");
    for (i = 0; i < len; i++) { 
        scanf_s("%d", &a[i]);
    }
    shellSort(a, len); 
    printf("ϣ���������к���Ϊ��\n");
    for (i = 0; i < len; i++) { 
        printf("%d\t", a[i]);
    }
    printf("\n");

    return 0;
}

void shellSort(int* a, int len)
{
    int i, j, k, tmp, gap; 
    for (gap = len / 2; gap > 0; gap /= 2) {  
        for (i = 0; i < gap; ++i) { 
            for (j = i + gap; j < len; j += gap) { 
                tmp = a[j]; 
                k = j - gap; 
                while (k >= 0 && a[k] > tmp) {
                    a[k + gap] = a[k];
                    k -= gap;
                }
                a[k + gap] = tmp;
            }
        }
    }
}

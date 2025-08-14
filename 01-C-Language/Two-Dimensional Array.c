#include<stdio.h>

int main(){
    //定义一个3*3的矩阵
    int matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    //求矩阵每一行的和
    for (int i = 0; i < 3; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < 3; j++)
        {
            rowSum += matrix[i][j];
        }
        printf("第%d行和 = %d\n",i+1,rowSum);
    }
    
    //求矩阵每一列的和
    for (int j = 0; j < 3; j++)
    {
        int colSum = 0;
        for (int i = 0; i < 3; i++)
        {
            colSum += matrix[i][j];
        }
        printf("第%d列和 = %d\n",j+1,colSum);
    }

    //找出矩阵的最大值最小值
    int max = matrix[0][0];
    int min = matrix[0][0];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
            }            
        }       
    }
    printf("max = %d\n",max);
    printf("min = %d\n",min);
    
    //上下翻转矩阵
    for (int i = 0; i < 3/2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[3-1-i][j];
            matrix[3-1-i][j] = temp;
        }     
    }
    printf("\n矩阵上下翻转后：\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
    
    //左右翻转矩阵
    for (int j = 0; j < 3/2; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][3-1-j];
            matrix[i][3-1-j] = temp;
        }
    }
    printf("\n矩阵左右翻转后：\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
    
    //统计矩阵某个数出现的次数
    int target = 0;
    int count = 0;

    printf("请输入你想统计的数字：\n");
    scanf("%d",&target);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(matrix[i][j] == target)
            {
                count++;
            }
        } 
    }
    printf("数字%d在矩阵里出现了%d次\n",target,count);
    
    return 0;
}
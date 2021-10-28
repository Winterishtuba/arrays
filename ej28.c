#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int matrixA[3][3]= {
        {5,6,8},
        {83,4,8},
        {7,3,1}
    };
    int matrixB[3][3]= {
        {6,23,4},
        {47,6,2},
        {7,5,1}
    };
    int matrixResult[3][3]= {0};
    int count= 0;
    size_t mBj = 0, mBi=0, mAi=0,count1=0;

        int temp[3][3];
        while (mBi < 3)
        {
            while (mAi < 3)
            {
                temp[mBi][mAi]= matrixB[mBj][mBi]*matrixA[mBi][mAi];
                mAi++;
            }
            mBi++;
        }
        while (mBj < 3)
        {
            matrixResult[mBj][count]+= temp[count1][count];
            count1++;
            if (count1 ==3)
            {   
                count1= 0;
                count++;
                if (count== 3)
                {
                    count=0;
                    mBj++;
                }
            }
            
        }
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d ", matrixResult[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//FUCK
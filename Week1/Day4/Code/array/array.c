void DisplayInt1DArray(int Arr[],char size)
{
    int counter = 0 ;
    for(counter=0;counter<size;counter++)
    {
        printf("Arr[%d]=%d",counter,Arr[counter]);
    }
}

void DisplayInt2DArray(int Arr[][],char size1,char size2)
{
    int counter1=0;
    int counter2=0;
    for(counter1=0;counter1<size1;counter1++)
    {
        for(counter2=0;counter2<size2;counter2++)
        {
            printf("Arr[%d][%d]=%d",counter1,counter2,Arr[counter1][counter2]);
        }
    }
}


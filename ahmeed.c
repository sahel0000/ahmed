
#include <stdio.h>
#include <math.h>
float ahmed(float array[])
{
    float avrege;
    return avrege = ((array[0] + array[1] + array[2]) / 3);
    array[4] = avrege;
}
float sahel(float array[])
{
    float notfinale;
    return notfinale = 0.4 * ahmed(array) + 0.6 * array[3];
    array[5] = notfinale;
}
float ahmed1(float array1[])
{
    float avrege1;
    return avrege1 = ((array1[0] + array1[1] + array1[2]) / 3);
    array1[4] = avrege1;
}
float sahel1(float array1[])
{
    float notfinale1;
    return notfinale1 = 0.4 * ahmed1(array1) + 0.6 * array1[3];
    array1[5] = notfinale1;
}
float ahmed2(float array2[])
{
    float avrege2;
    return avrege2 = ((array2[0] + array2[1] + array2[2]) / 3);
    array2[4] = avrege2;
}
float sahel2(float array2[])
{
    float notfinale2;
    return notfinale2 = 0.4 * ahmed2(array2) + 0.6 * array2[3];
    array2[5] = notfinale2;
}
float ahmed3(float array3[])
{
    float avrege3;
    return avrege3 = ((array3[0] + array3[1] + array3[2]) / 3);
    array3[4] = avrege3;
}
float sahel3(float array3[])
{
    float notfinale3;
    return notfinale3 = 0.4 * ahmed3(array3) + 0.6 * array3[3];
    array3[5] = notfinale3;
}
float ahmed4(float array4[])
{
    float avrege4;
    return avrege4 = ((array4[0] + array4[1]) / 2);
    array4[4] = avrege4;
}
float sahel4(float array4[])
{
    float notfinale4;
    return notfinale4 = 0.5 * ahmed4(array4) + 0.5 * array4[3];
    array4[5] = notfinale4;
}
float ahmed5(float array5[])
{
    float avrege5;
    return avrege5 = ((array5[0] + array5[1]) / 2);
    array5[4] = avrege5;
}
float sahel5(float array5[])
{
    float notfinale5;
    return notfinale5 = 0.5 * ahmed5(array5) + 0.5 * array5[2];
    array5[5] = notfinale5;
}
float sahel6(float array6[])
{
    float notfinale6;
    return notfinale6 = 0.1 * array6[0];
    array6[5] = notfinale6;
}
float hello(float array[5], float array1[5], float array2[5], float array3[5], float array4[5], float array5[5], float array6[5])
{

    float mg = ((sahel(array) + sahel1(array1) + sahel2(array2) + sahel3(array3) + sahel4(array4) + sahel5(array5) + sahel6(array6)) / 7);
    return mg;
}
float helo(float R[6]){
    float mgg=((R[0]+R[1]+R[2]+R[3]+R[4]+R[5]+R[6])/7);
    return mgg;
}


int main()
{
    float array[6];
    float array1[6];
    float array2[6];
    float array3[6];
    float array4[6];
    float array5[6];
    float array6[6];
    float R[6];

    for (int i = 0; i < 4; i++)
    {
        scanf("%f", &array[i]);
    }

    printf("avrege is: %f\n", ahmed(array));
    printf("notefinale is: %f\n", sahel(array));

    for (int j = 0; j < 4; j++)
    {
        scanf("%f", &array1[j]);
    }

    printf("avrege is: %f\n", ahmed1(array1));
    printf("notefinale is: %f\n", sahel1(array1));

    for (int l = 0; l < 4; l++)
    {
        scanf("%f", &array2[l]);
    }

    printf("avrege is: %f\n", ahmed2(array2));
    printf("notefinale is: %f\n", sahel2(array2));

    for (int m = 0; m < 4; m++)
    {
        scanf("%f", &array3[m]);
    }

    printf("avrege is: %f\n", ahmed3(array3));
    printf("notefinale is: %f\n", sahel3(array3));

    for (int f = 0; f < 3; f++)
    {
        scanf("%f", &array4[f]);
    }

    printf("avrege is: %f\n", ahmed4(array4));
    printf("notefinale is: %f\n", sahel4(array4));

    for (int h = 0; h < 3; h++)
    {
        scanf("%f", &array5[h]);
    }

    printf("avrege is: %f\n", ahmed5(array5));
    printf("notefinale is: %f\n", sahel5(array5));

    for (int b = 0; b < 1; b++)
    {
        scanf("%f", &array6[b]);
    }

    printf("notefinale is: %f\n", sahel6(array6));

    printf("finally the student gets:  %f\n", hello(array, array1, array2, array3, array4, array5, array6));
    if (hello(array, array1, array2, array3, array4, array5, array6) < 10)
    {

        printf("the student did not get moiyen so the remedial exam\n");

        if (array[5] < 10)
        {
            printf("the student in remedial in module 1\n");
        }
        if (array1[5] < 10)
        {
            printf("the student in remedial in module 2\n");
        }
        if (array2[5] < 10)
        {
            printf("the student in remedial in module 3\n");
        }
        if (array3[5] < 10)
        {
            printf("the student in remedial in module 4\n");
        }
        if (array4[5] < 10)
        {
            printf("the student in remedial in module 5\n");
        }
        if (array5[5] < 10)
        {
            printf("the student in remedial in module 6\n");
        }
        if (array6[5] < 10)
        {
            printf("the student in remedial in module 7\n");
        }
        for (int c = 0; c < 7; c++)
        {
            scanf("%f", &R[c]);
        }
        printf("the student gets\n :%f",helo(R));
        if (helo(R) < 10)
        {
            printf("the student faild\n");
        }
        if (helo(R) >= 10)
        {
            printf("the student successful\n\n");
        }
    }

    if (hello(array, array1, array2, array3, array4, array5, array6) >= 10)
    {

        printf("the student successful\n");
    }

    return 0;
}

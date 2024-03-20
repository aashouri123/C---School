
#include <stdio.h>

// Constants
const int DATA1_SIZE = 15;
const int DATA2_SIZE = 12;
const int DATA12_SIZE = DATA1_SIZE + DATA2_SIZE;

// Function Prototypes
void populateData(int[], int);
void printData(int[], int);
void mergeData(int[], int, int[], int, int[]);

int main()
{

    int data1[DATA1_SIZE];
    int data2[DATA2_SIZE];
    int data12[DATA12_SIZE];

    srand(time(0));

    // populate and print first array
    populateData(data1, DATA1_SIZE);
    printf("Array1 Data: \n");
    printData(data1, DATA1_SIZE);

    // populate and print second array
    populateData(data2, DATA2_SIZE);
    printf("Array2 Data: \n");
    printData(data2, DATA2_SIZE);

    // populate and print merged array
    mergeData(data1, DATA1_SIZE, data2, DATA2_SIZE, data12);
    printf("Merged Data: \n");
    printData(data12, DATA12_SIZE);
}
//----------------------------------------------------------------
// Populate array with random data, sorted, in increasing order
void populateData(int data[], int size)
{
    data[0] = rand() % (50 - 10 + 1) + 10;
    for (int i = 1; i < size; i++)
        data[i] = data[i - 1] + rand() % (15 - 5 + 1) + 5;
}
//----------------------------------------------------------------
void printData(int data[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", data[i]);
    printf("\n");
}
//------------------------------------------------------------------
void mergeData(int data1[], int size1, int data2[], int size2, int data12[])
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < size1 && j < size2) // the condition ensure comparison for equal amount of elemnts in different array sizes.
    {

        if (data1[i] <= data2[j]) // compares element of Array1 with Array2. if element1 is less than or equal to element2.
        {
            data12[k] = data1[i]; // store the element 1 in merging array if condition is true.
            i++;                  // increment index array one.
        }
        else                      // compares element of Array1 with Array2. if element1 is greater than or equal to element2.
        {
            data12[k] = data2[j]; // store element two in merging array.
            j++;                  // increment index of array two.
        }
        k++;                  // increment index of merging array
    }
    while (i < size1)
    {                         // when this loop starts K will continue where it left off in the previous loop
        data12[k] = data1[i]; // stores whats left of the first array elements is merging array
        i++;                  // increament array1 index
        k++;                  // increment merging array index
    }
}
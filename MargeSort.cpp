#include<bits/stdc++.h>
using namespace std;

//Marge the Array

void mergee(int array[], int left, int mid, int right )
{
    int subArr1= mid -left +1;
    int subArr2 = right-mid;


    //create temp Array
    int leftArr [subArr1], rightArr[subArr2];

    //copy the data to the temp array
    for(int i =0; i< subArr1; i++)
    {

        leftArr[i]=array[left+i];
    }
    for(int j=0; j<subArr2;j++)
    {

        rightArr[j]=array[mid+1+j];
    }

    //Merge the temp array back into array
   int IndexSubArr1=0;
    int IndexSubArr2=0;
    int IndexMargeArr=left;

    while(IndexSubArr1<subArr1 && IndexSubArr2<subArr2)
    {

        if(leftArr[IndexSubArr1] <= rightArr[IndexSubArr2])
        {
            array[IndexMargeArr]=leftArr[IndexSubArr1];
            IndexSubArr1++;
        }
        else{
            array[IndexMargeArr]=rightArr[IndexSubArr2];
            IndexSubArr2++;
        }
        IndexMargeArr++;
    }

    while(IndexSubArr1<subArr1)
    {

        array[IndexMargeArr]=leftArr[IndexSubArr1];
        IndexSubArr1++;
        IndexMargeArr++;
    }

     while(IndexSubArr2<subArr2)
    {

        array[IndexMargeArr]=rightArr[IndexSubArr2];
        IndexSubArr2++;
        IndexMargeArr++;
    }
}

void mergeSort(int array[], int left, int right)
{
    if(left<right)
    {
        int mid=left+(right-left)/2;

        mergeSort(array, left,mid);
        mergeSort(array, mid+1,right);
        mergee(array,left,mid,right);
    }
}

void printArray(int array[], int size)
{
    int i;
    for(int i=0;i<size;i++)
    {
        cout<<array[i] << " ";
    }
    cout<<endl;
}

//main
int main()
{
 clock_t start,end;
    start=clock();
    int array[]={9,8,7,6,5,4,3,2,1,11,99,91,92,93,94,95,96,97,100,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,60,61,62,63,64,65,66,67,68,69,70,59,58,56,57,54,53,52,51,9,8,7,6,5,4,3,2,1,11,99,91,92,93,94,95,96,97,100,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,60,61,62,63,64,65,66,67,68,69,70,59,58,56,57,54,53,52,51,9,8,7,6,5,4,3,2,1,11,99,91,92,93,94,95,96,97,100,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,60,61,62,63,64,65,66,67,68,69,70,59,58,56,57,54,53,52,51,9,8,7,6,5,4,3,2,1,11,99,91,92,93,94,95,96,97,100,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,60,61,62,63,64,65,66,67,68,69,70,59,58,56,57,54,53,52,51,9,8,7,6,5,4,3,2,1,11,99,91,92,93,94,95,96,97,100,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,60,61,62,63,64,65,66,67,68,69,70,59,58,56,57,54,53,52,51,9,8,7,6,5,4,3,2,1,11,99,91,92,93,94,95,96,97,100,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,60,61,62,63,64,65,66,67,68,69,70,59,58,56,57,54,53,52,51,9,8,7,6,5,4,3,2,1,11,99,91,92,93,94,95,96,97,100,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,60,61,62,63,64,65,66,67,68,69,70,59,58,56,57,54,53,52,51,9,8,7,6,5,4,3,2,1,11,99,91,92,93,94,95,96,97,100,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,60,61,62,63,64,65,66,67,68,69,70,59,58,56,57,54,53,52,51,9,8,7,6,5,4,3,2,1,11,99,91,92,93,94,95,96,97,100,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,60,61,62,63,64,65,66,67,68,69,70,59,58,56,57,54,53,52,51};

    int Arsize=sizeof(array)/sizeof(array[0]);

    mergeSort(array, 0, Arsize-1);
    printArray(array,Arsize);
    end=clock();
   double time_taken=double(end-start);
   cout<<"Taken time is:" <<fixed <<time_taken
   <<setprecision(5);
   cout<<"sec"<<endl;
    return 0;
}

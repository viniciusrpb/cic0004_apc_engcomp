# 11.5. Merge Sort



```
#include<stdio.h>

void merge(int v[6], int temp[6], int l, int mid, int r){
    int i,j,k;
    i = l;
    j = mid+1;
    k = l;
    while(i <= mid && j <= r){
        if(v[i] < v[j]){
            temp[k] = v[i];
            i++;
        }else{
            temp[k] = v[j];
            j++;
        }
        k++;
    }

    while(i <= mid){
        temp[k] = v[i];
        i++;
        k++;
    }

    while(j <= r){
        temp[k] = v[j];
        j++;
        k++;
    }

    for(i = l; i <= r; i++){
        v[i] = temp[i];
    }

}

void mergeSort(int v[6], int temp[6], int l, int r){
    int mid;
    printf("l=%d r=%d\n",l,r);
    if(l < r){
        mid = (l+r)/2;
        mergeSort(v,temp,l,mid);
        mergeSort(v,temp,mid+1,r);
        merge(v,temp,l,mid,r);
    }
}

int main(){
    int i,n = 6;
    int v[6] = {7,9,0,-3,5,2};
    int temp[6];

    mergeSort(v,temp,0,5);

    for(i = 0; i < 6;i++){
        printf("%d ",v[i]);
    }
    printf("\n");

    return 0;
}

```

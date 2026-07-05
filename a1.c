#include <stdio.h>

void swap(int *a,int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

int min(int arr[],int a,int n){
    int m=arr[0];
    for(int i=a;i<n;i++){
        if (arr[i]<m) m=arr[i];
    }
    return m;
}

int binsrch(int arr[],int x,int high,int low){
    int mid=(high+low)/2;
    if(arr[mid]==x) return mid;

    if(x>arr[mid]) return binsrch(arr,x,high,mid+1);

    if(x<arr[mid]) return binsrch(arr,x,mid-1,low);
}

void bsort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
        if(arr[j]>arr[j+1]) swap(&arr[j],&arr[j+1]);
    }
}
}

void recbsort(int arr[],int n){
    if (n==1) return;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]) swap(&arr[i],&arr[i+1]);
    }
    recbsort(arr,n-1);

}

void selsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]) min=j;
        }
            if (min!=i) swap(&arr[i],&arr[min]);       
    }    
    }
void recssort(int arr[],int s,int n){
    if(s>=n) return;
    int min=s;
        for(int j=s+1;j<n;j++){
            if(arr[j]<arr[min]) min=j;
        }
            if (min!=s) swap(&arr[s],&arr[min]);    
    recssort(arr,s+1,n);
}    

void inssort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}    

int main(){
    int arr[]={1,0,40,19,24,37,18,55};
    int n=sizeof(arr)/sizeof(int);
    recssort(arr,0,n);
    for(int k=0;k<n;k++){
        printf("%d ",arr[k]);
    }
    printf("\n");
    //int b=binsrch(arr,24,n-1,0);
    //printf("%d",b);
}
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of datas\n");
    scanf("%d",&n);
    int a[n];
    int min=a[0],min2=a[0];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min2=min;
            min=a[i];
        }
        else if(a[i]<min2){
            min2=a[i];
        }
    }
    int max=min,max2=min;
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max2=max;
            max=a[i];
        }
        else if(a[i]>max2)
        {
            max2=a[i];
        }
        
        
    }
    // int min2= max;
    // for(int i=0;i<n;i++){
    //     if(a[i]<min2 && a[i]>min){
    //         min2=a[i];
    //     }
    // }
    printf("max is %d\n",max);
    printf("max 2 is %d\n",max2);
    printf("min is %d\n",min);
    printf("min 2 is %d\n",min2);
    return 0;
}

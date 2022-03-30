#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int compare_int( const void* a, const void* b )
{
    if( *(int*)a == *(int*)b ) return 0;
    return *(int*)a < *(int*)b ? -1 : 1;
}

int main(){
    int n; 
    scanf("%d",&n);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    // your code goes here
    
    qsort( a, n, sizeof(int), compare_int );
    int minDiff = abs(a[1] - a[0]);
    for(int i=1; i<n-1; ++i){
        if( abs(a[i] - a[i+1]) < minDiff ) minDiff = abs(a[i] - a[i+1]);
    }
    printf("%d", minDiff);
    return 0;
}

#include<cstdlib>
#include<cstdio>

int main() {
 int n,k;
    scanf("%d %d",&n,&k);
    long * arr = (long *)malloc(sizeof(long)*n);
    int *mod = (int *)calloc(k,sizeof(int ));      //calloc initializes all its elements to zero
    if(n==1||k==1)
        {
        printf("1");
        return 0;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        scanf("%ld",&arr[i]);
        mod[(arr[i])%k]++;
    }
    for(int i=1;i<=k/2;i++){
        if(i==k-i&&mod[i]>0){           //adding number/2 to any remainders won't affect result. it should be added only once
            ans++;
        }
        else if(mod[i]<mod[k-i]){       //comparing frequency of occurrence of remainders
            ans+=mod[k-i];
        }
        else{
            ans+=mod[i];
        }
    }
    if(mod[0]>0)                        //adding num with remainder 0 is like adding number/2. added only once
        ans++;
    printf("%d",ans);
    return 0;
}

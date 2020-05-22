#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
void displaybox(int *arr){
    int j;
    for(j=0;j<5;j++){
        printf("%4d ",arr[j]);
    }
    printf("\n");
    for(j=5;j<10;j++){
        printf("%4d ",arr[j]);
    }
    printf("\n");
    for(j=10;j<15;j++){
        printf("%4d ",arr[j]);
    }
    printf("\n");
    for(j=15;j<20;j++){
        printf("%4d ",arr[j]);
    }
    printf("\n");
    for(j=20;j<25;j++){
        printf("%4d ",arr[j]);
    }
    printf("\n\n");
}
void displayoptions(int *dis){
    int j,i,x,y;
    for(i=0;i<5;i++){
        x=1+rand()%4;
        y=pow(2,x);
        dis[i]=y;
    }
    for(j=0;j<5;j++){
        printf("%4d ",dis[j]);
    }
    printf("\n\n\n");
}
int main() {
    int level;
    printf("1)Level 1\n2)Level 2\n3)Level 3\n4)Level 4\n5)Level 5\nSelect Level: ");
    scanf("%d",&level);
    if(level==1)
        printf("Make any one cell equal to 128 to win!!\n");
    else if(level==2)
        printf("Make any one cell equal to 256 to win!!\n");
    else if(level==3)
        printf("Make any one cell equal to 512 to win!!\n");
    else if(level==4)
        printf("Make any one cell equal to 1024 to win!!\n");
    else if(level==5)
        printf("Make any one cell equal to 2048 to win!!\n");
    int arr[25]={0};
    int dis[5];
    int i,j,x,y,flag=0;
    srand(time(NULL));
    for(i=0;i<5;i++){
        x=1+rand()%4;
        y=pow(2,x);
        arr[i]=y;
        for(j=0;j<4;j++){
            if(arr[j]==arr[j+1]){
                arr[j+1]=arr[j+1]+arr[j];
                x=1+rand()%4;
                y=pow(2,x);
                arr[j]=y;
            }
        }
    }
    while(1){
    flag=0;
    displaybox(arr);
    displayoptions(dis);
    printf("Select options number(1 to 5): ");
    scanf("%d",&x);
    if(x==1){
        if(arr[20]==dis[0])
        {
            flag=1;
            arr[20]=arr[20]+dis[0];
        }
        else{
            if(arr[20]!=dis[0] && arr[20]!=0)
            {
                printf("you lose\n");
                return 0;
            }
        }
        for(j=15;j>=0;j=j-5){
            if(arr[j]==dis[0] && arr[j+5]==0){
                flag=1;
                arr[j]=arr[j]+dis[0];
                break;
            }
            
        }
        if(flag==0){
            for(j=0;j<=20;j=j+5){
                if(arr[j]==0){
                    arr[j]=dis[0];
                    break;
                }
                
            }
        }
    }
    if(x==2){
        if(arr[21]==dis[1])
        {
            flag=1;
            arr[21]=arr[21]+dis[1];
        }
        else{
            if(arr[21]!=dis[1] && arr[21]!=0)
            {
                printf("you lose\n");
                return 0;
            }
        }
        for(j=16;j>=1;j=j-5){
            if(arr[j]==dis[1] && arr[j+5]==0){
                flag=1;
                arr[j]=arr[j]+dis[1];
                break;
            }
          
        }
        if(flag==0){
            for(j=1;j<=21;j=j+5){
                if(arr[j]==0){
                    arr[j]=dis[1];
                    break;
                }
                /*else{
                    printf("You Lose!!");
                    return 0;
                }*/
                
            }
        }
    }
    if(x==3){
        if(arr[22]==dis[2])
        {
            flag=1;
            arr[22]=arr[22]+dis[2];
        }
        else{
            if(arr[22]!=dis[2] && arr[22]!=0)
            {
                printf("you lose\n");
                return 0;
            }
        }
        for(j=17;j>=2;j=j-5){
            if(arr[j]==dis[2] && arr[j+5]==0){
                flag=1;
                arr[j]=arr[j]+dis[2];
                break;
            }
           
        }
        if(flag==0){
            for(j=2;j<=22;j=j+5){
            if(arr[j]==0){
                arr[j]=dis[2];
                break;
            }
            /*else{
                printf("You Lose!!");
                return 0;
            }*/
                
            }
        }
    }
    if(x==4){
        if(arr[23]==dis[3])
        {
            flag=1;
            arr[23]=arr[23]+dis[3];
        }
        else{
            if(arr[23]!=dis[3] && arr[23]!=0)
            {
                printf("you lose\n");
                return 0;
            }
        }
        for(j=18;j>=3;j=j-5){
            if(arr[j]==dis[3] && arr[j+5]==0){
                flag=1;
                arr[j]=arr[j]+dis[3];
                break;
            }
            
        }
        if(flag==0){
            for(j=3;j<=23;j=j+5){
                if(arr[j]==0){
                    arr[j]=dis[3];
                    break;
                }
                /*else{
                    printf("You Lose!!");
                    return 0;
                }*/
                
            }
        }
    }
    if(x==5){
        if(arr[24]==dis[4])
        {
            flag=1;
            arr[24]=arr[24]+dis[4];
        }
        else{
            if(arr[24]!=dis[4] && arr[24]!=0)
            {
                printf("you lose\n");
                return 0;
            }
        }
        for(j=19;j>=4;j=j-5){
            if(arr[j]==dis[4] && arr[j+5]==0){
                flag=1;
                arr[j]=arr[j]+dis[4];
                break;
            }
        }
        if(flag==0){
            for(j=4;j<=24;j=j+5){
                if(arr[j]==0){
                    arr[j]=dis[4];
                    break;
                }
                /*else{
                    printf("You Lose!!");
                    return 0;
                }*/
               
            }
        }
    }
    //if(flag==0){
        
    //}
        /*for(j=0;j<25;j++){
            if(arr[j]==2048){
                printf("You Win!!\n");
                return 0;
            }
        }*/
        int ad=5;
        while(ad--){
        int t=5;
        while(t--)
        {
        for(j=0;j<=15;){
            if(arr[j]==arr[j+5]){
                arr[j]=arr[j]+arr[j+5];
                if(j==0)
                {
                    arr[j+5]=arr[j+10];
                    arr[j+10]=arr[j+15];
                    arr[j+15]=arr[j+20];
                    arr[j+20]=0;
                    break;
                }
                if(j==5)
                {
                    arr[j+5]=arr[j+10];
                    arr[j+10]=arr[j+15];
                    arr[j+15]=0;
                    break;
                }
                if(j==10)
                {
                    arr[j+5]=arr[j+10];
                    arr[j+10]=0;
                    break;
                }if(j==15)
                {
                    arr[j+5]=0;
                    break;
                }
                
            }
            j=j+5;
        }
        for(j=1;j<=16;){
            if(arr[j]==arr[j+5]){
                arr[j]=arr[j]+arr[j+5];
                if(j==1)
                {
                    arr[j+5]=arr[j+10];
                    arr[j+10]=arr[j+15];
                    arr[j+15]=arr[j+20];
                    arr[j+20]=0;
                    break;
                }
                if(j==6)
                {
                    arr[j+5]=arr[j+10];
                    arr[j+10]=arr[j+15];
                    arr[j+15]=0;
                    break;
                }
                if(j==11)
                {
                    arr[j+5]=arr[j+10];
                    arr[j+10]=0;
                    break;
                }if(j==16)
                {
                    arr[j+5]=0;
                    break;
                }
                
            }
            j=j+5;
        }
        for(j=2;j<=17;){
            if(arr[j]==arr[j+5]){
                arr[j]=arr[j]+arr[j+5];
                if(j==2)
                {
                    arr[j+5]=arr[j+10];
                    arr[j+10]=arr[j+15];
                    arr[j+15]=arr[j+20];
                    arr[j+20]=0;
                    break;
                }
                if(j==7)
                {
                    arr[j+5]=arr[j+10];
                    arr[j+10]=arr[j+15];
                    arr[j+15]=0;
                    break;
                }
                if(j==12)
                {
                    arr[j+5]=arr[j+10];
                    arr[j+10]=0;
                    break;
                }if(j==17)
                {
                    arr[j+5]=0;
                    break;
                }
                
            }
            j=j+5;
        }
        for(j=3;j<=18;){
            if(arr[j]==arr[j+5]){
                arr[j]=arr[j]+arr[j+5];
                if(j==3)
                {
                    arr[j+5]=arr[j+10];
                    arr[j+10]=arr[j+15];
                    arr[j+15]=arr[j+20];
                    arr[j+20]=0;
                    break;
                }
                if(j==8)
                {
                    arr[j+5]=arr[j+10];
                    arr[j+10]=arr[j+15];
                    arr[j+15]=0;
                    break;
                }
                if(j==13)
                {
                    arr[j+5]=arr[j+10];
                    arr[j+10]=0;
                    break;
                }if(j==18)
                {
                    arr[j+5]=0;
                    break;
                }
                
            }
            j=j+5;
        }
        for(j=4;j<=19;){
            if(arr[j]==arr[j+5]){
                arr[j]=arr[j]+arr[j+5];
                if(j==4)
                {
                    arr[j+5]=arr[j+10];
                    arr[j+10]=arr[j+15];
                    arr[j+15]=arr[j+20];
                    arr[j+20]=0;
                    break;
                }
                if(j==9)
                {
                    arr[j+5]=arr[j+10];
                    arr[j+10]=arr[j+15];
                    arr[j+15]=0;
                    break;
                }
                if(j==14)
                {
                    arr[j+5]=arr[j+10];
                    arr[j+10]=0;
                    break;
                }if(j==19)
                {
                    arr[j+5]=0;
                    break;
                }
                
            }
            j=j+5;
        }
        }
        
        int s=5;
        while(s--){
        for(j=0;j<4;j++){
            if(arr[j]==arr[j+1]){
                arr[j+1]=arr[j]+arr[j+1];
                arr[j]=arr[j+5];
                arr[j+5]=arr[j+10];
                arr[j+10]=arr[j+15];
                arr[j+15]=arr[j+20];
                arr[j+20]=0;
                break;
            }
        }
        for(j=5;j<9;j++){
            if(arr[j]==arr[j+1]){
                arr[j+1]=arr[j]+arr[j+1];
                arr[j]=arr[j+5];
                arr[j+5]=arr[j+10];
                arr[j+10]=arr[j+15];
                arr[j+15]=0;
                break;
            }
        }
        for(j=10;j<14;j++){
            if(arr[j]==arr[j+1]){
                arr[j+1]=arr[j]+arr[j+1];
                arr[j]=arr[j+5];
                arr[j+5]=arr[j+10];
                arr[j+10]=0;
                break;
            }
        }
        for(j=15;j<19;j++){
            if(arr[j]==arr[j+1]){
                arr[j+1]=arr[j]+arr[j+1];
                arr[j]=arr[j+5];
                arr[j+5]=0;
                break;
            }
        }
        for(j=20;j<4;j++){
            if(arr[j]==arr[j+1]){
                arr[j+1]=arr[j]+arr[j+1];
                arr[j]=0;
                break;
            }
        }
        }
        for(j=0;j<25;j++){
            if(level==1){
            if(arr[j]==128){
                printf("You WIN!!\n");
                return 0;
            }
            }
            if(level==2){
                if(arr[j]==256){
                    printf("You WIN!!\n");
                    return 0;
                }
            }
            if(level==3){
                if(arr[j]==512){
                    printf("You WIN!!\n");
                    return 0;
                }
            }
            if(level==4){
                if(arr[j]==1024){
                    printf("You WIN!!\n");
                    return 0;
                }
            }
            if(level==5){
                if(arr[j]==2048){
                    printf("You WIN!!\n");
                    return 0;
                }
            }
        }
        }
    }
    return 0;
}

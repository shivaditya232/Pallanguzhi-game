#include <stdio.h>
#include <stdbool.h>
int main() {
    bool outer=true;
    int hole0=5;
    int hole1=5;
    int hole2=5;
    int hole3=5;
    int hole4=5;
    int hole5=5;
    int hole6=5;
    int hole7=5;
    int hole8=5;
    int hole9=5;
    int hole10=5;
    int hole11=5;
    int hole12=5;
    int hole13=5;
    int array[]={hole0,hole1,hole2,hole3,hole4,hole5,hole6,hole7,hole8,hole9,hole10,hole11,hole12,hole13};
    int num=0;
    int temp=0;
    int count=0;
    int playerA_marble=0;
    int playerB_marble=0;
    
    while(true){
    bool cont=true;
    printf("Enter a hole from between 0 and 6 to start for player A");
    scanf("%d",&num);
    if (num>6||num<0||array[num]==0){
        continue;
    }
    else{
        while (cont){

    if(num==13){
                temp=0;
            }
            else{
                temp=num+1;}
    count=array[num];
    array[num]=0;
        for(int i=1;i<=count;i++){
            
            array[temp]+=1;
            if(array[temp]==4){
                array[temp]=0;
                playerA_marble+=4;
            }
            
            temp+=1;
            if (temp==14){
                temp=0;
            }

        }
        
        num=temp;
    
    if(array[temp]==0){
        cont=false;
        if (temp+1==14){
                temp=-1;
            }
        playerA_marble+=array[temp+1];
        array[temp+1]=0;
    }
}
    if(!cont){
        for(int i=0;i<=13;i++){
            printf("hole%d: %d\n", i, array[i]);
        }
    }
    int forbreak=0;
    for(int j=0;j<=6;j++){
        forbreak+=array[j];
    }
    if(forbreak==0){
        printf("EndGame");
        break;
    }

    
}
  
printf("Enter a hole from between 7 and 13 to start for player B");
    scanf("%d",&num);
    cont=true;
    
    if (num<6||num>13||array[num]==0){
        continue;
    }
    else{
        while (cont){
            if(num==13){
                temp=0;
            }
            else{
                temp=num+1;}
    count=array[num];
    array[num]=0;
        for(int i=1;i<=count;i++){
            
            array[temp]+=1;
            if(array[temp]==4){
                array[temp]=0;
                playerB_marble+=4;
            }
            
            temp+=1;
            if (temp==14){
                temp=0;
            }

        }
        
        num=temp;
    
    if(array[temp]==0){
        cont=false;
        if (temp+1==14){
                temp=-1;
            }
        
        playerB_marble+=array[temp+1];
        array[temp+1]=0;
    }
}
    if(!cont){
        for(int i=0;i<=13;i++){
            printf("hole%d: %d\n", i, array[i]);
        }
    }
    int forbreak=0;
        for(int z=7;z<=13;z++){
        forbreak+=array[z];
    }
    if(forbreak==0){
        printf("EndGame\n");
        break;
    }
    
}
  

}
printf("player A has won %d\n",playerA_marble);
printf("player B has won %d\n",playerB_marble);
if(playerA_marble>playerB_marble){
    printf("Hence player A has won");
}
else{
    printf("Hence player B has won");
}
return 0;
}

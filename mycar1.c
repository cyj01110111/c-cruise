#include<stdio.h>
typedef struct 
{    int targetDistance ;
     int currentDistance;
     int commandCount;
     int maxCommands;
     int history[5];
    }CruiseSystem;
void runcar(CruiseSystem *paradox){//前面这里用指针以修改变量
    int speed=0;//速度
    int distance=0;//速度对应的距离
    printf("tell me the gear\n");//告诉我你选定的档位
    while(1){
    if (scanf("%d", &speed) == 1 && speed >= 1 && speed <= 3)
    break;                               //输入合法，结束询问 
    else printf("warning!you do not give a right speed!please input 1,2 or 3\n");
    while (getchar() != '\n');                // 把这一行剩下的字符清掉 
     }
    if(speed==1){distance=15;}//这一串是速度和对应距离
    else if(speed==2){distance=25;}
    else if(speed==3){distance=40-(paradox->commandCount);}//前面跑了几次就减几
    paradox->currentDistance+=distance;//目前已跑
    paradox->commandCount+=1;//命令次数
    paradox->history[paradox->commandCount-1]=speed;//历史记录速度
    printf("the car has run %d meters, the current distance is %d meters\n",distance,paradox->currentDistance);
    if (paradox->commandCount>=2&&paradox->currentDistance<40){
    printf("warning!wanring!the car is running too slow!please speed up!\n");}
    if(paradox->commandCount +1 == 4){
     printf("warning!warning!the engine is running too hot!pay attention to your speed!\n");
        }
    }
    void showHistory(CruiseSystem paradox) {//历史记录
        printf("the history of the speed");
        for(int i=0;i<paradox.commandCount;i++){
            printf("times:%d ,speed:%d ",i+1,paradox.history[i]);
        }
         }
    int main(){
        CruiseSystem paradox={120,0,0,5,{5}};
        int way=0;//剩余路程
        while(paradox.currentDistance<paradox.targetDistance&&paradox.commandCount<paradox.maxCommands){
            runcar(&paradox);
            showHistory(paradox);
        }
        if (paradox.currentDistance>=paradox.targetDistance){
            printf("the car has reached the target distance,you used %d commands\n",paradox.commandCount);
        }
        else{
            printf("the car has not reached the target distance,you still need to run %d meters\n",way=paradox.targetDistance-paradox.currentDistance);
        }
        return 0;}
        
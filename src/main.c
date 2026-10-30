#include <stdio.h>

#define TARGET_DISTANCE 100
#define MAX_COMMANDS    5

typedef struct {
    int targetDistance;             /* 目标总距离，固定 100 */
    int currentDistance;            /* 当前已行驶总距离 */
    int commandCount;               /* 已发送指令次数 */
    int maxCommands;                /* 允许的最大指令次数，5 */
    int history[MAX_COMMANDS];      /* 每次选择的挡位（1/2/3） */
} CruiseSystem;

/* 核心运行逻辑：接收用户输入的挡位，计算距离并更新小车状态，提供环境反馈 */
void runCar(CruiseSystem *sys)
{
    /*
     * TODO 1: 读取挡位（1/2/3）并做合法性校验
     * TODO 2: 计算本次前进距离
     *         挡位 1 -> 15，挡位 2 -> 25
     *         挡位 3 -> 40 - 本次是第几次指令
     * TODO 3: 更新 currentDistance / history / commandCount
     * TODO 4: 输出本次反馈；第 2 次指令执行完后判断是否需要落后警告
     */
    (void)sys;
}

/* 显示小车接收到的所有历史挡位记录 */
void showHistory(CruiseSystem sys)
{
    /*
     * TODO: 输出「小车历史挡位记录为：X X X……」
     */
    (void)sys;
}

int main(void)
{
    CruiseSystem sys;

    /*
     * TODO: 初始化结构体
     *       sys.targetDistance  = TARGET_DISTANCE;
     *       sys.currentDistance = 0;
     *       sys.commandCount    = 0;
     *       sys.maxCommands     = MAX_COMMANDS;
     *
     * TODO: 主循环
     *       第 4 次指令选择前输出「电机过热预警」
     *       调用 runCar 处理一次输入
     *       判断成功（>= 100，立即结束）或失败（次数用完，输出还差多少）
     *       结束时调用 showHistory
     */
    (void)runCar;
    (void)showHistory;

    printf("TODO: 智能小车定点巡航系统模拟\n");
    return 0;
}

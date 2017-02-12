#include <iostream>
#include <stdio.h>
#include <WorkerRobot.h>
#include <WorkerPartFactory.h>
#include <WorkerRobotFactory.h>
#include <SoldierPartFactory.h>
#include <SoldierRobot.h>
#include <SoldierRobotFactory.h>
#include <InsectPartFactory.h>
#include <InsectRobotFactory.h>

using namespace std;

int main()
{

    auto *workerPrtFac = new WorkerPartFactory();
    auto *wrkrRobotFac = new WorkerRobotFactory();

    auto *sldrPrtFac = new SoldierPartFactory();
    auto *sldrRobotFac = new SoldierRobotFactory();

    auto *insectRobotFac = new InsectRobotFactory();
    auto *insectPartFac = new InsectPartFactory();

    try
    {
        auto *mrRoboto = wrkrRobotFac->manufacture(workerPrtFac);
        auto *sldrRoboto = sldrRobotFac->manufacture(sldrPrtFac);
        auto *insectRoboto = insectRobotFac->manufacture(insectPartFac);

        printf("WORKER ROBOT\n");
        printf("------------\n");
        mrRoboto->printRobotAttributes();
        printf("\n\n");
        printf("SOLDER ROBOT\n");
        printf("------------\n");
        sldrRoboto->printRobotAttributes();
        printf("\n\n");
        printf("INSECT ROBOT\n");
        printf("------------\n");
        insectRoboto->printRobotAttributes();
    }
    catch(char const* exp)
    {
        cout<<exp;
    }
    return 0;
}

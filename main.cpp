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

    WorkerPartFactory *workerPrtFac = new WorkerPartFactory();
    WorkerRobotFactory *wrkrRobotFac = new WorkerRobotFactory();

    SoldierPartFactory *sldrPrtFac = new SoldierPartFactory();
    SoldierRobotFactory *sldrRobotFac = new SoldierRobotFactory();

    InsectRobotFactory *insectRobotFac = new InsectRobotFactory();
    InsectPartFactory *insectPartFac = new InsectPartFactory();

    try
    {
        Robot *mrRoboto = wrkrRobotFac->manufacture(workerPrtFac);
        Robot *sldrRoboto = sldrRobotFac->manufacture(sldrPrtFac);
        Robot *insectRoboto = insectRobotFac->manufacture(insectPartFac);

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

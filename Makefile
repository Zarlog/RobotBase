# The include directory
IDIR=include
# The source directory
SDIR=src
# The compiler to use
CXX=clang++ -std=c++11 -stdlib=libstdc++

FLAGS=-I$(IDIR)
#The directory to put th eobject files
ODIR=obj

_DEPS = Abdomen.h \
		Head.h \
		InsectHead.h \
		InsectLeftLeg.h \
		InsectRightLeg.h \
		InsectPartFactory.h \
		InsectPartFactoryInterface.h \
		InsectRobotFactory.h \
		InsectRobotFactoryInterface.h \
		InsectRobot.h \
		LeftArm.h \
		LeftLeg.h \
		Part.h \
		RightArm.h \
		RightLeg.h \
		RobotFactoryInterface.h \
		Robot.h \
		RobotPartFactoryInterface.h \
		SoldierPartFactory.h \
		SoldierRobotFactory.h \
		SoldierRobot.h \
		Thorax.h \
		Torso.h \
		UnsupportedOpException.h \
		WorkerPartFactory.h \
		WorkerRobotFactory.h \
		WorkerRobot.h

DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))


_OBJ = Abdomen.o \
		Head.o \
		InsectHead.o \
		InsectLeftLeg.o \
		InsectRightLeg.o \
		InsectPartFactory.o \
		InsectPartFactoryInterface.o \
		InsectRobotFactory.o \
		InsectRobotFactoryInterface.o \
		InsectRobot.o \
		LeftArm.o \
		LeftLeg.o \
		Part.o \
		RightArm.o \
		RightLeg.o \
		RobotFactoryInterface.o \
		Robot.o \
		RobotPartFactoryInterface.o \
		SoldierPartFactory.o \
		SoldierRobotFactory.o \
		SoldierRobot.o \
		Thorax.o \
		Torso.o \
		UnsupportedOpException.o \
		WorkerPartFactory.o \
		WorkerRobotFactory.o \
		WorkerRobot.o \
		main.o

OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SDIR)/%.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(FLAGS)

robot: $(OBJ)
	$(CXX) -o $@ $^ $(FLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core

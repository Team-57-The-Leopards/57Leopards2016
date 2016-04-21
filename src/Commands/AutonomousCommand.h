#ifndef AutonomousCommand_H
#define AutonomousCommand_H

#include "Commands/CommandGroup.h"
#include "WPILib.h"

class AutonomousCommand: public CommandGroup
{
public:
	AutonomousCommand();
	AutonomousCommand(int choice);
	void LowBar();
	void RockWall();
	void Moat();
};

#endif

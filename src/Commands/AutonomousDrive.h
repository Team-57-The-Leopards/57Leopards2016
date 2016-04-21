#ifndef AutonomousDrive_H
#define AutonomousDrive_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

#include "WPILib.h"

class AutonomousDrive: public Command{
public:
	AutonomousDrive();
	AutonomousDrive(float speed, float turn, double timeout);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	float internalSpeed = 0;
	float internalTurn = 0;
};

#endif

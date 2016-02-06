#ifndef Intake_H
#define Intake_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Intake: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Intake();
	void InitDefaultCommand();
	void RotateArmUp();
	void RotateArmDown();
	void RollerIn();
	void RollerOut();
	CANTalon *intakeWheels;
	CANTalon *intakeArm;
};

#endif

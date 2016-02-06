#ifndef Intake_Up_H
#define Intake_Up_H

#include "../CommandBase.h"
#include "WPILib.h"

class Intake_Up: public CommandBase
{
public:
	Intake_Up();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif

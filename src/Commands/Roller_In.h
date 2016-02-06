#ifndef Roller_In_H
#define Roller_In_H

#include "../CommandBase.h"
#include "WPILib.h"

class Roller_In: public CommandBase
{
public:
	Roller_In();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif

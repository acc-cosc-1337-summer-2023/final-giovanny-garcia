#include "die.h"
#include "roll.h"
#include "shooter.h"
#include "phase.h"
#include "come_out_phase.h"
#include "point_phase.h"
#include <iostream>

using std::cout;

int main() 
{
	srand(time(0));
	Die die1;
	Die die2;
	Shooter shooter;
	int roll* = &Roll;
	roll = shooter.throw_die();

	ComeOutPhase come_out_phase;

	while(come_out_phase.get_outcome() == RollOutcome::Natural || come_out_phase.get_outcome() == RollOutcome::Craps)
	{
		cout << roll->roll_value() << "\nRoll Again \n";
		roll = shooter.throw_die();
	}

	cout << roll->roll_value() <<"\nStart of Point Phase \n";
	cout << "Roll until rolled value or 7 is rolled\n ";

	int point = roll->roll_value();
	roll = shooter.throw_die();

	PointPhase point_phase;

	while(point_phase.get_outcome() != RollOutcome::Point || point_phase.get_outcome() != RollOutcome::Seven_Out)
	{
		cout << roll->roll_value() << "\nRoll Again \n";
		roll = shooter.throw_die();
	}

	cout << roll->roll_value() << "\nEnd of Point Phase\n";
	cout << shooter.


	return 0;
}
#include <iostream>
#include "GetPassengers.h"
#include "IActivity.h"
#include "Move.h"
#include "Refuel.h"
#include "Train.h"
#include "TuTu.h"

int main()
{
    Train* train = new Train();

    train->SetActivity(new Refuel);
    train->ExecuteActivity();

    train->SetActivity(new GetPassengers);
    train->ExecuteActivity();

    train->SetActivity(new Move);
    train->ExecuteActivity();

    train->SetActivity(new TuTu);
    train->ExecuteActivity();

    train->SetActivity(new GetPassengers);
    train->ExecuteActivity();

    train->SetActivity(new Move);
    train->ExecuteActivity();

    train->SetActivity(new TuTu);
    train->ExecuteActivity();

    train->SetActivity(new Refuel);
    train->ExecuteActivity();

    delete train;
}
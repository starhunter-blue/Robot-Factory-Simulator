// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "Storyboard_Blocking.h"

UStoryboard_Blocking::UStoryboard_Blocking() {
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	AgendaCreationSequence.Add(EAgendaHas::AHE_Both);
	AgendaCreationSequence.Add(EAgendaHas::AHE_Request);
	AgendaCreationSequence.Add(EAgendaHas::AHE_Both);
	AgendaCreationSequence.Add(EAgendaHas::AHE_Request);

	Thoughts.Add("Wird am falschen Arbeitsplatz \nwahrscheinlich schlechte Arbeit leisten.");
	Thoughts.Add("Ist an diesem Arbeitsplatz besser aufgehoben.");
	Thoughts.Add("Arbeitet besser an dieser Stelle.");
	Thoughts.Add("Wird sonst langsamer arbeiten.");
	Thoughts.Add("Wird sonst schlechtere Arbeit leisten.");
	Thoughts.Add("Will nur an dieser Stelle arbeiten.");
	Thoughts.Add("Wird sich sonst unkooperativ zeigen.");
	Thoughts.Add("Ist sonst nicht motiviert zu arbeiten.");
	Thoughts.Add("Hat keine Lust wo anders zu arbeiten.");
	Thoughts.Add("Droht sonst schlechte Arbeit zu machen.");
	Thoughts.Add("Droht sonst die Arbeit schleifen zu lassen.");
}
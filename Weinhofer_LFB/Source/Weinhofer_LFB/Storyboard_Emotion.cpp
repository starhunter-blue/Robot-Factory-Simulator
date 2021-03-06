// Copyright © 2020 Mathias Weinhofer - All Rights Reserved


#include "Storyboard_Emotion.h"

UStoryboard_Emotion::UStoryboard_Emotion() {
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	AgendaCreationSequence.Add(EAgendaHas::AHE_Thought);
	AgendaCreationSequence.Add(EAgendaHas::AHE_Thought);
	AgendaCreationSequence.Add(EAgendaHas::AHE_Request);
	AgendaCreationSequence.Add(EAgendaHas::AHE_Both);

	Thoughts.Add("Ist sehr zufrieden mit den Arbeitsbedingungen.");
	Thoughts.Add("Freut sich hier zu arbeiten.");
	Thoughts.Add("Ist froh hier zu arbeiten.");
	Thoughts.Add("Findet dass Sie gute Arbeit leisten.");
	Thoughts.Add("Denkt dass Sie ein guter Chef sind.");
	Thoughts.Add("Findet dass Sie gute Entscheidungen treffen.");
	Thoughts.Add("Meint dass Sie ihren Job gut machen.");
	Thoughts.Add("Will sich bei Ihnen bedanken.");
	Thoughts.Add("Findet Sie sympathisch.");
	Thoughts.Add("Will sein Bestes geben.");

}
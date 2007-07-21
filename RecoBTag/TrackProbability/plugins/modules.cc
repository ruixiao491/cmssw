#include "FWCore/Framework/interface/ModuleFactory.h"
#include "FWCore/Framework/interface/MakerMacros.h"

#include "RecoBTau/JetTagComputer/interface/JetTagComputerESProducer.h"
#include "RecoBTag/TrackProbability/interface/JetProbabilityComputer.h"
#include "RecoBTag/TrackProbability/interface/TrackProbability.h"


DEFINE_FWK_MODULE(TrackProbability);



typedef JetTagComputerESProducer<JetProbabilityComputer>       JetProbabilityESProducer;
DEFINE_ANOTHER_FWK_EVENTSETUP_MODULE(JetProbabilityESProducer);



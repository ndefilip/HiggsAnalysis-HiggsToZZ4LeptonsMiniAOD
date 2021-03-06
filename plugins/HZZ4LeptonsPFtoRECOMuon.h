#ifndef  HZZ4LeptonsPFtoRECOMuon_h
#define  HZZ4LeptonsMuonnSelector_h

/**\class HZZ4LeptonsPFtoRECOMuon
 *
 *
 * Original Author:  Nicola De Filippis
 *
 * Create muon reco collection from PF muons
 *
 */

// system include files
#include <memory>

// user include files
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/EDProducer.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/MakerMacros.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "FWCore/Utilities/interface/InputTag.h"
#include "DataFormats/ParticleFlowCandidate/interface/PFCandidate.h"

class HZZ4LeptonsPFtoRECOMuon : public edm::EDProducer {
 public:
  explicit HZZ4LeptonsPFtoRECOMuon(const edm::ParameterSet& );
  ~HZZ4LeptonsPFtoRECOMuon();

 private:
  virtual void produce(edm::Event&, const edm::EventSetup&);

  bool isMuon;
  edm::EDGetTokenT<edm::View<reco::PFCandidate> > pfLabel;     

};

#endif

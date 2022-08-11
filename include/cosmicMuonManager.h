//
// Created by Meng Lv on 2022/8/6.
//

#ifndef MUSRSIM_JP_COSMICMUONMANAGER_H
#define MUSRSIM_JP_COSMICMUONMANAGER_H

#include "globals.hh"
#include "Randomize.hh"
#include "TMath.h"
#include "TRandom.h"
#include "TF1.h"

class cosmicMuonManager {
public:
    cosmicMuonManager();
    ~cosmicMuonManager();

    static cosmicMuonManager& GetInstance();    // Meyers’ Singleton
    G4double GetRndCosmicMuonEnergy(G4double theta);

private:
    TF1 cosmicPDF;

};


#endif //MUSRSIM_JP_COSMICMUONMANAGER_H

//
// Created by Meng Lv on 2022/8/6.
//

#ifndef MUSRSIM_JP_COSMICMUONMANAGER_H
#define MUSRSIM_JP_COSMICMUONMANAGER_H

#include "globals.hh"
#include "Randomize.hh"

class cosmicMuonManager {
public:
    cosmicMuonManager();
    ~cosmicMuonManager();

    static cosmicMuonManager& GetInstance();    // Meyers’ Singleton
    G4double GetRndCosmicMuonEnergy(G4double theta);



};


#endif //MUSRSIM_JP_COSMICMUONMANAGER_H

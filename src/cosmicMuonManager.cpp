//
// Created by Meng Lv on 2022/8/6.
//

#include "cosmicMuonManager.h"

cosmicMuonManager::cosmicMuonManager(): cosmicPDF("cosmicPDF", "pow(x+3.64/pow([0], 1.29), -2.7) * (1/(1+1.1*x*[0]/115) + 0.054/(1+1.1*x*[0]/850))", 0.106, 1000) {
}

G4double cosmicMuonManager::GetRndCosmicMuonEnergy(G4double theta) {
//    G4double uni_var = G4UniformRand();
    G4double theta_rad = theta * TMath::Pi() / 180;
    G4double cos_theta = std::cos(theta_rad);
    G4double P_1 = 0.102573;
    G4double P_2 = -0.068287;
    G4double P_3 = 0.958633;
    G4double P_4 = 0.0407253;
    G4double P_5 = 0.817285;

    G4double num = cos_theta*cos_theta + P_1*P_1 + P_2*std::pow(cos_theta, P_3) + P_4*std::pow(cos_theta, P_5);
    G4double den = 1 + P_1*P_1 + P_2 + P_4;
    G4double cos_theta_star = std::sqrt(num/den);
//    std::cout << cos_theta_star << std::endl;

//    double E=0.;
//    if (uni_var <= 0.7937){
//        E = 5.8658*pow(uni_var,5) + 3.2157*pow(uni_var,4) - 2.3057*pow(uni_var,3) + 2.1921*pow(uni_var, 2) + 2.1139*uni_var + 0.0108;
//    }
//    else if (uni_var <= 0.9685){
//        E = 166396.27*pow(uni_var,5) - 691709.65*pow(uni_var,4) + 1149173.10*pow(uni_var,3) - 953576.45*pow(uni_var, 2) + 395173.77*uni_var - 65421.98;
//    }
//    else {
//        E = 1/(0.1816 * std::pow(1-uni_var, 0.45)) - 5.6187;
//        if (E > 200) E = 200;   // 200 GeV cut off
//    }
    cosmicPDF.SetParameter(0, cos_theta_star);

    G4double E = cosmicPDF.GetRandom();

    E *= 1000;  // GeV to MeV
    return E;
}

cosmicMuonManager& cosmicMuonManager::GetInstance() {
    static cosmicMuonManager instance;
    return instance;
}

cosmicMuonManager::~cosmicMuonManager() {

}

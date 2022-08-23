# <center>Project Weekly Plan</center>

## 7.12 - 7.18
### Meng
- [x] Create a j-box folder to share programme, data and report slides
- [x] Enable the customization of random seed
- [x] Search for an optimized target size that will generate more decay events for 50 MeV $\mu^+$
### Xin tong
- [x] Analyze the performance of the 3-layer detector and evaluate its feasibility
- [ ] Find the distribution of $mu^+$ decay position and angular distribution of generated $e^+$
### Fang yuan
- [ ] Write an analysis program based on 3-layer detector structure to support Xin tong's analysis
### Group meeting indico page
    https://indico-tdli.sjtu.edu.cn/event/1194

## 7.19 - 7.25
### Meng
- [x] Cosmic muon production
- [x] Paper reading

### Xin tong
- [x] Analysis algorithm debug
- [ ] Calibration of different polarization
- [ ] Use distributed muon, comparing the result with non-distributed one

### Fang yuan
- [x] Study targets' ability to stop muon with different muon

## 8.3-8.16
### Meng
- [x] Cosmic muon production in musrSim
- [x] Construct a simplified shell
- [x] Cnostruct a new detector and evaluate its performance

### Xin tong
- [x] Use det_time to find the time interval of two hits that are caused by the same positron in the same detector
- [x] Add det_time cut, to reduce those vector.size>3 to 3 (Only 1 hit in each detector)
- [ ] Evaluate e+ capture ratio based on above improvements
- [x] Add separation time to reduce repeating hits

### Group meeting indico page
```
https://indico-tdli.sjtu.edu.cn/event/1225/
https://indico-tdli.sjtu.edu.cn/event/1232/
```

### Fang yuan
- [x] Refer to [Phys. Rev. 122, 1883](https://journals.aps.org/pr/abstract/10.1103/PhysRev.122.1883). Use same Lead and Cu absorber to stop muon. Validate its conclusion (momentum should > 540 MeV/c)

### Si yuan
- [x] Continue studying the angular distribution of e+ decayed from thermal muon
- [x] Compare e+ angular distribution with shell and without shell

### Group meeting indico page
```
https://indico-tdli.sjtu.edu.cn/event/1242/
```

## 8.17-8.23(Group presentation)
### Meng
- [x] Apply new size to the new detector structure
- [x] Change shell material to Al
- [x] Apply filter+absorber structure to new detector structure
- [ ] Compare detector outcome of Cu absorber and Fe absorber

### Xin tong
- [x] Simplify the shell with solidworks
- [x] Apply new size to the 3-layer detector structure and evaluate its performance
- [x] Develop and optimize polarization detecting algorithm
- [x] Evaluate performance with shell and without shell

### Fang yuan
- [x] Study the influence of the shell to energy filter range
- [x] Use AB$\bar{C}$ detector signal to judge whether muon decays in absorber
- [x] Study the time interval between AB$\bar{C}$ signal and muon decay time
- [x] Compare energy range with Cu absorber and Fe absorber

### Si yuan
- [x] Change shell material to Al and study its angular distribution again
- [x] Compare distribution without shell to theoretical distribution

### Group meeting indico page
```
https://indico-tdli.sjtu.edu.cn/event/1249/
```

## 8.24-8.30
### Meng
- [ ] Add coincidence to cosmic detector
- [ ] Prepare SJTU-KEK workshop presentation slide

### Xin tong
- [ ] Continue simplifying the shell (add inner ring)
- [ ] Adjust scintillator thickness to 1cm (the actual thickness we'll use)
- [ ] Evaluate 3-layer detector performance with the simplified shell in thermal muon

### Fang yuan
- [ ] Remove the shell
- [ ] Optimize the thickness of lead filter for a better yield
- [ ] Evaluate the accuracy of (anti)coincidence detector when judging whether mu+ decay in absorber

### Si yuan
- [ ] Plot the energy and asymmetry figure in paper
- [ ] Compare e+ decay angular distribution of mu+ decay in Cu absorber and Fe absorber

## Future work reminder
- [ ] Create a process that convert surface muon into thermal muon
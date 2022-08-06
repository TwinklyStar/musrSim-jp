# <center>Project Weekly Plan</center>

## 7.12 - 7.18
### Meng
- [x] Create a j-box folder to share programme, data and report slides
- [x] Enable the customization of random seed
- [x] Search for an optimized target size that will generate more decay events for 50 MeV $\mu^+$
### Xin tong
- [ ] Analyze the performance of the 3-layer detector and evaluate its feasibility
- [ ] Find the distribution of $mu^+$ decay position and angular distribution of generated $e^+$
### Fang yuan
- [ ] Write an analysis program based on 3-layer detector structure to support Xin tong's analysis
### Group meeting indico page
    https://indico-tdli.sjtu.edu.cn/event/1194

## 7.19 - 7.25
### Meng
- [ ] Cosmic muon production
- [x] Paper reading

### Xin tong
- [x] Analysis algorithm debug
- [ ] Calibration of different polarization
- [ ] Use distributed muon, comparing the result with non-distributed one

### Fang yuan
- [ ] Study targets' ability to stop muon with different muon

## 8.3-8.9
### Meng
- [x] Cosmic muon production in musrSim

### Xin tong
- [ ] Use det_time to find the time interval of two hits that are caused by the same positron in the same detector
- [ ] Add det_time cut, to reduce those vector.size>3 to 3 (Only 1 hit in each detector)
- [ ] Evaluate e+ capture ratio based on above improvements

### Fang yuan
- [ ] Refer to [Phys. Rev. 122, 1883](https://journals.aps.org/pr/abstract/10.1103/PhysRev.122.1883). Use same Lead and Cu absorber to stop muon. Validate its conclusion (momentum should > 540 MeV/c)

### Si yuan
- [ ] Continue studying the angular distribution of e+ decayed from thermal muon